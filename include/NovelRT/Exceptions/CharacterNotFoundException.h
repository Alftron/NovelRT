// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root for more information.

#ifndef NOVELRT_CHARACTER_NOT_FOUND_EXCEPTION_H
#define NOVELRT_CHARACTER_NOT_FOUND_EXCEPTION_H

#include <stdexcept>
#include <string>

namespace NovelRT::Exceptions {
  class CharacterNotFoundException final : public std::runtime_error {
  public:
    CharacterNotFoundException(char c) :
      std::runtime_error(std::string("Unable to return specified character: ") + c)
    {}
  };
}


#endif //NOVELRT_CHARACTER_NOT_FOUND_EXCEPTION_H