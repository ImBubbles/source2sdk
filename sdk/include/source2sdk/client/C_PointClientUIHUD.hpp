#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseClientUIEntity.hpp"

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
        // Size: 0x10c0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIgnoreInput"
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
        #pragma pack(push, 1)
        class C_PointClientUIHUD : public source2sdk::client::C_BaseClientUIEntity
        {
        public:
            uint8_t _pad0ef0[0x8]; // 0xef0
            bool m_bCheckCSSClasses; // 0xef8            
            uint8_t _pad0ef9[0x17f]; // 0xef9
            // metadata: MNetworkEnable
            bool m_bIgnoreInput; // 0x1078            
            uint8_t _pad1079[0x3]; // 0x1079
            // metadata: MNetworkEnable
            float m_flWidth; // 0x107c            
            // metadata: MNetworkEnable
            float m_flHeight; // 0x1080            
            // metadata: MNetworkEnable
            float m_flDPI; // 0x1084            
            // metadata: MNetworkEnable
            float m_flInteractDistance; // 0x1088            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x108c            
            // metadata: MNetworkEnable
            std::uint32_t m_unOwnerContext; // 0x1090            
            // metadata: MNetworkEnable
            std::uint32_t m_unHorizontalAlign; // 0x1094            
            // metadata: MNetworkEnable
            std::uint32_t m_unVerticalAlign; // 0x1098            
            // metadata: MNetworkEnable
            std::uint32_t m_unOrientation; // 0x109c            
            // metadata: MNetworkEnable
            bool m_bAllowInteractionFromAllSceneWorlds; // 0x10a0            
            uint8_t _pad10a1[0x7]; // 0x10a1
            // metadata: MNetworkEnable
            // m_vecCSSClasses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses;
            char m_vecCSSClasses[0x18]; // 0x10a8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIHUD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIHUD) == 0x10c0);
    };
};
