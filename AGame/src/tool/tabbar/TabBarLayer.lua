--
-- Author: huger
-- Date: 2018-01-17 11:26:40
--
local TabBarLayer = class("TabBarLayer", function (  )
	return cc.Layer:create()
end)


function TabBarLayer:ctor(tabbar)
	self.control = tabbar
	self:initUI()
	return TabBarLayer
end

function TabBarLayer:initUI()
	print("aaaaaaa")
	print(self.control.indexs)
	local menu = cc.Menu:create()
	menu:setPosition(cc.p(0,0))
	local icons = {"mainframe","contacts","discover","me"}
	for i=1,self.control.indexs do
		local icon1 = cc.Sprite:create("tab/tabbar_"..icons[i].."@2x"..".png")
		local icon2 = cc.Sprite:create("tab/tabbar_"..icons[i].."HL@2x"..".png")
		-- local text = cc.Label:createWithSystemFont(self.control[i],"Arial",16)
		-- text:setPosition(cc.p(display.width/4*(i-1),0))
		icon1:setPosition(cc.p(display.width/8,95/2))
		icon2:setPosition(cc.p(display.width/8,95/2))
		local menuItem = cc.MenuItemSprite:create(icon1,icon2)
		menuItem:setPosition(cc.p(display.width/4*(i-1)+display.width/8,95/2))
		menuItem:setContentSize(cc.size(display.width/4, 95))
		menuItem:setTag(i+50)
		icon1:setAnchorPoint(cc.p(0.5,0.5))
		icon2:setAnchorPoint(cc.p(0.5,0.5))
		
		menuItem:registerScriptTapHandler(function ()
			menu:getChildByTag(50+self.control.selectedIndex):unselected()
			menuItem:selected()
			self.control.selectedIndex = i
			self.control:reload()
		end)
		menu:addChild(menuItem)
	end
	menu:getChildByTag(50+self.control.selectedIndex):selected()
	local bg = cc.LayerColor:create(cc.c4b(255, 255, 255, 100),display.width,95)
	bg:setPosition(cc.p(0,0))
	self:addChild(bg)
	bg:addChild(menu)
end


return TabBarLayer