#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0x1258
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkVarNames "Vector m_poolOrigin"
        // static metadata: MNetworkVarNames "float32 m_waterLevel"
        // static metadata: MNetworkVarNames "float32 m_x"
        // static metadata: MNetworkVarNames "float32 m_y"
        // static metadata: MNetworkVarNames "float32 m_z"
        // static metadata: MNetworkVarNames "float32 m_angle"
        #pragma pack(push, 1)
        class C_Fish : public source2sdk::client::CBaseAnimGraph
        {
        public:
            Vector m_pos; // 0x1168            
            Vector m_vel; // 0x1174            
            QAngle m_angles; // 0x1180            
            std::int32_t m_localLifeState; // 0x118c            
            float m_deathDepth; // 0x1190            
            float m_deathAngle; // 0x1194            
            float m_buoyancy; // 0x1198            
            uint8_t _pad119c[0x4]; // 0x119c
            source2sdk::client::CountdownTimer m_wiggleTimer; // 0x11a0            
            float m_wigglePhase; // 0x11b8            
            float m_wiggleRate; // 0x11bc            
            Vector m_actualPos; // 0x11c0            
            QAngle m_actualAngles; // 0x11cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_poolOrigin; // 0x11d8            
            // metadata: MNetworkEnable
            float m_waterLevel; // 0x11e4            
            bool m_gotUpdate; // 0x11e8            
            uint8_t _pad11e9[0x3]; // 0x11e9
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_x"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            float m_x; // 0x11ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_y"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            float m_y; // 0x11f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_z"
            // metadata: MNetworkChangeCallback "OnPosChanged"
            float m_z; // 0x11f4            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "angle_normalize_positive"
            // metadata: MNetworkBitCount "7"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "360,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkChangeCallback "OnAngChanged"
            float m_angle; // 0x11f8            
            float m_errorHistory[20]; // 0x11fc            
            std::int32_t m_errorHistoryIndex; // 0x124c            
            std::int32_t m_errorHistoryCount; // 0x1250            
            float m_averageError; // 0x1254            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Fish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Fish) == 0x1258);
    };
};
