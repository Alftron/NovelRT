// Copyright © Matt Jones and Contributors. Licensed under the MIT Licence (MIT). See LICENCE.md in the repository root
// for more information.

#include <NovelRT.h>

namespace NovelRT
{
    Atom Atom::GetNextEventHandlerId() noexcept
    {
        static std::atomic_uintptr_t _nextEventHandlerId(0);
        auto value = ++_nextEventHandlerId;
        return Atom(value);
    }

    Atom Atom::GetNextFontSetId() noexcept
    {
        static std::atomic_uintptr_t _nextFontSetId(0);
        auto value = ++_nextFontSetId;
        return Atom(value);
    }

    Atom Atom::GetNextTextureId() noexcept
    {
        static std::atomic_uintptr_t _nextTextureId(0);
        auto value = ++_nextTextureId;
        return Atom(value);
    }

    Atom Atom::GetNextComponentTypeId() noexcept
    {
        static std::atomic_uintptr_t _nextComponentTypeId(0);
        auto value = ++_nextComponentTypeId;
        return Atom(value);
    }

    Atom Atom::GetNextEntityId() noexcept
    {
        static std::atomic_uintptr_t _nextEntityId(0);
        auto value = ++_nextEntityId;
        return Atom(value);
    }

    Atom Atom::GetNextSystemId() noexcept
    {
        static std::atomic_uintptr_t _nextSystemId(0);
        auto value = ++_nextSystemId;
        return Atom(value);
    }

    Atom Atom::GetNextEcsTextureId() noexcept
    {
        static std::atomic_uintptr_t _nextEcsTextureId(0);
        auto value = ++_nextEcsTextureId;
        return Atom(value);
    }

    Atom Atom::GetNextEcsVertexDataId() noexcept
    {
        static std::atomic_uintptr_t _nextEcsVertexDataId(0);
        auto value = ++_nextEcsVertexDataId;
        return Atom(value);
    }

    Atom Atom::GetNextEcsPrimitiveId() noexcept
    {
        static std::atomic_uintptr_t _nextEcsPrimitiveId(0);
        auto value = ++_nextEcsPrimitiveId;
        return Atom(value);
    }

    Atom Atom::GetNextEcsGraphicsPipelineId() noexcept
    {
        static std::atomic_uintptr_t _nextEcsGraphicsPipelineId(0);
        auto value = ++_nextEcsGraphicsPipelineId;
        return Atom(value);
    }
}
