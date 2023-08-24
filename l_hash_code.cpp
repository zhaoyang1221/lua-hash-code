//
// Created by Administrator on 2023/8/21 0021.
//
#include <lua.hpp>
#include "src/hash_code.h"

#define VERSION	"hash-code 0.1.2"

/* compability with lua 5.1 */
#if LUA_VERSION_NUM <= 501
#define luaL_setfuncs(L,r,n) \
	luaL_register(L,NULL,r)
#endif

static int hash_code(lua_State *L) {
    // compute the hash of a string
    // lua api:  blake2b(m [, digln [, key]]) return digest
    // m: the string to be hashed
    // digln: the optional length of the digest to be computed
    // (between 1 and 64) - default value is 64
    // key: an optional secret key, allowing blake2b to work as a MAC
    //    (if provided, key length must be between 1 and 64)
    //    default is no key
    // digest: the blake2b hash as a string (string length is digln,
    // so default hash is a 64-byte string)

    size_t mln;
    const char *m = luaL_checklstring(L, 1, &mln);
    int32_t code = hash_code((const std::string &) m);
    lua_pushinteger(L, code);
    return 1;
}

static const luaL_Reg R[] = {
        { "hash_code",	hash_code},
        { NULL,		NULL	}
};

extern "C" int luaopen_hash_code(lua_State *L)
{
    lua_newtable(L);
    luaL_setfuncs(L,R,0);
    lua_pushliteral(L, "VERSION");
    lua_pushliteral(L, VERSION);
    lua_settable(L, -3);
    return 1;
}
