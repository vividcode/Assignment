rm -r generated/*

./djinni/src/run \
    --cpp-out generated/cpp/ \
    --cpp-optional-template std::experimental::optional \
    --cpp-optional-header "<experimental/optional>" \
    \
    --objc-out generated/objc/ \
    --objcpp-out generated/objcpp/ \
    --objc-type-prefix MB \
    \
    --idl idl/Map.djinni