--
-- Author: huger
-- Date: 2018-02-05 10:19:36
--
local tablet = class("tablet")

local ui 	  			= nil
local drawNode 			= nil
local showNode 			= nil
local penRadius   		= nil
local penColor   		= nil
local paint_true_area 	= nil
local brush 			= nil


function tablet:ctor()
	self.ui = ui
end

function tablet:initUI(radius, color)
	ui = cc.Layer:create()
	ui:registerScriptHandler(function(eventType)
		if eventType == "enter" then
			self:onEnter()
		elseif eventType == "exit" then
			self:onExit()
		end
	end)

	ui:registerScriptTouchHandler(function(eventType, x, y)
		if eventType == "began" then
			self:onTouchBegan(x, y)
			return true
		elseif eventType == "moved" then
			self:onTouchMoved(x, y)
			return true
		elseif eventType == "ended" then
			self:onTouchEnded(x, y)
			return true
		end
	end, false, 0, true)
	ui:setTouchEnabled(true)
	if radius == nil then
		penRadius = 10
	end
	if color == nil then
		penColor = cc.c4f(1,1,1,1)
	end

   	paint_true_area = cc.RenderTexture:create(display.width,display.height, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888)
   	paint_true_area:setPosition(display.width/2, display.height/2)
    ui:addChild(paint_true_area)
	
	print("生成drawnode")
	drawNode = cc.DrawNode:create()
	ui:addChild(drawNode)

	return ui
end

function tablet:savePic()
  	local retSprite = cc.Sprite:createWithTexture(paint_true_area:getSprite():getTexture())
  	retSprite:setFlippedY(true)
  	retSprite:setScale(0.5)

  	if showNode ~= nil then
  		showNode:removeFromParentAndCleanup(true)
  		showNode = nil
  	end
  	showNode = retSprite
  	showNode:setPosition(cc.p(display.width/4,display.height/4))
  	
	ui:addChild(showNode)
	glEnable(GL_POINT_SMOOTH);
    glEnable(GL_LINE_SMOOTH);
	paint_true_area:saveToFile("ok.png", cc.IMAGE_FORMAT_PNG)
	print(cc.FileUtils:getInstance():getWritablePath())
end

function tablet:clear()
	print("aaaaaaa")
	paint_true_area:clear(0,0,0,0)
	if showNode ~= nil then
		showNode:removeFromParentAndCleanup(true)
		showNode = nil
	end
	
end
  	

function tablet:onEnter()
	print("enter")
end


function tablet:onExit()
	print("exit")
	if drawNode ~= nil then
		drawNode:release()
	end
	if showNode ~= nil then
		showNode:release()
	end
end

function tablet:onTouchBegan(x, y)
	originPoint = cc.p(x, y)
end

function tablet:onTouchMoved(x, y)
	drawNode:drawSegment(originPoint, cc.p(x, y), penRadius, penColor)
	paint_true_area:begin()
	drawNode:visit()
	paint_true_area:endToLua()
	originPoint = cc.p(x, y)
end

function tablet:onTouchEnded(x, y)
	drawNode:clear()

	print("end~")
end

return tablet
