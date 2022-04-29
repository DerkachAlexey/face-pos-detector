#ifndef COMMON_ENUMS
#define COMMON_ENUMS

namespace fr
{

namespace enums
{

enum class ApplicationMode
{
    VIDEO = 0,
    PHOTO = 1,
    CAMERA = 2,
    STREAM = 3,
    REGISTRATION = 4,
    RECOGNITION = 5,
    UNKNOWN = 6
};

enum class Extensions
{
    JPG = 0,
    PNG = 1
};

} // namespace enums
} // namespace fr

#endif
