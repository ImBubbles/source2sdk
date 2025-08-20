#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xab0
        // Has VTable
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xa78            
            uint8_t _pad0a79[0x3]; // 0xa79
            std::int32_t m_iShapeType; // 0xa7c            
            bool m_bConformToCollisionBounds; // 0xa80            
            uint8_t _pad0a81[0xf]; // 0xa81
            CTransform m_mPreferredCatchTransform; // 0xa90            
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0xab0);
    };
};
