#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/Extent.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

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
        // Size: 0x1488
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_firePositions"
        // static metadata: MNetworkVarNames "Vector m_fireParentPositions"
        // static metadata: MNetworkVarNames "bool m_bFireIsBurning"
        // static metadata: MNetworkVarNames "Vector m_BurnNormal"
        // static metadata: MNetworkVarNames "int m_fireCount"
        // static metadata: MNetworkVarNames "int m_nInfernoType"
        // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
        // static metadata: MNetworkVarNames "float m_nFireLifetime"
        // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
        #pragma pack(push, 1)
        class CInferno : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07e8[0x10]; // 0x7e8
            // metadata: MNetworkEnable
            Vector m_firePositions[64]; // 0x7f8            
            // metadata: MNetworkEnable
            Vector m_fireParentPositions[64]; // 0xaf8            
            // metadata: MNetworkEnable
            bool m_bFireIsBurning[64]; // 0xdf8            
            // metadata: MNetworkEnable
            Vector m_BurnNormal[64]; // 0xe38            
            // metadata: MNetworkEnable
            std::int32_t m_fireCount; // 0x1138            
            // metadata: MNetworkEnable
            std::int32_t m_nInfernoType; // 0x113c            
            // metadata: MNetworkEnable
            std::int32_t m_nFireEffectTickBegin; // 0x1140            
            // metadata: MNetworkEnable
            float m_nFireLifetime; // 0x1144            
            // metadata: MNetworkEnable
            bool m_bInPostEffectTime; // 0x1148            
            uint8_t _pad1149[0x3]; // 0x1149
            std::int32_t m_nFiresExtinguishCount; // 0x114c            
            bool m_bWasCreatedInSmoke; // 0x1150            
            uint8_t _pad1151[0x207]; // 0x1151
            source2sdk::navlib::Extent m_extent; // 0x1358            
            source2sdk::server::CountdownTimer m_damageTimer; // 0x1370            
            source2sdk::server::CountdownTimer m_damageRampTimer; // 0x1388            
            Vector m_splashVelocity; // 0x13a0            
            Vector m_InitialSplashVelocity; // 0x13ac            
            Vector m_startPos; // 0x13b8            
            Vector m_vecOriginalSpawnLocation; // 0x13c4            
            source2sdk::server::IntervalTimer m_activeTimer; // 0x13d0            
            std::int32_t m_fireSpawnOffset; // 0x13e0            
            std::int32_t m_nMaxFlames; // 0x13e4            
            std::int32_t m_nSpreadCount; // 0x13e8            
            uint8_t _pad13ec[0x4]; // 0x13ec
            source2sdk::server::CountdownTimer m_BookkeepingTimer; // 0x13f0            
            source2sdk::server::CountdownTimer m_NextSpreadTimer; // 0x1408            
            std::uint16_t m_nSourceItemDefIndex; // 0x1420            
            uint8_t _pad1422[0x66];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInferno) == 0x1488);
    };
};
