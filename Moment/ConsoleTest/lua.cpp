//#include <iostream>
//
//
//extern "C"
//{
//#include <lua.h>
//#include <lauxlib.h>
//#include <lualib.h>
//}
//
//int main()
//{
//	lua_State* L = luaL_newstate(); // lua 상태생성
//	luaL_openlibs(L);
//
//	if (luaL_dofile(L, "script.lua") )
//	{
//		std::cout << "open fail: " << lua_tostring(L,-1) << std::endl;
//		return 0;
//	}
//
//	lua_getglobal(L, "greet");
//	lua_pushstring(L, "World"); // 함수 인수 푸시
//	if (lua_pcall(L, 1, 1, 0) != LUA_OK)
//	{
//		std::cout << "lua error: " << lua_tostring(L, -1) << std::endl;
//	}
//	else
//	{
//		std::cout << lua_tostring(L, -1) << std::endl;
//	}
//	lua_pop(L, 1); // 결과 제거
//
//	lua_close(L);
//
//	return 0;
//}
//
