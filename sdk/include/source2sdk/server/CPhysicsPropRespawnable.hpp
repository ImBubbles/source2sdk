#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysicsProp.hpp"

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
        // Size: 0xe30
        // Has VTable
        #pragma pack(push, 1)
        class CPhysicsPropRespawnable : public source2sdk::server::CPhysicsProp
        {
        public:
            Vector m_vOriginalSpawnOrigin; // 0xdf0            
            QAngle m_vOriginalSpawnAngles; // 0xdfc            
            Vector m_vOriginalMins; // 0xe08            
            Vector m_vOriginalMaxs; // 0xe14            
            float m_flRespawnDuration; // 0xe20            
            uint8_t _pad0e24[0xc];
            
            // Datamap fields:
            // void CPhysicsPropRespawnableMaterialize; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsPropRespawnable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsPropRespawnable) == 0xe30);
    };
};
