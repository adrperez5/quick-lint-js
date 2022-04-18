// Copyright (C) 2020  Matthew "strager" Glazar
// See end of file for extended copyright information.

#ifndef QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H
#define QUICK_LINT_JS_TRANSLATION_TABLE_GENERATED_H

// This file is **GENERATED** by tools/compile-translations.go.

#include <cstddef>
#include <cstdint>
#include <iterator>
#include <quick-lint-js/assert.h>
#include <quick-lint-js/consteval.h>
#include <quick-lint-js/hash-fnv.h>
#include <quick-lint-js/translation-table.h>
#include <string_view>

namespace quick_lint_js {
using namespace std::literals::string_view_literals;

constexpr std::uint32_t translation_table_locale_count = 4;
constexpr std::uint16_t translation_table_mapping_table_size = 256;
constexpr std::size_t translation_table_string_table_size = 46476;
constexpr std::size_t translation_table_locale_table_size = 24;

QLJS_CONSTEVAL std::uint16_t translation_table_const_hash_table_look_up(
    std::string_view untranslated) {
  struct const_hash_entry {
    std::uint16_t mapping_table_index;
    const char* untranslated;
  };

  // clang-format off
  constexpr const_hash_entry const_hash_table[] = {
          {148, "missing body for do-while loop"},
          {0, ""},
          {0, ""},
          {188, "number literal contains consecutive underscores"},
          {134, "mismatched JSX tags; expected '</{1}>'"},
          {0, ""},
          {0, ""},
          {163, "missing for loop header"},
          {0, ""},
          {179, "missing property name between '.' and '.'"},
          {167, "missing name in function statement"},
          {0, ""},
          {0, ""},
          {247, "variable declared here"},
          {123, "invalid UTF-8 sequence"},
          {0, ""},
          {57, "cannot declare 'await' inside async function"},
          {0, ""},
          {11, "'?' creates a conditional expression"},
          {208, "this {1} looks fishy"},
          {0, ""},
          {217, "unclosed template"},
          {0, ""},
          {162, "missing expression between parentheses"},
          {187, "newline is not allowed between 'async' and arrow function parameter list"},
          {246, "variable assigned before its declaration"},
          {0, ""},
          {0, ""},
          {171, "missing name or parentheses for function"},
          {54, "break can only be used inside of a loop or switch"},
          {71, "code point out of range"},
          {0, ""},
          {0, ""},
          {113, "functions/methods should not have '=>'"},
          {131, "legacy octal literals may not contain underscores"},
          {0, ""},
          {83, "event attributes must be camelCase: '{1}'"},
          {175, "missing parentheses around left-hand side of '**'"},
          {59, "cannot declare and export variable with 'export default'"},
          {5, "\"globals\" descriptor must be a boolean or an object"},
          {236, "unexpected token in export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {0, ""},
          {225, "unexpected '{0}'"},
          {232, "unexpected identifier in expression; missing operator before"},
          {0, ""},
          {174, "missing parameters for arrow function"},
          {202, "something happened"},
          {1, "\"global-groups\" entries must be strings"},
          {15, "'do-while' loop"},
          {64, "cannot import variable named keyword '{0}'"},
          {105, "for-in loop expression cannot have semicolons"},
          {157, "missing comparison; '{1}' does not extend to the right side of '{0}'"},
          {0, ""},
          {218, "unexpected '#'"},
          {231, "unexpected expression; missing key for object entry"},
          {0, ""},
          {235, "unexpected token"},
          {86, "expected ',' between object literal entries"},
          {68, "children end here"},
          {201, "see here"},
          {142, "missing arrow operator for arrow function"},
          {87, "expected 'as' between '{1}' and '{2}'"},
          {0, ""},
          {169, "missing name of exported class"},
          {0, ""},
          {46, "assigning to 'async' in a for-of loop requires parentheses"},
          {107, "forwarding exports are only allowed in export-from"},
          {82, "escaping '-' is not allowed in tag names; write '-' instead"},
          {75, "const variable declared here"},
          {209, "try statement starts here"},
          {220, "unexpected '\\' in identifier"},
          {124, "invalid expression left of assignment"},
          {109, "function call started here"},
          {0, ""},
          {0, ""},
          {0, ""},
          {216, "unclosed string literal"},
          {6, "\"globals\" must be an object"},
          {0, ""},
          {0, ""},
          {0, ""},
          {176, "missing parentheses around operand of '{0}'"},
          {12, "'async static' is not allowed; write 'static async' instead"},
          {242, "unopened block comment"},
          {165, "missing header and body for 'for' loop"},
          {84, "existing variable declared here"},
          {88, "expected 'from \"name_of_module.mjs\"'"},
          {0, ""},
          {0, ""},
          {0, ""},
          {50, "assignment to imported variable"},
          {42, "an 'if' statement"},
          {147, "missing body for class"},
          {214, "unclosed object literal; expected '}'"},
          {0, ""},
          {0, ""},
          {77, "depth limit exceeded"},
          {130, "legacy octal literal may not be BigInt"},
          {0, ""},
          {166, "missing initializer in const declaration"},
          {194, "opening '<{1}>' tag here"},
          {16, "'else' has no corresponding 'if'"},
          {25, "'}' is not allowed directly in JSX text; write {{'}'} instead"},
          {0, ""},
          {0, ""},
          {63, "cannot import 'let'"},
          {18, "'if' statement"},
          {137, "missing ':' in conditional expression"},
          {21, "'with' statement"},
          {222, "unexpected 'catch' without 'try'"},
          {156, "missing comma between object literal entries"},
          {159, "missing condition for switch statement"},
          {67, "character is not allowed in identifiers"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {139, "missing '=' after variable"},
          {0, ""},
          {160, "missing condition for while statement"},
          {92, "expected expression before newline"},
          {51, "assignment to undeclared variable"},
          {100, "expected {1:singular}"},
          {93, "expected expression before semicolon"},
          {129, "label named 'await' not allowed in async function"},
          {186, "new variable shadows existing variable"},
          {0, ""},
          {27, "BigInt literal contains exponent"},
          {0, ""},
          {0, ""},
          {0, ""},
          {0, ""},
          {30, "JSON syntax error"},
          {110, "function called before declaration in block scope: {0}"},
          {192, "octal literal may not have exponent"},
          {112, "function starts here"},
          {106, "for-of loop expression cannot have semicolons"},
          {193, "octal number literal has no digits"},
          {0, ""},
          {213, "unclosed identifier escape sequence"},
          {19, "'in' disallowed in C-style for loop initializer"},
          {61, "cannot export variable named 'let'"},
          {125, "invalid function parameter"},
          {0, ""},
          {178, "missing property name after '.' operator"},
          {199, "remove '{0}' to update an existing variable"},
          {233, "unexpected literal in parameter list; expected parameter name"},
          {181, "missing semicolon between condition and update parts of for loop"},
          {182, "missing semicolon between init and condition parts of for loop"},
          {0, ""},
          {53, "binary number literal has no digits"},
          {90, "expected '{{'"},
          {0, ""},
          {24, "'{0}' operator cannot be used before '**' without parentheses"},
          {89, "expected 'from' before module specifier"},
          {0, ""},
          {0, ""},
          {0, ""},
          {35, "a 'for' loop"},
          {138, "missing '<>' and '</>' to enclose multiple children"},
          {200, "return statement returns nothing (undefined)"},
          {0, ""},
          {153, "missing body for {1:headlinese}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {40, "a lexical declaration is not allowed as the body of {1:singular}"},
          {0, ""},
          {0, ""},
          {0, ""},
          {128, "keywords cannot contain escape sequences"},
          {114, "generator function '*' belongs after keyword function"},
          {0, ""},
          {38, "a class statement is not allowed as the body of {1:singular}"},
          {141, "missing 'while (condition)' for do-while statement"},
          {69, "classes cannot be named 'let'"},
          {99, "expected {1:headlinese}"},
          {144, "missing body for 'if' statement"},
          {173, "missing operator between expression and arrow function"},
          {119, "if statement needs parentheses around condition"},
          {0, ""},
          {221, "unexpected 'case' outside switch statement"},
          {0, ""},
          {80, "do-while statement starts here"},
          {14, "'await' is only allowed in async functions"},
          {0, ""},
          {238, "unicode byte order mark (BOM) cannot appear before #! at beginning of script"},
          {0, ""},
          {0, ""},
          {0, ""},
          {70, "code point in Unicode escape sequence must not be greater than U+10FFFF"},
          {180, "missing semicolon after statement"},
          {255, "~~~ invalid string, do not use outside benchmark ~~~"},
          {0, ""},
          {62, "cannot export variable named keyword '{0}'"},
          {244, "use of undeclared variable: {0}"},
          {78, "do-while loop is missing '{1}' around condition"},
          {96, "expected parameter for arrow function, but got an expression instead"},
          {195, "private properties are not allowed in object literals"},
          {0, ""},
          {164, "missing function parameter list"},
          {8, "'.' operator needs a key name; use + to concatenate strings; use [] to access with a dynamic key"},
          {151, "missing body for try statement"},
          {198, "redundant delete statement on variable"},
          {26, "BigInt literal contains decimal point"},
          {58, "cannot declare 'yield' inside generator function"},
          {76, "continue can only be used inside of a loop"},
          {227, "unexpected characters in hex literal"},
          {43, "another invalid string, do not use outside benchmark"},
          {52, "attribute has wrong capitalization; write '{1}' instead"},
          {0, ""},
          {0, ""},
          {140, "missing 'if' after 'else'"},
          {0, ""},
          {184, "missing variable name"},
          {212, "unclosed code block; expected '}' by end of file"},
          {0, ""},
          {0, ""},
          {33, "TypeScript's 'enum' feature is not yet implemented by quick-lint-js"},
          {0, ""},
          {22, "'{0}' found here"},
          {0, ""},
          {0, ""},
          {191, "octal literal may not have decimal"},
          {0, ""},
          {0, ""},
          {155, "missing catch variable name between parentheses"},
          {81, "escaped character is not allowed in identifiers"},
          {149, "missing body for finally clause"},
          {0, ""},
          {0, ""},
          {211, "unclosed class; expected '}' by end of file"},
          {152, "missing body for while loop"},
          {240, "unmatched indexing bracket"},
          {55, "cannot access private identifier outside class"},
          {0, ""},
          {170, "missing name of exported function"},
          {0, ""},
          {230, "unexpected control character"},
          {0, ""},
          {0, ""},
          {104, "for loop needs an iterable, or condition and update clauses"},
          {0, ""},
          {150, "missing body for function"},
          {117, "hex number literal has no digits"},
          {177, "missing parentheses around self-invoked function"},
          {4, "\"globals\" descriptor \"writable\" property must be a boolean"},
          {0, ""},
          {190, "object literal started here"},
          {0, ""},
          {204, "stray comma in let statement"},
          {219, "unexpected '@'"},
          {120, "imported variable declared here"},
          {115, "generator function '*' belongs before function name"},
          {102, "exporting requires '{{' and '}'"},
          {251, "while loop needs parentheses around condition"},
          {13, "'await' cannot be followed by an arrow function; use 'async' instead"},
          {49, "assignment to const variable before its declaration"},
          {243, "use 'while' instead to loop until a condition is false"},
          {0, ""},
          {47, "assignment to const global variable"},
          {229, "unexpected characters in octal literal"},
          {0, ""},
          {0, ""},
          {207, "this {0} looks fishy"},
          {56, "cannot assign to loop variable in for of/in loop"},
          {203, "stray comma in function parameter"},
          {228, "unexpected characters in number literal"},
          {108, "free {1} and {0} {1} {2}"},
          {0, ""},
          {0, ""},
          {45, "arrow is here"},
          {0, ""},
          {32, "RegExp literal flags cannot contain Unicode escapes"},
          {118, "if statement is missing '{1}' around condition"},
          {223, "unexpected 'default' outside switch statement"},
          {0, ""},
          {158, "missing condition for if statement"},
          {72, "commas are not allowed after spread parameter"},
          {48, "assignment to const variable"},
          {0, ""},
          {210, "unclosed block comment"},
          {74, "const fields within classes are only allowed in TypeScript, not JavaScript"},
          {101, "exporting requires 'default'"},
          {121, "incomplete export; expected 'export default ...' or 'export {{name}' or 'export * from ...' or 'export class' or 'export function' or 'export let'"},
          {65, "cannot reference private variables without object; use 'this.'"},
          {206, "switch statement needs parentheses around condition"},
          {0, ""},
          {20, "'while' loop"},
          {0, ""},
          {226, "unexpected characters in binary literal"},
          {0, ""},
          {0, ""},
          {36, "a 'while' loop"},
          {7, "'**' operator cannot be used after unary '{1}' without parentheses"},
          {133, "methods should not use the 'function' keyword"},
          {9, "'=' changes variables; to compare, use '===' instead"},
          {0, ""},
          {0, ""},
          {17, "'for' loop"},
          {60, "cannot declare variable named keyword '{0}'"},
          {146, "missing body for catch clause"},
          {237, "unexpected token in variable declaration; expected variable name"},
          {0, ""},
          {122, "indexing requires an expression"},
          {0, ""},
          {44, "array started here"},
          {0, ""},
          {0, ""},
          {254, "{0} with no bindings"},
          {197, "redeclaration of variable: {0}"},
          {136, "missing '...' in JSX attribute spread"},
          {0, ""},
          {23, "'{0}' is not allowed for strings; use {1} instead"},
          {41, "a {{0} b }} c"},
          {39, "a function statement is not allowed as the body of {1:singular}"},
          {28, "C-style for loop is missing its third component"},
          {111, "function declared here"},
          {145, "missing body for 'switch' statement"},
          {161, "missing end of array; expected ']'"},
          {185, "misspelled React attribute; write '{1}' instead"},
          {168, "missing name of class"},
          {3, "\"globals\" descriptor \"shadowable\" property must be a boolean"},
          {79, "do-while loop needs parentheses around condition"},
          {34, "a 'do-while' loop"},
          {0, ""},
          {189, "number literal contains trailing underscore(s)"},
          {0, ""},
          {0, ""},
          {234, "unexpected statement before first switch case, expected 'case' or 'default'"},
          {172, "missing operand for operator"},
          {0, ""},
          {0, ""},
          {0, ""},
          {127, "invalid lone literal in object literal"},
          {10, "'>' is not allowed directly in JSX text; write {{'>'} or &gt; instead"},
          {37, "a 'with' statement"},
          {85, "expected ')' to close function call"},
          {94, "expected hexadecimal digits in Unicode escape sequence"},
          {241, "unmatched parenthesis"},
          {91, "expected expression after 'case'"},
          {239, "unmatched '}'"},
          {103, "extra ',' is not allowed between function call arguments"},
          {0, ""},
          {215, "unclosed regexp literal"},
          {183, "missing value for object property"},
          {31, "React/JSX is not yet implemented"},
          {0, ""},
          {248, "variable used before declaration: {0}"},
          {250, "while loop is missing '{1}' around condition"},
          {196, "redeclaration of global variable"},
          {132, "let statement cannot declare variables named 'let'"},
          {253, "with statement needs parentheses around expression"},
          {0, ""},
          {0, ""},
          {154, "missing catch or finally clause for try statement"},
          {0, ""},
          {0, ""},
          {116, "here"},
          {135, "missing ',' between variable declarations"},
          {252, "with statement is missing '{1}' around expression"},
          {0, ""},
          {73, "commas are not allowed between class methods"},
          {205, "switch statement is missing '{1}' around condition"},
          {29, "C-style for loops have only three semicolon-separated components"},
          {98, "expected variable name for 'import'-'as'"},
          {2, "\"global-groups\" must be a boolean or an array"},
          {97, "expected variable name for 'catch'"},
          {0, ""},
          {0, ""},
          {66, "cannot update variable with '{0}' while declaring it"},
          {249, "what is this '{1}' nonsense?"},
          {95, "expected parameter for arrow function, but got a literal instead"},
          {245, "variable already declared here"},
          {0, ""},
          {126, "invalid hex escape sequence: {0}"},
          {0, ""},
          {0, ""},
          {224, "unexpected 'finally' without 'try'"},
          {143, "missing body for 'for' loop"},
          {0, ""},
          {0, ""},
  };
  // clang-format on

  std::uint64_t hash = hash_fnv_1a_64(untranslated, 14695981039346659169ULL);
  std::uint64_t table_size = 383;
  for (std::uint64_t attempt = 0; attempt <= 4; ++attempt) {
    const const_hash_entry& hash_entry =
        const_hash_table[(hash + attempt * attempt) % table_size];
    if (hash_entry.mapping_table_index == 0) {
      break;
    }
    if (hash_entry.untranslated == untranslated) {
      return hash_entry.mapping_table_index;
    }
  }

  // If you see an error with the following line, translation-table-generated.h
  // is out of date. Run tools/update-translator-sources to rebuild this file.
  QLJS_CONSTEXPR_ASSERT(false);

  return 0;
}
}

#endif

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
