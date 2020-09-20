//
//  StyleOptions.hpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#ifndef StyleOptions_hpp
#define StyleOptions_hpp

#include <stdio.h>

#endif /* StyleOptions_hpp */

#include "style_options_interface.hpp"
class StyleOptions: public StyleOptionsInterface
{
public:
    StyleOptions() = default;
    std::shared_ptr<StyleOptionsInterface> withStyleURL(const std::string & url_);
    std::string url;
};
