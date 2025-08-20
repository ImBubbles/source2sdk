#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x538
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "Vector m_vBoxMins"
        // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "bool m_bIndirectUseLPVs"
        // static metadata: MNetworkVarNames "float m_flStrength"
        // static metadata: MNetworkVarNames "int m_nFalloffShape"
        // static metadata: MNetworkVarNames "float m_flFalloffExponent"
        // static metadata: MNetworkVarNames "float m_flHeightFogDepth"
        // static metadata: MNetworkVarNames "float m_fHeightFogEdgeWidth"
        // static metadata: MNetworkVarNames "float m_fIndirectLightStrength"
        // static metadata: MNetworkVarNames "float m_fSunLightStrength"
        // static metadata: MNetworkVarNames "float m_fNoiseStrength"
        // static metadata: MNetworkVarNames "Color m_TintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideTintColor"
        // static metadata: MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideSunLightStrength"
        // static metadata: MNetworkVarNames "bool m_bOverrideNoiseStrength"
        #pragma pack(push, 1)
        class CEnvVolumetricFogVolume : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bActive; // 0x4f0            
            uint8_t _pad04f1[0x3]; // 0x4f1
            // metadata: MNetworkEnable
            Vector m_vBoxMins; // 0x4f4            
            // metadata: MNetworkEnable
            Vector m_vBoxMaxs; // 0x500            
            // metadata: MNetworkEnable
            bool m_bStartDisabled; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bIndirectUseLPVs; // 0x50d            
            uint8_t _pad050e[0x2]; // 0x50e
            // metadata: MNetworkEnable
            float m_flStrength; // 0x510            
            // metadata: MNetworkEnable
            std::int32_t m_nFalloffShape; // 0x514            
            // metadata: MNetworkEnable
            float m_flFalloffExponent; // 0x518            
            // metadata: MNetworkEnable
            float m_flHeightFogDepth; // 0x51c            
            // metadata: MNetworkEnable
            float m_fHeightFogEdgeWidth; // 0x520            
            // metadata: MNetworkEnable
            float m_fIndirectLightStrength; // 0x524            
            // metadata: MNetworkEnable
            float m_fSunLightStrength; // 0x528            
            // metadata: MNetworkEnable
            float m_fNoiseStrength; // 0x52c            
            // metadata: MNetworkEnable
            Color m_TintColor; // 0x530            
            // metadata: MNetworkEnable
            bool m_bOverrideTintColor; // 0x534            
            // metadata: MNetworkEnable
            bool m_bOverrideIndirectLightStrength; // 0x535            
            // metadata: MNetworkEnable
            bool m_bOverrideSunLightStrength; // 0x536            
            // metadata: MNetworkEnable
            bool m_bOverrideNoiseStrength; // 0x537            
            
            // Datamap fields:
            // bool InputEnable; // 0x0
            // bool InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvVolumetricFogVolume) == 0x538);
    };
};
