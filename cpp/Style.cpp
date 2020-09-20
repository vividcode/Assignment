//
//  Style.cpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#include "Style.hpp"



bool Style::isValid()
{
    return (!this->options.url.empty());
}

std::shared_ptr<StyleInterface> Style::createStyle(const std::shared_ptr<StyleOptionsInterface> & options)
{
    return std::make_unique<Style>(options);
}

