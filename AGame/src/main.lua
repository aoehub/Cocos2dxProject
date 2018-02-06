
cc.FileUtils:getInstance():setPopupNotify(false)

require "config"
require "cocos.init"
require "tool.Colors"
require "tool.tool" 


function __G__TRACKBACK__(msg)
	local _debug = debug.traceback()
    print("-----------------------------------------")
	print((msg or "") .. "\n" .. (_debug or ""))
    print("-----------------------------------------")
end

local function main()
	CC_SCREEN_RATIO = display.height/667.0

   	if CC_SHOW_FPS then
        cc.Director:getInstance():setDisplayStats(true)
    end

	local mainscene = cc.Scene:create()
	cc.Director:getInstance():replaceScene(mainscene)
	local tabbar = require("tool.tabbar.TabBarController").new(mainscene)
	local navbar = require("tool.navigationbar.NavigationBarController").new(mainscene)

end

local status, msg = xpcall(main, __G__TRACKBACK__)
-- if not status then
--     print(msg)
-- end
