//
//  Style.hpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#pragma once
#ifndef Style_hpp
#define Style_hpp

#include <stdio.h>
#include "style_interface.hpp"
#include "style_options_interface.hpp"
#include "StyleOptions.hpp"

#endif /* Style_hpp */

class Style: public StyleInterface
{
public:
    StyleOptions options;
    static std::shared_ptr<StyleInterface> createStyle(const std::shared_ptr<StyleOptionsInterface> & options);
    bool isValid();
};
