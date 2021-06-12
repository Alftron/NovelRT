// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#ifndef NOVELRT_GRAPHICSTEXTUREKIND_H
#define NOVELRT_GRAPHICSTEXTUREKIND_H

namespace NovelRT::Experimental::Graphics
{
    enum class GraphicsTextureKind : uint32_t
    {
        Unknown = 0,
        OneDimensional = 1,
        TwoDimensional = 2,
        ThreeDimensional = 3
    };
}

#endif // NOVELRT_GRAPHICSTEXTUREKIND_H
