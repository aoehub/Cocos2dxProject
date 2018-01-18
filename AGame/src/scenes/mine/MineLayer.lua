--
-- Author: huger
-- Date: 2018-01-17 16:33:52
--
local  layer = class("Mine", function (  )
	return cc.Layer:create()
end)

function layer:ctor(  )
	local label = cc.Label:createWithSystemFont("mine","",50)
	label:setPosition(cc.p(100,100))
	self:addChild(label)
end

return layer