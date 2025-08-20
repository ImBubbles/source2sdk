#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

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
        // Size: 0xd28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsIncGrenade"
        #pragma pack(push, 1)
        class CMolotovProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIsIncGrenade; // 0xc20            
            uint8_t _pad0c21[0x17]; // 0xc21
            bool m_bDetonated; // 0xc38            
            uint8_t _pad0c39[0x7]; // 0xc39
            source2sdk::server::IntervalTimer m_stillTimer; // 0xc40            
            uint8_t _pad0c50[0xd0]; // 0xc50
            bool m_bHasBouncedOffPlayer; // 0xd20            
            uint8_t _pad0d21[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMolotovProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMolotovProjectile) == 0xd28);
    };
};
