--
-- Author: huger
-- Date: 2018-02-06 15:14:14
--
local PenGodLayer = class("PenGodLayer",function()
		return cc.Layer:create()
	end)

function PenGodLayer:ctor()
	self:initUI()
	return self
end

function PenGodLayer:showMenu()

end

function PenGodLayer:initUI()
	-- local label = cc.Label:createWithSystemFont("haha","",50)
	-- label:setPosition(cc.p(100,100))
	-- self:addChild(label)

	local bgView = cc.LayerColor:create(COLOR_BGCOLOR, display.width, display.height)
	self:addChild(bgView,-1)

	local bottomMenu = cc.Menu:create()
	bottomMenu:setPosition(cc.p(100,100))
	self:addChild(bottomMenu)

	local selectedItem = cc.MenuItemImage:create("find/Shake_icon_peopleHL@2x.png", "find/Shake_icon_peopleHL@2x.png")
	local unselectedItem = cc.MenuItemImage:create("find/Shake_icon_people@2x.png", "find/Shake_icon_people@2x.png")
	local toggle = cc.MenuItemToggle:create(selectedItem,unselectedItem)
	bottomMenu:addChild(toggle,100)
	-- toggle:setPosition(cc.p(100,100))

	for i = 1, 5 do 
		local item = cc.MenuItemImage:create("find/Shake_icon_people@2x.png", "find/Shake_icon_people@2x.png")
		bottomMenu:addChild(item)
		item:setTag(i)
		item:setPosition(cc.p(80*(i - 1), 0))
		item:setVisible(false)
		item:registerScriptTapHandler(function(num)
			printInfo(num)
		end)
	end


	local index = 1
	local isShow = true
	local isStop = true


	toggle:registerScriptTapHandler(function()
		local function showMenu()
			isStop = false
			if isShow then
				local item = bottomMenu:getChildByTag(index)
				if item == nil then
					isStop = true
					return
				else
					item:setVisible(true)
				end
				printInfo("show "..index)
				index = index + 1
				local moveAction = cc.MoveTo:create(0.05, cc.p(item:getPositionX() + 80, 0))
				local fadeAction = cc.FadeIn:create(0.05)
				local easeAction = cc.EaseOut:create(moveAction,3)
				local spanAcction = cc.Spawn:create(easeAction,fadeAction)
				item:runAction(cc.Sequence:create(spanAcction, cc.CallFunc:create(showMenu)))
			else
				local item = bottomMenu:getChildByTag(index)
				if item ~= nil then
					item:setVisible(false)
				end

				item = bottomMenu:getChildByTag(index - 1)
				if item == nil then
					isStop = true
					return
				end
				index = index - 1
				printInfo("hide "..index)
				local moveAction = cc.MoveTo:create(0.05, cc.p(item:getPositionX() - 80, 0))
				local fadeAction = cc.FadeOut:create(0.05)
				local easeAction = cc.EaseIn:create(moveAction,3)
				local spanAcction = cc.Spawn:create(easeAction,fadeAction)

				item:runAction(cc.Sequence:create(spanAcction, cc.CallFunc:create(showMenu)))
			end
		end

		printInfo(toggle:getSelectedIndex())

		if toggle:getSelectedIndex() == 1 then
			isShow = true
		else
			isShow = false
		end
		if isStop then
			showMenu()
		end
	end)
end


return PenGodLayer