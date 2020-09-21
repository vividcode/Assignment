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
#include <optional>
#include "style_interface.hpp"
#include "style_options_interface.hpp"
#include "StyleOptions.hpp"

#endif /* Style_hpp */

class StyleImpl: public StyleInterface
{
public:
    std::shared_ptr<StyleOptions> & options;
    static std::shared_ptr<StyleInterface> createStyle(const std::shared_ptr<StyleOptionsInterface> & options);
    bool isValid();
    
    StyleImpl(std::shared_ptr<StyleOptions> &options_);
};
