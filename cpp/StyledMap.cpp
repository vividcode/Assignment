//
//  StyledMap.cpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#include "StyledMap.hpp"
#include "Style.hpp"

#include <stdlib.h>
#include <thread>

StyledMap::StyledMap(std::shared_ptr<MapRenderDelegate> renderDelegate)
{
    this->delegate = renderDelegate;
}

void StyledMap::setStyle(std::unique_ptr<Style>&& style)
{
    style = std::move(style);
}

void StyledMap::render()
{
    if (style && style->isValid())
    {
        this->delegate->invokeCallback();
    }
    else
    {
       throw std::runtime_error("no valid style is set");
    }
}

