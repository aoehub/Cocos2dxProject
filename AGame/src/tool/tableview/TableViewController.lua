--
-- Author: huger
-- Date: 2018-01-26 16:40:08
--
local TableViewController = class("TableViewController")

function TableViewController:ctor()
	
end


function TableViewController:init()
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
end

function TableViewController:reload()
	

end


return TableViewController