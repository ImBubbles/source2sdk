#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseClientUIEntity.hpp"

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
        // Size: 0x9f0
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
        class CPointClientUIWorldPanel : public source2sdk::server::CBaseClientUIEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x998            
            // metadata: MNetworkEnable
            bool m_bLit; // 0x999            
            // metadata: MNetworkEnable
            bool m_bFollowPlayerAcrossTeleport; // 0x99a            
            uint8_t _pad099b[0x1]; // 0x99b
            // metadata: MNetworkEnable
            float m_flWidth; // 0x99c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x9a0            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x9a4            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x9a8            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x9ac            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x9b0            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x9b4            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x9b8            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x9bc            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x9c0            
            uint8_t _pad09c1[0x7]; // 0x9c1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x9c8            
            // metadata: MNetworkEnable
            bool m_bOpaque; // 0x9e0            
            // metadata: MNetworkEnable
            bool m_bNoDepth; // 0x9e1            
            // metadata: MNetworkEnable
            bool m_bVisibleWhenParentNoDraw; // 0x9e2            
            // metadata: MNetworkEnable
            bool m_bRenderBackface; // 0x9e3            
            // metadata: MNetworkEnable
            bool m_bUseOffScreenIndicator; // 0x9e4            
            // metadata: MNetworkEnable
            bool m_bExcludeFromSaveGames; // 0x9e5            
            // metadata: MNetworkEnable
            bool m_bGrabbable; // 0x9e6            
            // metadata: MNetworkEnable
            bool m_bOnlyRenderToTexture; // 0x9e7            
            // metadata: MNetworkEnable
            bool m_bDisableMipGen; // 0x9e8            
            uint8_t _pad09e9[0x3]; // 0x9e9
            // metadata: MNetworkEnable
            std::int32_t m_nExplicitImageLayout; // 0x9ec            
            
            // Datamap fields:
            // CUtlSymbolLarge css_class; // 0x7fffffff
            // void InputIgnoreUserInput; // 0x0
            // void InputAcceptUserInput; // 0x0
            // CUtlSymbolLarge InputAddCSSClass; // 0x0
            // CUtlSymbolLarge InputRemoveCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
            // CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointClientUIWorldPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointClientUIWorldPanel) == 0x9f0);
    };
};
