--
-- Author: huger
-- Date: 2018-01-16 16:24:42
--
local LoginScene = class("LoginScene", function (  )
	return cc.Scene:create()
end)

function LoginScene:ctor(  )
	printInfo("showlogin")
	self:init(self)
end

function LoginScene:init()
	-- local layer = cc.Layer:create()
	local colorlayer = cc.LayerColor:create(cc.c4b(239.0, 239.0, 244.0, 255),display.width,display.height)
	-- self:addChild(layer)
	self:addChild(colorlayer)
	local sprite = cc.Sprite:create("HelloWorld.png")
	sprite:setPosition(cc.p(100,100))
	colorlayer:addChild(sprite)
	self:createTableView(self)

end

function LoginScene:createTableView()
	local function tableCellTouched(table, cell)
		printInfo("222222222222")
	end

	local function cellSizeForTable(table, idx)
		return 195,270
	end

	local function tableCellAtIndex(table, idx)
		print(idx)
		local cell = table:dequeueCell()
		if cell then
			cell:removeAllChildren()
		else
			cell = cc.TableViewCell:new()
		end

		local sprite = cc.Sprite:create("HelloWorld.png")
		sprite:setAnchorPoint(cc.p(0,0))
		sprite:setPosition(cc.p(0,0))
		cell:addChild(sprite,1,2)
		return cell
	end

	local function numberofCellsInTableView()
		return 3
	end

	local tableview = cc.TableView:create(cc.size(400,400))
	tableview:setPosition(cc.p(200,100))
	tableview:setDirection(cc.SCROLLVIEW_DIRECTION_HORIZONTAL)
	tableview:setVerticalFillOrder(cc.TABLEVIEW_FILL_TOPDOWN)
	self:addChild(tableview)
	tableview:setDelegate()
	tableview:registerScriptHandler(tableCellTouched,cc.TABLECELL_TOUCHED)
	tableview:registerScriptHandler(cellSizeForTable,cc.TABLECELL_SIZE_FOR_INDEX)
	tableview:registerScriptHandler(tableCellAtIndex,cc.TABLECELL_SIZE_AT_INDEX)
	tableview:registerScriptHandler(numberofCellsInTableView,cc.NUMBER_OF_CELLS_IN_TABLEVIEW)
	tableview:reloadData()
	
end

return LoginScene