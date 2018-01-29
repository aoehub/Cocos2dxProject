--
-- Author: huger
-- Date: 2018-01-17 16:33:52
--
local  MineLayer = class("MineLayer", function (  )
	return cc.Layer:create()
end)

function MineLayer:ctor(  )
	self:init()
end


function MineLayer:init()
	local bg = cc.LayerColor:create(cc.c4b(239.0, 239.0, 244.0, 255),display.width,display.height)
	bg:setPosition(cc.p(0,0))

	local scrollview  = cc.ScrollView:create(cc.size(display.width, display.height),bg)
	self.bg = bg
	self:addChild(scrollview)
	self:createTableView()
end

function MineLayer:createTableView()
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
		local bg = cc.LayerColor:create(cc.c4b(255, 255, 255, 255),display.width,height)
		bg:setPosition(cc.p(0,0))
		cell:addChild(bg)

		local icon = cc.Sprite:create("0.jpg",cc.size(45*CC_SCREEN_RATIO, 45*CC_SCREEN_RATIO))
		icon:setPosition(cc.p(height/2,height/2))
		bg:addChild(icon)

		local name = cc.Label:createWithSystemFont("张三","",30)
		name:setTextColor(cc.c4b(15.0, 17.0, 22.0, 255))
		name:setPosition(cc.p(height + gap,height/2 + gap))
		name:setAnchorPoint(cc.p(0,0))
		bg:addChild(name)

		local content = cc.Label:createWithSystemFont("[动画表情]","",25)
		content:setTextColor(cc.c4b(15.0, 17.0, 22.0, 255))
		content:setPosition(cc.p(height + gap,height/2 - gap))
		content:setAnchorPoint(cc.p(0,1))
		bg:addChild(content)
		return cell
	end

	local function numberofCellsInTableView()
		return 1
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

return MineLayer