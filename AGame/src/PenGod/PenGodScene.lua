--
-- Author: huger
-- Date: 2018-02-06 15:14:23
--
local PenGodScene = class("PenGodScene",function() 
		return cc.Scene:create()
	end)

function PenGodScene:ctor()
	self:init()
	return self
end

function PenGodScene:init()
	self.controller = require("PenGod.PenGodController").new(self)
end

function PenGodScene:onEnter()
	printInfo("enter")
	self.controller:onEnter()
end

function PenGodScene:onExit()
	printInfo("exit")
	self.controller:onExit()
end

return PenGodScene