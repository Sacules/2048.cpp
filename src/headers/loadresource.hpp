#pragma once

#include "gameboard.hpp"
#include <string>
#include <tuple>

namespace Game {
namespace Loader {

load_gameboard_status_t load_GameBoard_data_from_file(std::string filename);

// Output: {[loadfile_ok_status], [decltype(gameboard.score)],
// [decltype(gameboard.moveCount)]}
std::tuple<bool, std::tuple<unsigned long long, long long>>
load_game_stats_from_file(std::string filename);

} // namespace Loader
} // namespace Game
