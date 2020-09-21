//
//  StyledMap.hpp
//  Client
//
//  Created by Admin on 9/20/20.
//

#ifndef StyledMap_hpp
#define StyledMap_hpp

#include <memory>
#include "map_interface.hpp"
#include "Style.hpp"
#include "map_render_delegate.hpp"

#endif /* StyledMap_hpp */


class StyledMap : public MapInterface
{
    public:
        std::shared_ptr<MapRenderDelegate>  delegate;
        StyledMap() = default;
        
        void setStyle(std::unique_ptr<StyleImpl>&&);
        void render();
        // throws std::runtime_error if no valid style is set. void render(MapRenderedCallback&&) final;
    private:
        std::unique_ptr<StyleImpl> style;
        
};
