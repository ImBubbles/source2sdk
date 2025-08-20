#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x710
        // Has VTable
        #pragma pack(push, 1)
        class CSoundOpvarSetAABBEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            Vector m_vDistanceInnerMins; // 0x6a8            
            Vector m_vDistanceInnerMaxs; // 0x6b4            
            Vector m_vDistanceOuterMins; // 0x6c0            
            Vector m_vDistanceOuterMaxs; // 0x6cc            
            std::int32_t m_nAABBDirection; // 0x6d8            
            Vector m_vInnerMins; // 0x6dc            
            Vector m_vInnerMaxs; // 0x6e8            
            Vector m_vOuterMins; // 0x6f4            
            Vector m_vOuterMaxs; // 0x700            
            uint8_t _pad070c[0x4];
            
            // Datamap fields:
            // void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetAABBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetAABBEntity) == 0x710);
    };
};
