//
//  StyledMap.cpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#include "DJIError.h"
#include "StyledMap.hpp"
#include "Style.hpp"

#include <stdlib.h>
#include <thread>

void StyledMap::setStyle(std::shared_ptr<StyleInterface>& style_)
{
    std::shared_ptr<StyleImpl> derived = std::dynamic_pointer_cast<StyleImpl> (style_);
    style = std::move(derived);
}

void StyledMap::render()
{
    if (style && style->isValid())
    {
        this->delegate->invokeCallback();
    }
    else
    {
        try {
            throw std::runtime_error("No valid style is set");
        } DJINNI_TRANSLATE_CUSTOM_EXCEPTIONS()
    }
}
