#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x510
        // Has VTable
        #pragma pack(push, 1)
        class CPointTeleport : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            Vector m_vSaveOrigin; // 0x4f0            
            QAngle m_vSaveAngles; // 0x4fc            
            bool m_bTeleportParentedEntities; // 0x508            
            bool m_bTeleportUseCurrentAngle; // 0x509            
            uint8_t _pad050a[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointTeleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointTeleport) == 0x510);
    };
};
