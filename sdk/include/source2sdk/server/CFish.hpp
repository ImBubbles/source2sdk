#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFishPool;
    };
};

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
        // Size: 0xb80
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkVarNames "float32 m_x"
        // static metadata: MNetworkVarNames "float32 m_y"
        // static metadata: MNetworkVarNames "float32 m_z"
        // static metadata: MNetworkVarNames "float32 m_angle"
        // static metadata: MNetworkVarNames "Vector m_poolOrigin"
        // static metadata: MNetworkVarNames "float32 m_waterLevel"
        #pragma pack(push, 1)
        class CFish : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // m_pool has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFishPool> m_pool;
            char m_pool[0x4]; // 0xa78            
            std::uint32_t m_id; // 0xa7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_x"
            float m_x; // 0xa80            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_y"
            float m_y; // 0xa84            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "fish_pos_z"
            float m_z; // 0xa88            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "angle_normalize_positive"
            // metadata: MNetworkBitCount "7"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "360,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_angle; // 0xa8c            
            float m_angleChange; // 0xa90            
            Vector m_forward; // 0xa94            
            Vector m_perp; // 0xaa0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_poolOrigin; // 0xaac            
            // metadata: MNetworkEnable
            float m_waterLevel; // 0xab8            
            float m_speed; // 0xabc            
            float m_desiredSpeed; // 0xac0            
            float m_calmSpeed; // 0xac4            
            float m_panicSpeed; // 0xac8            
            float m_avoidRange; // 0xacc            
            source2sdk::server::CountdownTimer m_turnTimer; // 0xad0            
            bool m_turnClockwise; // 0xae8            
            uint8_t _pad0ae9[0x7]; // 0xae9
            source2sdk::server::CountdownTimer m_goTimer; // 0xaf0            
            source2sdk::server::CountdownTimer m_moveTimer; // 0xb08            
            source2sdk::server::CountdownTimer m_panicTimer; // 0xb20            
            source2sdk::server::CountdownTimer m_disperseTimer; // 0xb38            
            source2sdk::server::CountdownTimer m_proximityTimer; // 0xb50            
            // m_visible has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CFish*> m_visible;
            char m_visible[0x18]; // 0xb68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFish because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFish) == 0xb80);
    };
};
