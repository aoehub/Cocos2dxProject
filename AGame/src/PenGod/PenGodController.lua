--
-- Author: huger
-- Date: 2018-02-06 15:13:50
--
local PenGodControl = class("PenGodControl")

function PenGodControl:ctor(scene)
	self.scene = scene
	self:initUI(self)
	
end

function PenGodControl:initUI()
	self.layer = require("PenGod.PenGodLayer").new()
	self.scene:addChild(self.layer)
end


function PenGodControl:onEnter()
	
end

function PenGodControl:onExit()
	
end
return PenGodControl