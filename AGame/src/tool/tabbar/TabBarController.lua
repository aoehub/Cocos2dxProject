--
-- Author: huger
-- Date: 2018-01-17 11:30:37
--
local TabBarController = class("TabBarController")

function TabBarController:ctor(scene)
	self.basescene = scene 
	self.baselayer = nil
	self.views = nil
	self.selectedView = nil
	self.selectedIndex = 1
	self.currentIndex = 1
	self.tabbarItem = {}
	self.indexs = 4
	self.tabItemIcons = {}
	self.tabItemTexts = {"1","2","3","4"}
	self:init()
end


function TabBarController:init()

	self.baselayer = require("tool.tabbar.TabBarLayer").new(self)
	self.basescene:addChild(self.baselayer,666,101)

	local layer1 = require("scenes.home.HomeLayer").new()
	local layer2 = require("scenes.group.GroupLayer").new()
	local layer3 = require("scenes.find.FindLayer").new()
	local layer4 = require("scenes.mine.MineLayer").new()

	local layers = cc.LayerMultiplex:create(layer1,layer2,layer3,layer4)
	self.basescene:addChild(layers,555)
	self.views = layers
	self:reload()
end

function TabBarController:reload()
	print(self.selectedIndex)
	self.views:switchTo(self.selectedIndex - 1)
	self.currentIndex = self.selectedIndex
end


return TabBarController