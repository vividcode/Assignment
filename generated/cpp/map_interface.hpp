// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from Map.djinni

#pragma once

#include <memory>

class MapRenderDelegate;

class MapInterface {
public:
    virtual ~MapInterface() {}

    static std::shared_ptr<MapInterface> createStyle(const std::shared_ptr<MapRenderDelegate> & delegate);

    virtual void render() = 0;
};