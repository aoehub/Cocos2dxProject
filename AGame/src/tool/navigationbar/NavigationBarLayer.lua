--
-- Author: huger
-- Date: 2018-01-22 15:59:11
--
local NavBarLayer = class("NavBarLayer", function (  )
	return cc.Layer:create()
end)


function NavBarLayer:ctor(navbar)
	self.control = navbar
	self:initUI()
	return NavBarLayer
end

function NavBarLayer:initUI()
	local height = self.control.height
	local title = cc.Label:createWithSystemFont(self.control.title,"黑体",30)
	title:setPosition(cc.p(display.width/2,(height-22*CC_SCREEN_RATIO)/2))
	local bg = cc.LayerColor:create(COLOR_NAVIBARCOLOR,display.width,height)
	bg:setPosition(cc.p(0,display.height - height))
	print(display.height)
	self:addChild(bg)
	bg:addChild(title)
	self.bg = bg
	self:addRightItem()
end

function NavBarLayer:addRightItem()
	local menu = cc.Menu:create()
	menu:setPosition(0,0)
	local icon1 = cc.Sprite:create("home/barbuttonicon_add@2x.png")
	local icon2 = cc.Sprite:create("home/barbuttonicon_add@2x.png")
	local menuItem = cc.MenuItemSprite:create(icon1,icon2)
	menuItem:setPosition(cc.p(display.width - menuItem:getContentSize().width/2 - 20,(self.control.height-22*CC_SCREEN_RATIO)/2))
	menuItem:registerScriptTapHandler(function ()
			print("yooooooooo")
		end)
	menu:addChild(menuItem)

	print(menu:getContentSize().width)
	self.bg:addChild(menu)
end


return NavBarLayer