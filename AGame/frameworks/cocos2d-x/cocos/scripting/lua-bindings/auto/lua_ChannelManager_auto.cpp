#include "lua_ChannelManager_auto.hpp"
#include "ChannelManager.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_ChannelManager_ChannelManager_loginWithSdkId(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_loginWithSdkId'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->loginWithSdkId();
        return 0;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->loginWithSdkId(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "loginWithSdkId",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_loginWithSdkId'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_addBoolean(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_addBoolean'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        bool arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_boolean(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addBoolean(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addBoolean",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_addBoolean'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_destory(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif

//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
//
//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_destory'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->destory();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "destory",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_destory'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_installNewVersion(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_installNewVersion'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->installNewVersion();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "installNewVersion",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_installNewVersion'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_autoRegist(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif

//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_autoRegist'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->autoRegist();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "autoRegist",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_autoRegist'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_addInt(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_addInt'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        int arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1);
        if(!ok)
            return 0;
        cobj->addInt(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addInt",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_addInt'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_changePassword(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_changePassword'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 3) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        if(!ok)
            return 0;
        cobj->changePassword(arg0, arg1, arg2);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "changePassword",argc, 3);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_changePassword'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_logoutWithSdkId(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logoutWithSdkId'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->logoutWithSdkId();
        return 0;
    }
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->logoutWithSdkId(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "logoutWithSdkId",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logoutWithSdkId'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_getChannelFlag(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_getChannelFlag'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getChannelFlag();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getChannelFlag",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_getChannelFlag'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_messageEnd(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif

//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_messageEnd'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->messageEnd();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "messageEnd",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_messageEnd'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_pay(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_pay'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok)
            return 0;
        cobj->pay(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "pay",argc, 5);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_pay'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_transform(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_transform'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->transform(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "transform",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_transform'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_init(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_init'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        int arg0;
        const char* arg1;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->init(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "init",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_init'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_destorySdk(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_destorySdk'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->destorySdk();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "destorySdk",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_destorySdk'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_directLogin(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_directLogin'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->directLogin(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "directLogin",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_directLogin'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_addString(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_addString'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->addString(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addString",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_addString'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_enterGame(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_enterGame'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->enterGame(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "enterGame",argc, 1);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_enterGame'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_customAction(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_customAction'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->customAction(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "customAction",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_customAction'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_checkVersion(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_checkVersion'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->checkVersion(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "checkVersion",argc, 1);
    return 0;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_checkVersion'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_initSdk(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_initSdk'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->initSdk();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "initSdk",argc, 0);
    return 0;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_initSdk'.",&tolua_err);
//#endif

    return 0;
}


int lua_ChannelManager_ChannelManager_sendCustomEvent(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_Error tolua_err;
    //#endif
    
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
    //#endif
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!cobj)
    //    {
    //        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
    //        return 0;
    //    }
    //#endif
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 2)
    {
        const char* arg0;
        const char* arg1;
        CCLOG("C++ sendCustomEvent");
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->sendCustomEvent(arg0,arg1);
        return 0;
        
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "sendCustomEvent",argc, 2);
    return 0;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_lerror:
    //    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
    //#endif
    
    return 0;
}



int lua_ChannelManager_ChannelManager_shareToWechat(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_Error tolua_err;
    //#endif
    
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
    //#endif
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!cobj)
    //    {
    //        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
    //        return 0;
    //    }
    //#endif
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 5)
    {
        int arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        CCLOG("C++ shareToWechat");
        
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!");
            CCLOG("C++ shareToWechat end");
            cobj->shareToWechat(arg0,arg1,arg2,arg3,arg4);
            return 0;
        }
        
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "shareToWechat",argc, 5);
    return 0;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_lerror:
    //    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
    //#endif
    
    return 0;
}

int lua_ChannelManager_ChannelManager_shareToFacebook(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_Error tolua_err;
    //#endif
    
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
    //#endif
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!cobj)
    //    {
    //        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
    //        return 0;
    //    }
    //#endif
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 5)
    {
        int arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        CCLOG("C++ shareToFacebook");
        
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!");
            CCLOG("C++ shareToFacebook end");
            cobj->shareToFacebook(arg0,arg1,arg2,arg3,arg4);
            return 0;
        }
        
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "shareToFacebook",argc, 5);
    return 0;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_lerror:
    //    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
    //#endif
    
    return 0;
}

int lua_ChannelManager_ChannelManager_shareToInstgram(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_Error tolua_err;
    //#endif
    
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
    //#endif
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!cobj)
    //    {
    //        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
    //        return 0;
    //    }
    //#endif
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 5)
    {
        int arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        CCLOG("C++ shareToInstgram");
        
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!");
            CCLOG("C++ shareToInstgram end");
            cobj->shareToInstgram(arg0,arg1,arg2,arg3,arg4);
            return 0;
        }
        
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "shareToInstgram",argc, 5);
    return 0;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_lerror:
    //    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
    //#endif
    
    return 0;
}


int lua_ChannelManager_ChannelManager_shareToLine(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_Error tolua_err;
    //#endif
    
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
    //#endif
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    //#if COCOS2D_DEBUG >= 1
    //    if (!cobj)
    //    {
    //        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
    //        return 0;
    //    }
    //#endif
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 5)
    {
        int arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        CCLOG("C++ shareToLine");
        
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();
        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();
        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!");
            CCLOG("C++ shareToLine end");
            cobj->shareToLine(arg0,arg1,arg2,arg3,arg4);
            return 0;
        }
        
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "shareToLine",argc, 5);
    return 0;
    
    //#if COCOS2D_DEBUG >= 1
    //    tolua_lerror:
    //    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
    //#endif
    
    return 0;
}




int lua_ChannelManager_ChannelManager_directRegister(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_directRegister'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->directRegister(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "directRegister",argc, 2);
    return 0;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_directRegister'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_snsShare(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_snsShare'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok)
            return 0;
        cobj->snsShare(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "snsShare",argc, 5);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_snsShare'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_update(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_update'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        double arg0;

        ok &= luaval_to_number(tolua_S, 2,&arg0);
        if(!ok)
            return 0;
        cobj->update(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "update",argc, 1);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_update'.",&tolua_err);
//#endif

    return 0;
}



int lua_ChannelManager_ChannelManager_logout(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_logout'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->logout();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "logout",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_logout'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_addFloat(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_addFloat'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        double arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        ok &= luaval_to_number(tolua_S, 3,&arg1);
        if(!ok)
            return 0;
        cobj->addFloat(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "addFloat",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_addFloat'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_updatePlayer(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_updatePlayer'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 5) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();
        if(!ok)
            return 0;
        cobj->updatePlayer(arg0, arg1, arg2, arg3, arg4);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "updatePlayer",argc, 5);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_updatePlayer'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_payWithSdkId(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_payWithSdkId'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 6) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp); arg5 = arg5_tmp.c_str();
        if(!ok)
            return 0;
        cobj->payWithSdkId(arg0, arg1, arg2, arg3, arg4, arg5);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "payWithSdkId",argc, 6);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_payWithSdkId'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_bindAccount(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_bindAccount'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 2) 
    {
        const char* arg0;
        const char* arg1;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();
        if(!ok)
            return 0;
        cobj->bindAccount(arg0, arg1);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "bindAccount",argc, 2);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_bindAccount'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_registerListenter(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_registerListenter'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
//        int arg0;

        // ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
//        if(!ok)
//            return 0;
        LUA_FUNCTION arg0 = toluafix_ref_function(tolua_S,2,0);
        cobj->registerListenter(arg0);
        
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "registerListenter",argc, 1);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_registerListenter'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_fbInvite(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif


//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_fbInvite'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 8) 
    {
        const char* arg0;
        const char* arg1;
        const char* arg2;
        const char* arg3;
        const char* arg4;
        const char* arg5;
        const char* arg6;
        const char* arg7;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        std::string arg1_tmp; ok &= luaval_to_std_string(tolua_S, 3, &arg1_tmp); arg1 = arg1_tmp.c_str();

        std::string arg2_tmp; ok &= luaval_to_std_string(tolua_S, 4, &arg2_tmp); arg2 = arg2_tmp.c_str();

        std::string arg3_tmp; ok &= luaval_to_std_string(tolua_S, 5, &arg3_tmp); arg3 = arg3_tmp.c_str();

        std::string arg4_tmp; ok &= luaval_to_std_string(tolua_S, 6, &arg4_tmp); arg4 = arg4_tmp.c_str();

        std::string arg5_tmp; ok &= luaval_to_std_string(tolua_S, 7, &arg5_tmp); arg5 = arg5_tmp.c_str();

        std::string arg6_tmp; ok &= luaval_to_std_string(tolua_S, 8, &arg6_tmp); arg6 = arg6_tmp.c_str();

        std::string arg7_tmp; ok &= luaval_to_std_string(tolua_S, 9, &arg7_tmp); arg7 = arg7_tmp.c_str();
        if(!ok)
            return 0;
        cobj->fbInvite(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "fbInvite",argc, 8);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_fbInvite'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_showAccountCenter(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_showAccountCenter'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->showAccountCenter();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "showAccountCenter",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_showAccountCenter'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_messageBegin(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_messageBegin'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->messageBegin();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "messageBegin",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_messageBegin'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_createRole(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
//
//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_createRole'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        const char* arg0;

        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok)
            return 0;
        cobj->createRole(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "createRole",argc, 1);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_createRole'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_setUpdateTimeOut(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_setUpdateTimeOut'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0);
        if(!ok)
            return 0;
        cobj->setUpdateTimeOut(arg0);
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setUpdateTimeOut",argc, 1);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_setUpdateTimeOut'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_login(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
//
//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertype(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);

//#if COCOS2D_DEBUG >= 1
//    if (!cobj) 
//    {
//        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_ChannelManager_ChannelManager_login'", nullptr);
//        return 0;
//    }
//#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
            return 0;
        cobj->login();
        return 0;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "login",argc, 0);
    return 0;

//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_login'.",&tolua_err);
//#endif

    return 0;
}
int lua_ChannelManager_ChannelManager_getInstance(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

//#if COCOS2D_DEBUG >= 1
//    tolua_Error tolua_err;
//#endif
//
//#if COCOS2D_DEBUG >= 1
//    if (!tolua_isusertable(tolua_S,1,"ChannelManager",0,&tolua_err)) goto tolua_lerror;
//#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
            return 0;
        ChannelManager* ret = ChannelManager::getInstance();
        object_to_luaval<ChannelManager>(tolua_S, "ChannelManager",(ChannelManager*)ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d\n ", "getInstance",argc, 0);
    return 0;
//#if COCOS2D_DEBUG >= 1
//    tolua_lerror:
//    tolua_error(tolua_S,"#ferror in function 'lua_ChannelManager_ChannelManager_getInstance'.",&tolua_err);
//#endif
    return 0;
}
static int lua_ChannelManager_ChannelManager_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ChannelManager)");
    return 0;
}


int lua_ChannelManager_ChannelManager_setPlayerId(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
                const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();
        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!");
            CCLOG("C++ setPlayerId end");
            cobj->setPlayerId(arg0);
            return 0;
            
        }
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setPlayerId",argc, 1);
    return 0;
}

int lua_ChannelManager_ChannelManager_setServerName(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    argc = lua_gettop(tolua_S)-1;
    if (argc == 1)
    {
        const char* arg0;
        std::string arg0_tmp; ok &= luaval_to_std_string(tolua_S, 2, &arg0_tmp); arg0 = arg0_tmp.c_str();

        if(!ok){
            CCLOG("ok==false!");
            return 0;
        }
        else{
            CCLOG("ok==true!"); 
            CCLOG("C++ setServerName end");
            cobj->setServerName(arg0);
            return 0;
            
        }
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "setServerName",argc, 1);
    return 0;
}
int lua_ChannelManager_ChannelManager_getUUID(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getUUID();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getUUID",argc, 0);
    return 0;
    
    return 0;
}

//int lua_ChannelManager_ChannelManager_getIsIphoneX(lua_State* tolua_S)
//{
//    int argc = 0;
//    ChannelManager* cobj = nullptr;
//    bool ok  = true;
//
//    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
//
//    argc = lua_gettop(tolua_S)-1;
//    if (argc == 0)
//    {
//        if(!ok)
//            return 0;
////        std::string ret = cobj->getIsIphoneX();
////        tolua_pushcppstring(tolua_S,ret);
//        bool ret = cobj->getIsIphoneX();
//        tolua_pushboolean(tolua_S, ret);
//        return 1;
//    }
//    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getIsIphoneX",argc, 0);
//    return 0;
//
//    return 0;
//}

int lua_ChannelManager_ChannelManager_getDeviceInfo(lua_State* tolua_S)
{
    int argc = 0;
    ChannelManager* cobj = nullptr;
    bool ok  = true;
    
    cobj = (ChannelManager*)tolua_tousertype(tolua_S,1,0);
    
    argc = lua_gettop(tolua_S)-1;
    if (argc == 0)
    {
        if(!ok)
            return 0;
        std::string ret = cobj->getDeviceInfo();
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    CCLOG("%s has wrong number of arguments: %d, was expecting %d \n", "getDeviceInfo",argc, 0);
    return 0;
    
    return 0;
}

int lua_register_ChannelManager_ChannelManager(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ChannelManager");
    tolua_cclass(tolua_S,"ChannelManager","ChannelManager","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"ChannelManager");
        tolua_function(tolua_S,"loginWithSdkId",lua_ChannelManager_ChannelManager_loginWithSdkId);
        tolua_function(tolua_S,"addBoolean",lua_ChannelManager_ChannelManager_addBoolean);
        tolua_function(tolua_S,"destory",lua_ChannelManager_ChannelManager_destory);
        tolua_function(tolua_S,"installNewVersion",lua_ChannelManager_ChannelManager_installNewVersion);
        tolua_function(tolua_S,"autoRegist",lua_ChannelManager_ChannelManager_autoRegist);
        tolua_function(tolua_S,"addInt",lua_ChannelManager_ChannelManager_addInt);
        tolua_function(tolua_S,"changePassword",lua_ChannelManager_ChannelManager_changePassword);
        tolua_function(tolua_S,"logoutWithSdkId",lua_ChannelManager_ChannelManager_logoutWithSdkId);
        tolua_function(tolua_S,"getChannelFlag",lua_ChannelManager_ChannelManager_getChannelFlag);
        tolua_function(tolua_S,"messageEnd",lua_ChannelManager_ChannelManager_messageEnd);
        tolua_function(tolua_S,"pay",lua_ChannelManager_ChannelManager_pay);
        tolua_function(tolua_S,"transform",lua_ChannelManager_ChannelManager_transform);
        tolua_function(tolua_S,"init",lua_ChannelManager_ChannelManager_init);
        tolua_function(tolua_S,"destorySdk",lua_ChannelManager_ChannelManager_destorySdk);
        tolua_function(tolua_S,"directLogin",lua_ChannelManager_ChannelManager_directLogin);
        tolua_function(tolua_S,"addString",lua_ChannelManager_ChannelManager_addString);
        tolua_function(tolua_S,"enterGame",lua_ChannelManager_ChannelManager_enterGame);
        tolua_function(tolua_S,"customAction",lua_ChannelManager_ChannelManager_customAction);
        tolua_function(tolua_S,"checkVersion",lua_ChannelManager_ChannelManager_checkVersion);
        tolua_function(tolua_S,"initSdk",lua_ChannelManager_ChannelManager_initSdk);
        tolua_function(tolua_S,"directRegister",lua_ChannelManager_ChannelManager_directRegister);
        tolua_function(tolua_S,"snsShare",lua_ChannelManager_ChannelManager_snsShare);
        tolua_function(tolua_S,"sendCustomEvent",lua_ChannelManager_ChannelManager_sendCustomEvent);
        tolua_function(tolua_S,"shareToWechat",lua_ChannelManager_ChannelManager_shareToWechat);
        tolua_function(tolua_S,"shareToFacebook",lua_ChannelManager_ChannelManager_shareToFacebook);
        tolua_function(tolua_S,"shareToInstgram",lua_ChannelManager_ChannelManager_shareToInstgram);
        tolua_function(tolua_S,"shareToLine",lua_ChannelManager_ChannelManager_shareToLine);
        tolua_function(tolua_S,"setPlayerId",lua_ChannelManager_ChannelManager_setPlayerId);
        tolua_function(tolua_S,"setServerName",lua_ChannelManager_ChannelManager_setServerName);
        tolua_function(tolua_S,"update",lua_ChannelManager_ChannelManager_update);
        tolua_function(tolua_S,"logout",lua_ChannelManager_ChannelManager_logout);
        tolua_function(tolua_S,"addFloat",lua_ChannelManager_ChannelManager_addFloat);
        tolua_function(tolua_S,"updatePlayer",lua_ChannelManager_ChannelManager_updatePlayer);
        tolua_function(tolua_S,"payWithSdkId",lua_ChannelManager_ChannelManager_payWithSdkId);
        tolua_function(tolua_S,"bindAccount",lua_ChannelManager_ChannelManager_bindAccount);
        tolua_function(tolua_S,"registerListenter",lua_ChannelManager_ChannelManager_registerListenter);
        tolua_function(tolua_S,"fbInvite",lua_ChannelManager_ChannelManager_fbInvite);
        tolua_function(tolua_S,"showAccountCenter",lua_ChannelManager_ChannelManager_showAccountCenter);
        tolua_function(tolua_S,"messageBegin",lua_ChannelManager_ChannelManager_messageBegin);
        tolua_function(tolua_S,"createRole",lua_ChannelManager_ChannelManager_createRole);
        tolua_function(tolua_S,"setUpdateTimeOut",lua_ChannelManager_ChannelManager_setUpdateTimeOut);
        tolua_function(tolua_S,"login",lua_ChannelManager_ChannelManager_login);
        tolua_function(tolua_S,"checkOpenURL",lua_ChannelManager_ChannelManager_getInstance);
        tolua_function(tolua_S,"getInstance", lua_ChannelManager_ChannelManager_getInstance);
        tolua_function(tolua_S,"getUUID",lua_ChannelManager_ChannelManager_getUUID);
//        tolua_function(tolua_S,"getIsIphoneX",lua_ChannelManager_ChannelManager_getIsIphoneX);
        tolua_function(tolua_S,"getDeviceInfo",lua_ChannelManager_ChannelManager_getDeviceInfo);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ChannelManager).name();
    g_luaType[typeName] = "ChannelManager";
    g_typeCast["ChannelManager"] = "ChannelManager";
    return 1;
}
TOLUA_API int register_all_ChannelManager(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"ast",0);
	tolua_beginmodule(tolua_S,"ast");

	lua_register_ChannelManager_ChannelManager(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

