--
-- Author: huger
-- Date: 2018-01-17 16:33:41
--
local  HomeLayer = class("HomeLayer", function (  )
	return cc.Layer:create()
end)

function HomeLayer:ctor(  )
	self:init()
end

function HomeLayer:init()
	local bg = cc.LayerColor:create(COLOR_BGCOLOR,display.width,display.height)
	bg:setPosition(cc.p(0,0))
	local scrollview = cc.ScrollView:create(cc.size(display.width, display.height),bg)
	-- scrollview:setPosition(cc.p(0,0))
	scrollview:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
	self.bg = bg
	self:addChild(scrollview)
	self:createTableView()
end

function HomeLayer:createTableView()
	local function tableCellTouched(table, cell)
		printInfo("222222222222")
	end

	local function cellSizeForTable(table, idx)
		return display.width,63*CC_SCREEN_RATIO
	end

	local function tableCellAtIndex(table, idx)
		print(idx)
		local cell = table:dequeueCell()
		if cell then
			cell:removeAllChildren()
		else
			cell = cc.TableViewCell:new()
		end
		local height = 63*CC_SCREEN_RATIO
		local gap = 5
		local bg = cc.LayerColor:create(COLOR_WHITE,display.width,height)
		bg:setPosition(cc.p(0,0))
		bg:setTag(101)
		cell:addChild(bg)
		local icon = tool.maskedSprite("0.jpg", cc.size(45*CC_SCREEN_RATIO, 45*CC_SCREEN_RATIO), 9)
		icon:setPosition(cc.p(63*CC_SCREEN_RATIO/2, 63*CC_SCREEN_RATIO/2))
		bg:addChild(icon)

		local name = cc.Label:createWithSystemFont("张三","",30)
		name:setTextColor(COLOR_TITLECOLOR)
		name:setPosition(cc.p(height + gap, height/2 + gap))
		name:setAnchorPoint(cc.p(0, 0))
		bg:addChild(name)

		local content = cc.Label:createWithSystemFont("[动画表情]","",25)
		content:setTextColor(COLOR_CONTENTTEXTCOLOR)
		content:setPosition(cc.p(height + gap, height/2 - gap))
		content:setAnchorPoint(cc.p(0, 1))
		bg:addChild(content)

		bg:addChild(tool.createBorder(cc.size(display.width, height), 1))
		-- local line = cc.LayerColor:create(COLOR_TABBAR_LINE_COLOR,display.width,0.5)
		-- line:setPosition(cc.p(0,0))
		-- cell:addChild(line)
		return cell
	end

	local function numberofCellsInTableView()
		return 2
	end

	local tableview = cc.TableView:create(cc.size(display.width,display.height - 64*CC_SCREEN_RATIO))
	tableview:setPosition(cc.p(0,0))
	tableview:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
	tableview:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
	self:addChild(tableview)
	tableview:setDelegate()
	tableview:registerScriptHandler(tableCellTouched,cc.TABLECELL_TOUCHED)
	tableview:registerScriptHandler(cellSizeForTable,cc.TABLECELL_SIZE_FOR_INDEX)
	tableview:registerScriptHandler(tableCellAtIndex,cc.TABLECELL_SIZE_AT_INDEX)
	tableview:registerScriptHandler(numberofCellsInTableView,cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
	tableview:reloadData()

end

return HomeLayer