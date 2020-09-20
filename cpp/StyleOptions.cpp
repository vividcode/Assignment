//
//  StyleOptions.cpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#include "StyleOptions.hpp"

std::shared_ptr<StyleOptionsInterface> StyleOptions::withStyleURL(const std::string & url_)
{
    this->url = url_;
    return std::shared_ptr<StyleOptionsInterface>(this);
}
