#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1e40
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_zoomLevel"
        // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
        // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
        // static metadata: MNetworkVarNames "int32 m_nRevolverCylinderIdx"
        #pragma pack(push, 1)
        class C_CSWeaponBaseGun : public source2sdk::client::C_CSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_zoomLevel; // 0x1e10            
            // metadata: MNetworkEnable
            std::int32_t m_iBurstShotsRemaining; // 0x1e14            
            std::int32_t m_iSilencerBodygroup; // 0x1e18            
            uint8_t _pad1e1c[0xc]; // 0x1e1c
            std::int32_t m_silencedModelIndex; // 0x1e28            
            bool m_inPrecache; // 0x1e2c            
            // metadata: MNetworkEnable
            bool m_bNeedsBoltAction; // 0x1e2d            
            uint8_t _pad1e2e[0x2]; // 0x1e2e
            // metadata: MNetworkEnable
            std::int32_t m_nRevolverCylinderIdx; // 0x1e30            
            uint8_t _pad1e34[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBaseGun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBaseGun) == 0x1e40);
    };
};
