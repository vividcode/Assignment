//
//  Style.cpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#include <optional>
#include "Style.hpp"

StyleImpl::StyleImpl(std::shared_ptr<StyleOptions> &options_) : options(options_)
{ }

bool StyleImpl::isValid()
{
    return ((this->options != nullptr) && (!this->options->url.empty()));
}

std::shared_ptr<StyleInterface> StyleImpl::createStyle(const std::shared_ptr<StyleOptionsInterface> & options)
{
    std::shared_ptr<StyleOptions> derived = std::dynamic_pointer_cast<StyleOptions> (options);
    return std::make_unique<StyleImpl>(derived);
}

