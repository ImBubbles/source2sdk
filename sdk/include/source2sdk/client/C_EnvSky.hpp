#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0xf20
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
        // static metadata: MNetworkVarNames "bool m_bStartDisabled"
        // static metadata: MNetworkVarNames "Color m_vTintColor"
        // static metadata: MNetworkVarNames "Color m_vTintColorLightingOnly"
        // static metadata: MNetworkVarNames "float m_flBrightnessScale"
        // static metadata: MNetworkVarNames "int m_nFogType"
        // static metadata: MNetworkVarNames "float m_flFogMinStart"
        // static metadata: MNetworkVarNames "float m_flFogMinEnd"
        // static metadata: MNetworkVarNames "float m_flFogMaxStart"
        // static metadata: MNetworkVarNames "float m_flFogMaxEnd"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class C_EnvSky : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            // m_hSkyMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial;
            char m_hSkyMaterial[0x8]; // 0xec0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            // m_hSkyMaterialLightingOnly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly;
            char m_hSkyMaterialLightingOnly[0x8]; // 0xec8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            bool m_bStartDisabled; // 0xed0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            Color m_vTintColor; // 0xed1            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            Color m_vTintColorLightingOnly; // 0xed5            
            uint8_t _pad0ed9[0x3]; // 0xed9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flBrightnessScale; // 0xedc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            std::int32_t m_nFogType; // 0xee0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMinStart; // 0xee4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMinEnd; // 0xee8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMaxStart; // 0xeec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            float m_flFogMaxEnd; // 0xef0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "SkyStateChanged"
            bool m_bEnabled; // 0xef4            
            uint8_t _pad0ef5[0x2b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvSky because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvSky) == 0xf20);
    };
};
