#include <std_include.hpp>
#include "utils/minlog.hpp"

#include "game/game.hpp"
#include "components/components.hpp"
#include "havok/hks_api.hpp"
#include "components/asset_limits.hpp"

extern "C"
{
	int __declspec(dllexport) init(lua::lua_State* L)
	{
		game::minlog.WriteLine("T7Overchared initiating");

		const lua::luaL_Reg T7OverchargedLibrary[] =
		{
			{nullptr, nullptr},
		};
		hks::hksI_openlib(L, "T7Overcharged", T7OverchargedLibrary, 0, 1);

		components::initialize(L);

		game::minlog.WriteLine("T7Overchared initiated");
		return 1;
	}
}