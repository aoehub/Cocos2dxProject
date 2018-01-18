
cc.FileUtils:getInstance():setPopupNotify(false)

require "config"
require "cocos.init"

function __G__TRACKBACK__(msg)
	local _debug = debug.traceback()
    print("-----------------------------------------")
	print((msg or "") .. "\n" .. (_debug or ""))
    print("-----------------------------------------")
end

local function main()
	    -- require("app.MyApp"):create():run()
   	if CC_SHOW_FPS then
        cc.Director:getInstance():setDisplayStats(true)
    end
	local login = require("scenes.login.LoginScene").new()
	cc.Director:getInstance():replaceScene(login)
	local tabbar = require("tool.tabbar.TabBarController").new(login)

end

local status, msg = xpcall(main, __G__TRACKBACK__)
-- if not status then
--     print(msg)
-- end
