#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CPointOffScreenIndicatorUi;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1120
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
        // static metadata: MNetworkVarNames "bool m_bLit"
        // static metadata: MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "float m_flHeight"
        // static metadata: MNetworkVarNames "float m_flDPI"
        // static metadata: MNetworkVarNames "float m_flInteractDistance"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "uint32 m_unOwnerContext"
        // static metadata: MNetworkVarNames "uint32 m_unHorizontalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unVerticalAlign"
        // static metadata: MNetworkVarNames "uint32 m_unOrientation"
        // static metadata: MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
        // static metadata: MNetworkVarNames "string_t m_vecCSSClasses"
        // static metadata: MNetworkVarNames "bool m_bOpaque"
        // static metadata: MNetworkVarNames "bool m_bNoDepth"
        // static metadata: MNetworkVarNames "bool m_bVisibleWhenParentNoDraw"
        // static metadata: MNetworkVarNames "bool m_bRenderBackface"
        // static metadata: MNetworkVarNames "bool m_bUseOffScreenIndicator"
        // static metadata: MNetworkVarNames "bool m_bExcludeFromSaveGames"
        // static metadata: MNetworkVarNames "bool m_bGrabbable"
        // static metadata: MNetworkVarNames "bool m_bOnlyRenderToTexture"
        // static metadata: MNetworkVarNames "bool m_bDisableMipGen"
        // static metadata: MNetworkVarNames "int32 m_nExplicitImageLayout"
        #pragma pack(push, 1)
        class C_PointClientUIWorldPanel : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0ef0[0x8]; // 0xef0
            bool m_bForceRecreateNextUpdate; // 0xef8            
            bool m_bMoveViewToPlayerNextThink; // 0xef9            
            bool m_bCheckCSSClasses; // 0xefa            
            uint8_t _pad0efb[0x5]; // 0xefb
            CTransform m_anchorDeltaTransform; // 0xf00            
            uint8_t _pad0f20[0x178]; // 0xf20
            source2sdk::client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0x1098            
            uint8_t _pad10a0[0x20]; // 0x10a0
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x10c0            
            // metadata: MNetworkEnable
            bool m_bLit; // 0x10c1            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0x10c2            
            uint8_t _pad10c3[0x1]; // 0x10c3
            // metadata: MNetworkEnable
            float m_flWidth; // 0x10c4            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x10c8            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x10cc            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x10d0            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x10d4            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x10d8            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x10dc            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x10e0            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x10e4            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x10e8            
            uint8_t _pad10e9[0x7]; // 0x10e9
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x10f0            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0x1108            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0x1109            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0x110a            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0x110b            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0x110c            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0x110d            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0x110e            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0x110f            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0x1110            
            uint8_t _pad1111[0x3]; // 0x1111
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0x1114            
            uint8_t _pad1118[0x8];
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
            // CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0x1090
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldPanel) == 0x1120);
    };
};
