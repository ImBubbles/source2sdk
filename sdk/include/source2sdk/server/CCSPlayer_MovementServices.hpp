#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecLadderNormal"
        // static metadata: MNetworkVarNames "int m_nLadderSurfacePropIndex"
        // static metadata: MNetworkVarNames "float m_flDuckAmount"
        // static metadata: MNetworkVarNames "float m_flDuckSpeed"
        // static metadata: MNetworkVarNames "bool m_bDuckOverride"
        // static metadata: MNetworkVarNames "bool m_bDesiresDuck"
        // static metadata: MNetworkVarNames "float m_flDuckOffset"
        // static metadata: MNetworkVarNames "uint32 m_nDuckTimeMsecs"
        // static metadata: MNetworkVarNames "uint32 m_nDuckJumpTimeMsecs"
        // static metadata: MNetworkVarNames "uint32 m_nJumpTimeMsecs"
        // static metadata: MNetworkVarNames "float m_flLastDuckTime"
        // static metadata: MNetworkVarNames "int m_nGameCodeHasMovedPlayerAfterCommand"
        // static metadata: MNetworkVarNames "bool m_bOldJumpPressed"
        // static metadata: MNetworkVarNames "GameTime_t m_fStashGrenadeParameterWhen"
        // static metadata: MNetworkVarNames "ButtonBitMask_t m_nButtonDownMaskPrev"
        // static metadata: MNetworkVarNames "float m_flOffsetTickCompleteTime"
        // static metadata: MNetworkVarNames "float m_flOffsetTickStashedSpeed"
        // static metadata: MNetworkVarNames "float m_flStamina"
        // static metadata: MNetworkVarNames "bool m_bWasSurfing"
        #pragma pack(push, 1)
        class CCSPlayer_MovementServices : public source2sdk::server::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "normal"
            Vector m_vecLadderNormal; // 0x288            
            // metadata: MNetworkEnable
            std::int32_t m_nLadderSurfacePropIndex; // 0x294            
            // metadata: MNetworkEnable
            float m_flDuckAmount; // 0x298            
            // metadata: MNetworkEnable
            float m_flDuckSpeed; // 0x29c            
            // metadata: MNetworkEnable
            bool m_bDuckOverride; // 0x2a0            
            // metadata: MNetworkEnable
            bool m_bDesiresDuck; // 0x2a1            
            uint8_t _pad02a2[0x2]; // 0x2a2
            // metadata: MNetworkEnable
            float m_flDuckOffset; // 0x2a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            std::uint32_t m_nDuckTimeMsecs; // 0x2a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nDuckJumpTimeMsecs; // 0x2ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nJumpTimeMsecs; // 0x2b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flLastDuckTime; // 0x2b4            
            uint8_t _pad02b8[0x8]; // 0x2b8
            Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2c0            
            bool m_duckUntilOnGround; // 0x2c8            
            bool m_bHasWalkMovedSinceLastJump; // 0x2c9            
            bool m_bInStuckTest; // 0x2ca            
            uint8_t _pad02cb[0x20d]; // 0x2cb
            std::int32_t m_nTraceCount; // 0x4d8            
            std::int32_t m_StuckLast; // 0x4dc            
            bool m_bSpeedCropped; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            float m_flGroundMoveEfficiency; // 0x4e4            
            std::int32_t m_nOldWaterLevel; // 0x4e8            
            float m_flWaterEntryTime; // 0x4ec            
            Vector m_vecForward; // 0x4f0            
            Vector m_vecLeft; // 0x4fc            
            Vector m_vecUp; // 0x508            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x514            
            bool m_bMadeFootstepNoise; // 0x518            
            uint8_t _pad0519[0x3]; // 0x519
            std::int32_t m_iFootsteps; // 0x51c            
            // metadata: MNetworkEnable
            bool m_bOldJumpPressed; // 0x520            
            uint8_t _pad0521[0x3]; // 0x521
            float m_flJumpPressedTime; // 0x524            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fStashGrenadeParameterWhen; // 0x528            
            uint8_t _pad052c[0x4]; // 0x52c
            // metadata: MNetworkEnable
            std::uint64_t m_nButtonDownMaskPrev; // 0x530            
            // metadata: MNetworkEnable
            float m_flOffsetTickCompleteTime; // 0x538            
            // metadata: MNetworkEnable
            float m_flOffsetTickStashedSpeed; // 0x53c            
            // metadata: MNetworkEnable
            float m_flStamina; // 0x540            
            float m_flHeightAtJumpStart; // 0x544            
            float m_flMaxJumpHeightThisJump; // 0x548            
            float m_flMaxJumpHeightLastJump; // 0x54c            
            float m_flStaminaAtJumpStart; // 0x550            
            float m_flAccumulatedJumpError; // 0x554            
            float m_flTicksSinceLastSurfingDetected; // 0x558            
            // metadata: MNetworkEnable
            bool m_bWasSurfing; // 0x55c            
            uint8_t _pad055d[0x93];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_MovementServices) == 0x5f0);
    };
};
