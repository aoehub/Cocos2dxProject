--
-- Author: huger
-- Date: 2018-01-17 16:33:31
--
local  GroupLayer = class("GroupLayer", function (  )
	return cc.Layer:create()
end)

function GroupLayer:ctor(  )
	local label = cc.Label:createWithSystemFont("GroupLayer","",50)
	label:setPosition(cc.p(100,100))
	self:addChild(label)
	self:drawPolygon(200,200,200,200,200,cc.c4f(1, 1, 1, 0.5))
	self:drawPolygon(150,150,150,150,150,cc.c4f(0, 0, 0, 0))
	self:drawPolygon(100,100,100,100,100,cc.c4f(0, 0, 0, 0))
	self:drawPolygon(50,50,50,50,50,cc.c4f(0, 0, 0, 0))

	self:drawPolygon(150 - 5,50- 5,100- 5,150- 5,100- 5,cc.c4f(0, 0, 1, 0.5))

end

function GroupLayer:init()
	local  bg = cc.Sprite:create("HelloWorld.png")
	bg:setPosition(cc.p(display.width/2, display.height/2))
	self:addChild(bg)

	local gameTitle = cc.Sprite:create("2.jpg")
	local clipSize = gameTitle:getContentSize()

	local spark = cc.Sprite:create("a.png")
	
	spark:setPosition(cc.p(-clipSize.width,0))

	local clippingNode = cc.ClippingNode:create()
	clippingNode:setPosition(cc.p(display.width/2, display.height/2))

	self:addChild(clippingNode)

	clippingNode:setAlphaThreshold(0.05)
	clippingNode:setContentSize(clipSize)

	clippingNode:setStencil(gameTitle)
	clippingNode:addChild(gameTitle,1)
	clippingNode:addChild(spark,2)

	local moveAction = cc.MoveTo:create(2.0, cc.p(clipSize.width,0))
	local moveBackAction = cc.MoveTo:create(2.0, cc.p(-clipSize.width,0))
	spark:runAction(cc.RepeatForever:create(cc.Sequence:create(moveAction, moveBackAction)))


end

function GroupLayer:drawPolygon()
	local center = cc.p(display.width/2,display.height/2)
	local length = 100
	local coef     = math.pi / 3
	local ht = length * math.sin(coef)
	print(ht)
	local points = {}

	table.insert(points, cc.p(center.x,center.y + length))
	table.insert(points, cc.p(center.x + ht,center.y + length/2))
	table.insert(points, cc.p(center.x + ht,center.y - length/2))
	table.insert(points, cc.p(center.x,center.y - length))
	table.insert(points, cc.p(center.x - ht,center.y - length/2))
	table.insert(points, cc.p(center.x - ht,center.y + length/2))
	local drawNode = cc.DrawNode:create()
	self:addChild(drawNode)

	drawNode:drawPolygon(points, #points, cc.c4f(1, 1, 1, 0.5), 5, cc.c4f(1, 0, 0, 1))


end

function GroupLayer:drawPolygon(a, b, c, d, e, color)

	local center = cc.p(display.width/2,display.height/2)
	local length = 100
	local coef     = math.pi / 10
	print(ht)
	local points = {}

	table.insert(points, cc.p(center.x,center.y + a))
	table.insert(points, cc.p(center.x + b * math.cos(coef),center.y + b * math.sin(coef)))
	table.insert(points, cc.p(center.x + c * math.sin(math.pi / 5),center.y - c * math.cos(math.pi / 5)))
	table.insert(points, cc.p(center.x - d * math.sin(math.pi / 5),center.y - d * math.cos(math.pi / 5)))
	table.insert(points, cc.p(center.x - e * math.cos(coef),center.y + e * math.sin(coef)))
	local drawNode = cc.DrawNode:create()
	self:addChild(drawNode)

	drawNode:drawPolygon(points, #points, color, 5, cc.c4f(1, 0, 0, 1))

	for i,v in ipairs(points) do
		drawNode:drawDot(v, 10, cc.c4f(0, 0, 1, 1))
	end

end

return GroupLayer