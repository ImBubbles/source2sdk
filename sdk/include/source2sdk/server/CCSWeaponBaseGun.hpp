#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSWeaponBase.hpp"

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
        // Size: 0x1050
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_zoomLevel"
        // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
        // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
        // static metadata: MNetworkVarNames "int32 m_nRevolverCylinderIdx"
        #pragma pack(push, 1)
        class CCSWeaponBaseGun : public source2sdk::server::CCSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_zoomLevel; // 0x1030            
            // metadata: MNetworkEnable
            std::int32_t m_iBurstShotsRemaining; // 0x1034            
            uint8_t _pad1038[0x8]; // 0x1038
            std::int32_t m_silencedModelIndex; // 0x1040            
            bool m_inPrecache; // 0x1044            
            // metadata: MNetworkEnable
            bool m_bNeedsBoltAction; // 0x1045            
            uint8_t _pad1046[0x2]; // 0x1046
            // metadata: MNetworkEnable
            std::int32_t m_nRevolverCylinderIdx; // 0x1048            
            bool m_bSkillReloadAvailable; // 0x104c            
            bool m_bSkillReloadLiftedReloadKey; // 0x104d            
            bool m_bSkillBoltInterruptAvailable; // 0x104e            
            bool m_bSkillBoltLiftedFireKey; // 0x104f            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBaseGun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBaseGun) == 0x1050);
    };
};
