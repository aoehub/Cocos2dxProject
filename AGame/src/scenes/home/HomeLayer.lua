--
-- Author: huger
-- Date: 2018-01-17 16:33:41
--
local  layer = class("Home", function (  )
	return cc.Layer:create()
end)

function layer:ctor(  )
	local label = cc.Label:createWithSystemFont("home","",50)
	label:setPosition(cc.p(100,100))
	self:addChild(label)
end

return layer