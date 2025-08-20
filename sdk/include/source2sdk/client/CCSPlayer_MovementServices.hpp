#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e0
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
        class CCSPlayer_MovementServices : public source2sdk::client::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "normal"
            Vector m_vecLadderNormal; // 0x280            
            // metadata: MNetworkEnable
            std::int32_t m_nLadderSurfacePropIndex; // 0x28c            
            // metadata: MNetworkEnable
            float m_flDuckAmount; // 0x290            
            // metadata: MNetworkEnable
            float m_flDuckSpeed; // 0x294            
            // metadata: MNetworkEnable
            bool m_bDuckOverride; // 0x298            
            // metadata: MNetworkEnable
            bool m_bDesiresDuck; // 0x299            
            uint8_t _pad029a[0x2]; // 0x29a
            // metadata: MNetworkEnable
            float m_flDuckOffset; // 0x29c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            std::uint32_t m_nDuckTimeMsecs; // 0x2a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nDuckJumpTimeMsecs; // 0x2a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::uint32_t m_nJumpTimeMsecs; // 0x2a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flLastDuckTime; // 0x2ac            
            uint8_t _pad02b0[0x8]; // 0x2b0
            Vector2D m_vecLastPositionAtFullCrouchSpeed; // 0x2b8            
            bool m_duckUntilOnGround; // 0x2c0            
            bool m_bHasWalkMovedSinceLastJump; // 0x2c1            
            bool m_bInStuckTest; // 0x2c2            
            uint8_t _pad02c3[0x20d]; // 0x2c3
            std::int32_t m_nTraceCount; // 0x4d0            
            std::int32_t m_StuckLast; // 0x4d4            
            bool m_bSpeedCropped; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            float m_flGroundMoveEfficiency; // 0x4dc            
            std::int32_t m_nOldWaterLevel; // 0x4e0            
            float m_flWaterEntryTime; // 0x4e4            
            Vector m_vecForward; // 0x4e8            
            Vector m_vecLeft; // 0x4f4            
            Vector m_vecUp; // 0x500            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            std::int32_t m_nGameCodeHasMovedPlayerAfterCommand; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bOldJumpPressed; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            float m_flJumpPressedTime; // 0x514            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fStashGrenadeParameterWhen; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            // metadata: MNetworkEnable
            std::uint64_t m_nButtonDownMaskPrev; // 0x520            
            // metadata: MNetworkEnable
            float m_flOffsetTickCompleteTime; // 0x528            
            // metadata: MNetworkEnable
            float m_flOffsetTickStashedSpeed; // 0x52c            
            // metadata: MNetworkEnable
            float m_flStamina; // 0x530            
            float m_flHeightAtJumpStart; // 0x534            
            float m_flMaxJumpHeightThisJump; // 0x538            
            float m_flMaxJumpHeightLastJump; // 0x53c            
            float m_flStaminaAtJumpStart; // 0x540            
            float m_flAccumulatedJumpError; // 0x544            
            float m_flTicksSinceLastSurfingDetected; // 0x548            
            // metadata: MNetworkEnable
            bool m_bWasSurfing; // 0x54c            
            uint8_t _pad054d[0x93];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_MovementServices) == 0x5e0);
    };
};
