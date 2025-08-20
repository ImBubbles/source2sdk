#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xb50
        // Has VTable
        #pragma pack(push, 1)
        class CItem : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a78[0x8]; // 0xa78
            source2sdk::entity2::CEntityIOOutput m_OnPlayerTouch; // 0xa80            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xaa8            
            bool m_bActivateWhenAtRest; // 0xad0            
            uint8_t _pad0ad1[0x7]; // 0xad1
            source2sdk::entity2::CEntityIOOutput m_OnCacheInteraction; // 0xad8            
            source2sdk::entity2::CEntityIOOutput m_OnGlovePulled; // 0xb00            
            Vector m_vOriginalSpawnOrigin; // 0xb28            
            QAngle m_vOriginalSpawnAngles; // 0xb34            
            bool m_bPhysStartAsleep; // 0xb40            
            uint8_t _pad0b41[0xf];
            
            // Datamap fields:
            // void CItemItemTouch; // 0x0
            // void CItemMaterialize; // 0x0
            // void CItemComeToRest; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem) == 0xb50);
    };
};
