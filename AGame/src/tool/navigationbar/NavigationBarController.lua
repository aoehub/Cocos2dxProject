--
-- Author: huger
-- Date: 2018-01-22 15:58:57
--
local NavBarControl = class("NavBarControl")

function NavBarControl:ctor(scene)
	self.basescene = scene
	self.baselayer = nil
	self.title = nil
	self.leftItem = nil
	self.rightItem = nil
	self.bgView = nil
	self.currentIndex = 1
	self.views = {}
	self.indexs = 1
	self.height = 0
	self:init()
end



function NavBarControl:init()
	self.height = 64*CC_SCREEN_RATIO
	self.title = "微信"
	self.baselayer = require("tool.navigationbar.NavigationBarLayer").new(self)
	self.basescene:addChild(self.baselayer,665,102)
end
return NavBarControl