#include <lua.h>
#include <stdio.h>

static int isquare(lua_State *L) { 
  float retrn = lua_tonumber(L, -1); 
  printf("Top of square(), nbr=%f\n", retrn);
  lua_pushnumber(L, retrn*retrn);
  return 1;
}

static int icube(lua_State *L) { 
  float retrn = lua_tonumber(L, -1); 
  printf("Top of cube(), nbr=%f\n", retrn);
  lua_pushnumber(L, retrn*retrn*retrn);
  return 1;
}

int luaopen_module(lua_State *L) { 
  lua_register(L, "square", isquare);
  lua_register(L, "cube", icube); 
  return 0; 
}
