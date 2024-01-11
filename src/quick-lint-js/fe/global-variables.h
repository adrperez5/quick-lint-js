// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#pragma once

#include <cstddef>
#include <cstdint>
#include <quick-lint-js/port/char8.h>

namespace quick_lint_js {
inline constexpr std::size_t global_group_count = 12;

struct Global_Group {
  const Char8 *name;
  const Char8 *globals;
  const Char8 *non_writable_globals;
  const Char8 *non_shadowable_globals;
  const Char8 *type_only_globals;
  std::int16_t globals_count;
  std::int16_t non_writable_globals_count;
  std::int16_t non_shadowable_globals_count;
  std::int16_t type_only_globals_count;
};
extern const Global_Group global_groups[];

extern const Char8 global_variables_browser[];
extern const Char8 global_variables_web_worker[];
extern const Char8 global_variables_web_types[];
}

// quick-lint-js finds bugs in JavaScript programs.
// Copyright (C) 2020  Matthew "strager" Glazar
//
// This file is part of quick-lint-js.
//
// quick-lint-js is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// quick-lint-js is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with quick-lint-js.  If not, see <https://www.gnu.org/licenses/>.
