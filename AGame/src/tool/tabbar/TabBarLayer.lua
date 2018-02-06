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
	local height = self.control.height
	local menu = cc.Menu:create()
	menu:setPosition(cc.p(0,0))
	local icons = {"mainframe","contacts","discover","me"}
	for i=1,self.control.indexs do
		local icon1 = cc.Sprite:create("tab/tabbar_"..icons[i].."@2x"..".png")
		local icon2 = cc.Sprite:create("tab/tabbar_"..icons[i].."HL@2x"..".png")
		local posx = icon1:getContentSize().width
		local text1 = cc.Label:createWithSystemFont(self.control.tabItemTexts[i],"Arial",20)
		text1:setPosition(cc.p(posx/2,-17))
		local text2 = cc.Label:createWithSystemFont(self.control.tabItemTexts[i],"Arial",20)
		text2:setPosition(cc.p(posx/2,-17))
		text1:setColor(cc.c3b(122,136,131))
		text2:setColor(cc.c3b(9,187,7))
		icon1:setPosition(cc.p(display.width/8,height/2 + 10))
		icon2:setPosition(cc.p(display.width/8,height/2 + 10))
		icon2:addChild(text2)
		icon1:addChild(text1)
		local menuItem = cc.MenuItemSprite:create(icon1,icon2)
		menuItem:setPosition(cc.p(display.width/4*(i-1)+display.width/8,height/2))
		menuItem:setContentSize(cc.size(display.width/4, height))
		menuItem:setTag(i+50)
		icon1:setAnchorPoint(cc.p(0.5,0.5))
		icon2:setAnchorPoint(cc.p(0.5,0.5))

		menuItem:registerScriptTapHandler(function ()
			if self.control.selectedIndex == i then
				menuItem:selected()
			else
				menu:getChildByTag(50+self.control.selectedIndex):unselected()
				menuItem:selected()
				self.control.selectedIndex = i
				self.control:reload()
			end
		end)
		menu:addChild(menuItem)
	end
	menu:getChildByTag(50+self.control.selectedIndex):selected()
	local bg = cc.LayerColor:create(COLOR_TABBAR_BG_COLOR,display.width,height)
	bg:setPosition(cc.p(0,0))
	local bg2 = cc.LayerColor:create(COLOR_TABBAR_LINE_COLOR,display.width,1)
	bg2:setPosition(cc.p(0,height-1))
	bg:addChild(bg2)
	self:addChild(bg)
	bg:addChild(menu)
end


return TabBarLayer