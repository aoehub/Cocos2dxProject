--
-- Author: huger
-- Date: 2018-01-17 16:33:21
--
local  FindLayer = class("FindLayer", function (  )
	return cc.Layer:create()
end)

function FindLayer:ctor(  )
	local label = cc.Label:createWithSystemFont("find","",50)
	label:setPosition(cc.p(100,100))
	self:addChild(label)

	local tablet = require("tool.tablet")
	local tabletUI = tablet:initUI()
	self:addChild(tabletUI,400)



	local button = cc.ControlButton:create("清空","",40)
	button:setPosition(cc.p(200,200))
	button:registerControlEventHandler(function()
		tablet:clear()
	end,cc.CONTROL_EVENTTYPE_TOUCH_UP_INSIDE)
	tabletUI:addChild(button)

	local saveBtn = cc.ControlButton:create("保存","",40)
	saveBtn:setPosition(cc.p(400,200))
	saveBtn:registerControlEventHandler(function()
		tablet:savePic()
	end,cc.CONTROL_EVENTTYPE_TOUCH_UP_INSIDE)
	tabletUI:addChild(saveBtn)


end

return FindLayer