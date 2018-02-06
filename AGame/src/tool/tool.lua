--
-- Author: huger
-- Date: 2018-01-29 16:57:22
--

tool = {}

-- 传入DrawNode对象，画圆角矩形
function tool.drawNodeRoundRect(drawNode, rect, borderWidth, radius, color, fillColor)
  -- segments表示圆角的精细度，值越大越精细
  local segments    = 20
  local origin      = cc.p(rect.x, rect.y)
  local destination = cc.p(rect.x + rect.width, rect.y - rect.height)
  local points      = {}

  -- 算出1/4圆
  local coef     = math.pi / 2 / segments
  local vertices = {}

  for i=0, segments do
    local rads = (segments - i) * coef
    local x    = radius * math.sin(rads)
    local y    = radius * math.cos(rads)

    table.insert(vertices, cc.p(x, y))
  end

  local tagCenter      = cc.p(0, 0)
  local minX           = math.min(origin.x, destination.x)
  local maxX           = math.max(origin.x, destination.x)
  local minY           = math.min(origin.y, destination.y)
  local maxY           = math.max(origin.y, destination.y)
  local dwPolygonPtMax = (segments + 1) * 4
  local pPolygonPtArr  = {}

  -- 左上角
  tagCenter.x = minX + radius;
  tagCenter.y = maxY - radius;

  for i=0, segments do
    local x = tagCenter.x - vertices[i + 1].x
    local y = tagCenter.y + vertices[i + 1].y

    table.insert(pPolygonPtArr, cc.p(x, y))
  end

  -- 右上角
  tagCenter.x = maxX - radius;
  tagCenter.y = maxY - radius;

  for i=0, segments do
    local x = tagCenter.x + vertices[#vertices - i].x
    local y = tagCenter.y + vertices[#vertices - i].y

    table.insert(pPolygonPtArr, cc.p(x, y))
  end

  -- 右下角
  tagCenter.x = maxX - radius;
  tagCenter.y = minY + radius;

  for i=0, segments do
    local x = tagCenter.x + vertices[i + 1].x
    local y = tagCenter.y - vertices[i + 1].y

    table.insert(pPolygonPtArr, cc.p(x, y))
  end

  -- 左下角
  tagCenter.x = minX + radius;
  tagCenter.y = minY + radius;

  for i=0, segments do
    local x = tagCenter.x - vertices[#vertices - i].x
    local y = tagCenter.y - vertices[#vertices - i].y

    table.insert(pPolygonPtArr, cc.p(x, y))
  end

  if fillColor == nil then
    fillColor = cc.c4f(0, 0, 0, 0)
  end

  drawNode:drawPolygon(pPolygonPtArr, #pPolygonPtArr, fillColor, borderWidth, color)
end

function tool.maskedSprite(spritePath, size, radius)
    local textureSprite = cc.Sprite:create(spritePath)
    local textureSize = textureSprite:getContentSize()
    local scale = nil
    if textureSize.width > textureSize.height then
      scale = size.height/textureSize.height
    else
      scale = size.width/textureSize.width
    end
    textureSprite:setScale(scale)

    local maskSprite = cc.DrawNode:create()
    tool.drawNodeRoundRect(maskSprite, cc.rect(-textureSize.width/2*scale, textureSize.height/2*scale, textureSize.width*scale, textureSize.height*scale), 0.001, radius, cc.c4f(1, 1, 1, 1), cc.c4f(1, 1, 1, 1))
    
    local renderTexture = cc.RenderTexture:create(textureSize.width,textureSize.height)
    maskSprite:setPosition(cc.p(textureSize.width/2,textureSize.height/2))
    textureSprite:setPosition(cc.p(textureSize.width/2,textureSize.height/2))
  
    maskSprite:setBlendFunc(cc.blendFunc(GL_ONE,GL_ZERO))
    textureSprite:setBlendFunc(cc.blendFunc(GL_DST_ALPHA,GL_ZERO))

    renderTexture:begin()
    maskSprite:visit()
    textureSprite:visit()
    renderTexture:endToLua()
 
    local retSprite = cc.Sprite:createWithTexture(renderTexture:getSprite():getTexture())
    retSprite:setFlippedY(true)
    return retSprite
end

function tool.createBorder(borderSize, borderWidth)
  
  local maskSprite = cc.DrawNode:create()
  local points = {}
  table.insert(points, cc.p(2, 2))
  table.insert(points, cc.p(borderSize.width - 2, 2))
  table.insert(points, cc.p(borderSize.width-2, borderSize.height-2))
  table.insert(points, cc.p(2, borderSize.height-2))

  maskSprite:drawPolygon(points, #points, cc.c4f(0, 0, 0, 0), borderWidth, cc.c4f(0, 0, 0, 1))

  local renderTexture = cc.RenderTexture:create(borderSize.width,borderSize.height)
  maskSprite:setPosition(cc.p(borderSize.width/2, borderSize.height/2))

  maskSprite:setBlendFunc(cc.blendFunc(GL_ONE,GL_ZERO))

  renderTexture:begin()
  maskSprite:visit()
  renderTexture:endToLua()

  local retSprite = cc.Sprite:createWithTexture(renderTexture:getSprite():getTexture())
  retSprite:setFlippedY(true)
  return retSprite


end


return tool
