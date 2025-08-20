#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseModelEntity;
    };
};

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
        // Size: 0x1210
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "int m_nColorMode"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "float m_flColorTemperature"
        // static metadata: MNetworkVarNames "float m_flBrightness"
        // static metadata: MNetworkVarNames "float m_flBrightnessScale"
        // static metadata: MNetworkVarNames "int m_nDirectLight"
        // static metadata: MNetworkVarNames "int m_nBakedShadowIndex"
        // static metadata: MNetworkVarNames "int32 m_nLightPathUniqueId"
        // static metadata: MNetworkVarNames "int32 m_nLightMapUniqueId"
        // static metadata: MNetworkVarNames "int m_nLuminaireShape"
        // static metadata: MNetworkVarNames "float m_flLuminaireSize"
        // static metadata: MNetworkVarNames "float m_flLuminaireAnisotropy"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleString"
        // static metadata: MNetworkVarNames "GameTime_t m_flLightStyleStartTime"
        // static metadata: MNetworkVarNames "CUtlString m_QueuedLightStyleStrings"
        // static metadata: MNetworkVarNames "CUtlString m_LightStyleEvents"
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_LightStyleTargets"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hLightCookie"
        // static metadata: MNetworkVarNames "float m_flShape"
        // static metadata: MNetworkVarNames "float m_flSoftX"
        // static metadata: MNetworkVarNames "float m_flSoftY"
        // static metadata: MNetworkVarNames "float m_flSkirt"
        // static metadata: MNetworkVarNames "float m_flSkirtNear"
        // static metadata: MNetworkVarNames "Vector m_vSizeParams"
        // static metadata: MNetworkVarNames "float m_flRange"
        // static metadata: MNetworkVarNames "Vector m_vShear"
        // static metadata: MNetworkVarNames "int m_nBakeSpecularToCubemaps"
        // static metadata: MNetworkVarNames "Vector m_vBakeSpecularToCubemapsSize"
        // static metadata: MNetworkVarNames "int m_nCastShadows"
        // static metadata: MNetworkVarNames "int m_nShadowMapSize"
        // static metadata: MNetworkVarNames "int m_nShadowPriority"
        // static metadata: MNetworkVarNames "bool m_bContactShadow"
        // static metadata: MNetworkVarNames "bool m_bForceShadowsEnabled"
        // static metadata: MNetworkVarNames "int m_nBounceLight"
        // static metadata: MNetworkVarNames "float m_flBounceScale"
        // static metadata: MNetworkVarNames "float m_flMinRoughness"
        // static metadata: MNetworkVarNames "Vector m_vAlternateColor"
        // static metadata: MNetworkVarNames "float m_fAlternateColorBrightness"
        // static metadata: MNetworkVarNames "int m_nFog"
        // static metadata: MNetworkVarNames "float m_flFogStrength"
        // static metadata: MNetworkVarNames "int m_nFogShadows"
        // static metadata: MNetworkVarNames "float m_flFogScale"
        // static metadata: MNetworkVarNames "bool m_bFogMixedShadows"
        // static metadata: MNetworkVarNames "float m_flFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flFadeSizeEnd"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeStart"
        // static metadata: MNetworkVarNames "float m_flShadowFadeSizeEnd"
        // static metadata: MNetworkVarNames "bool m_bPrecomputedFieldsValid"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMins"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedBoundsMaxs"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent"
        // static metadata: MNetworkVarNames "int m_nPrecomputedSubFrusta"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin0"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent0"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin1"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent1"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin2"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent2"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin3"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent3"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin4"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent4"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBOrigin5"
        // static metadata: MNetworkVarNames "QAngle m_vPrecomputedOBBAngles5"
        // static metadata: MNetworkVarNames "Vector m_vPrecomputedOBBExtent5"
        // static metadata: MNetworkVarNames "uint16 m_VisClusters"
        #pragma pack(push, 1)
        class C_BarnLight : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bEnabled; // 0xec0            
            uint8_t _pad0ec1[0x3]; // 0xec1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nColorMode; // 0xec4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Color m_Color; // 0xec8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flColorTemperature; // 0xecc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightness; // 0xed0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flBrightnessScale; // 0xed4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nDirectLight; // 0xed8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nBakedShadowIndex; // 0xedc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightPathUniqueId; // 0xee0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLightMapUniqueId; // 0xee4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nLuminaireShape; // 0xee8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireSize; // 0xeec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flLuminaireAnisotropy; // 0xef0            
            uint8_t _pad0ef4[0x4]; // 0xef4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "StyleChanged"
            CUtlString m_LightStyleString; // 0xef8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            source2sdk::entity2::GameTime_t m_flLightStyleStartTime; // 0xf00            
            uint8_t _pad0f04[0x4]; // 0xf04
            // metadata: MNetworkEnable
            // m_QueuedLightStyleStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_QueuedLightStyleStrings;
            char m_QueuedLightStyleStrings[0x18]; // 0xf08            
            // metadata: MNetworkEnable
            // m_LightStyleEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlString> m_LightStyleEvents;
            char m_LightStyleEvents[0x18]; // 0xf20            
            // metadata: MNetworkEnable
            // m_LightStyleTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_LightStyleTargets;
            char m_LightStyleTargets[0x18]; // 0xf38            
            source2sdk::entity2::CEntityIOOutput m_StyleEvent[4]; // 0xf50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
            char m_hLightCookie[0x8]; // 0xff0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShape; // 0xff8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftX; // 0xffc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSoftY; // 0x1000            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirt; // 0x1004            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flSkirtNear; // 0x1008            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vSizeParams; // 0x100c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            float m_flRange; // 0x1018            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vShear; // 0x101c            
            // metadata: MNetworkEnable
            std::int32_t m_nBakeSpecularToCubemaps; // 0x1028            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // metadata: MNetworkBitCount "32"
            Vector m_vBakeSpecularToCubemapsSize; // 0x102c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nCastShadows; // 0x1038            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowMapSize; // 0x103c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nShadowPriority; // 0x1040            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bContactShadow; // 0x1044            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bForceShadowsEnabled; // 0x1045            
            uint8_t _pad1046[0x2]; // 0x1046
            // metadata: MNetworkEnable
            std::int32_t m_nBounceLight; // 0x1048            
            // metadata: MNetworkEnable
            float m_flBounceScale; // 0x104c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flMinRoughness; // 0x1050            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vAlternateColor; // 0x1054            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_fAlternateColorBrightness; // 0x1060            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFog; // 0x1064            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogStrength; // 0x1068            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nFogShadows; // 0x106c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFogScale; // 0x1070            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bFogMixedShadows; // 0x1074            
            uint8_t _pad1075[0x3]; // 0x1075
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeStart; // 0x1078            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flFadeSizeEnd; // 0x107c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeStart; // 0x1080            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            float m_flShadowFadeSizeEnd; // 0x1084            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            bool m_bPrecomputedFieldsValid; // 0x1088            
            uint8_t _pad1089[0x3]; // 0x1089
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMins; // 0x108c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedBoundsMaxs; // 0x1098            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin; // 0x10a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles; // 0x10b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent; // 0x10bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            std::int32_t m_nPrecomputedSubFrusta; // 0x10c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin0; // 0x10cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles0; // 0x10d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent0; // 0x10e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin1; // 0x10f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles1; // 0x10fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent1; // 0x1108            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin2; // 0x1114            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles2; // 0x1120            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent2; // 0x112c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin3; // 0x1138            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles3; // 0x1144            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent3; // 0x1150            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin4; // 0x115c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles4; // 0x1168            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent4; // 0x1174            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBOrigin5; // 0x1180            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            QAngle m_vPrecomputedOBBAngles5; // 0x118c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            Vector m_vPrecomputedOBBExtent5; // 0x1198            
            uint8_t _pad11a4[0x44]; // 0x11a4
            bool m_bInitialBoneSetup; // 0x11e8            
            uint8_t _pad11e9[0x7]; // 0x11e9
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RenderingChanged"
            // m_VisClusters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_VisClusters;
            char m_VisClusters[0x18]; // 0x11f0            
            uint8_t _pad1208[0x8];
            
            // Datamap fields:
            // void m_StyleEvent[0]; // 0xf50
            // void m_StyleEvent[1]; // 0xf78
            // void m_StyleEvent[2]; // 0xfa0
            // void m_StyleEvent[3]; // 0xfc8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BarnLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BarnLight) == 0x1210);
    };
};
