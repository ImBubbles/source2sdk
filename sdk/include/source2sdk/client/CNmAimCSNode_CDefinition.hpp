#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmAimCSNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_nVerticalAngleNodeIdx; // 0x18            
            std::int16_t m_nHorizontalAngleNodeIdx; // 0x1a            
            std::int16_t m_nEnabledNodeIdx; // 0x1c            
            uint8_t _pad001e[0x2]; // 0x1e
            float m_flBlendTimeSeconds; // 0x20            
            uint8_t _pad0024[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmAimCSNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNmAimCSNode_CDefinition) == 0x28);
    };
};
