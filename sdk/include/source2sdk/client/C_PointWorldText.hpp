#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ModelPointEntity.hpp"
#include "source2sdk/client/PointWorldTextJustifyHorizontal_t.hpp"
#include "source2sdk/client/PointWorldTextJustifyVertical_t.hpp"
#include "source2sdk/client/PointWorldTextReorientMode_t.hpp"

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
        // Size: 0x1190
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "char m_messageText"
        // static metadata: MNetworkVarNames "char m_FontName"
        // static metadata: MNetworkVarNames "char m_BackgroundMaterialName"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bFullbright"
        // static metadata: MNetworkVarNames "float m_flWorldUnitsPerPx"
        // static metadata: MNetworkVarNames "float m_flFontSize"
        // static metadata: MNetworkVarNames "float m_flDepthOffset"
        // static metadata: MNetworkVarNames "bool m_bDrawBackground"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderWidth"
        // static metadata: MNetworkVarNames "float m_flBackgroundBorderHeight"
        // static metadata: MNetworkVarNames "float m_flBackgroundWorldToUV"
        // static metadata: MNetworkVarNames "Color m_Color"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
        // static metadata: MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
        // static metadata: MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
        #pragma pack(push, 1)
        class C_PointWorldText : public source2sdk::client::C_ModelPointEntity
        {
        public:
            uint8_t _pad0ec0[0x8]; // 0xec0
            bool m_bForceRecreateNextUpdate; // 0xec8            
            uint8_t _pad0ec9[0x17]; // 0xec9
            // metadata: MNetworkEnable
            char m_messageText[512]; // 0xee0            
            // metadata: MNetworkEnable
            char m_FontName[64]; // 0x10e0            
            // metadata: MNetworkEnable
            char m_BackgroundMaterialName[64]; // 0x1120            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x1160            
            // metadata: MNetworkEnable
            bool m_bFullbright; // 0x1161            
            uint8_t _pad1162[0x2]; // 0x1162
            // metadata: MNetworkEnable
            float m_flWorldUnitsPerPx; // 0x1164            
            // metadata: MNetworkEnable
            float m_flFontSize; // 0x1168            
            // metadata: MNetworkEnable
            float m_flDepthOffset; // 0x116c            
            // metadata: MNetworkEnable
            bool m_bDrawBackground; // 0x1170            
            uint8_t _pad1171[0x3]; // 0x1171
            // metadata: MNetworkEnable
            float m_flBackgroundBorderWidth; // 0x1174            
            // metadata: MNetworkEnable
            float m_flBackgroundBorderHeight; // 0x1178            
            // metadata: MNetworkEnable
            float m_flBackgroundWorldToUV; // 0x117c            
            // metadata: MNetworkEnable
            Color m_Color; // 0x1180            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x1184            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x1188            
            // metadata: MNetworkEnable
            source2sdk::client::PointWorldTextReorientMode_t m_nReorientMode; // 0x118c            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
            // int32_t InputSetIntMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointWorldText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointWorldText) == 0x1190);
    };
};
