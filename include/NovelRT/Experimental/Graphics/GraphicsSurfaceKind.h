// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_GRAPHICSSURFACEKIND_H
#define NOVELRT_GRAPHICSSURFACEKIND_H

#include <cstdint>

namespace NovelRT::Experimental::Graphics
{
    enum class GraphicsSurfaceKind : uint32_t
    {
        Unknown = 0,
        Android = 1,
        Wayland = 2,
        Win32 = 3,
        Xcb = 4,
        Xlib = 5,
        Glfw = 6
    };
}

#endif // NOVELRT_GRAPHICSSURFACEKIND_H
