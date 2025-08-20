#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CHostageExpresserShim.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawnBase;
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
        // Size: 0x2e88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
        // static metadata: MNetworkVarNames "Vector m_vel"
        // static metadata: MNetworkVarNames "bool m_isRescued"
        // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
        // static metadata: MNetworkVarNames "int m_nHostageState"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_leader"
        // static metadata: MNetworkVarNames "CountdownTimer m_reuseTimer"
        // static metadata: MNetworkVarNames "bool m_bHandsHaveBeenCut"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
        // static metadata: MNetworkVarNames "GameTime_t m_flRescueStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDropStartTime"
        #pragma pack(push, 1)
        class CHostage : public source2sdk::server::CHostageExpresserShim
        {
        public:
            uint8_t _pad0bd8[0x10]; // 0xbd8
            source2sdk::entity2::CEntityIOOutput m_OnHostageBeginGrab; // 0xbe8            
            source2sdk::entity2::CEntityIOOutput m_OnFirstPickedUp; // 0xc10            
            source2sdk::entity2::CEntityIOOutput m_OnDroppedNotRescued; // 0xc38            
            source2sdk::entity2::CEntityIOOutput m_OnRescued; // 0xc60            
            // metadata: MNetworkEnable
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0xc88            
            std::int32_t m_nSpotRules; // 0xca0            
            std::uint32_t m_uiHostageSpawnExclusionGroupMask; // 0xca4            
            std::uint32_t m_nHostageSpawnRandomFactor; // 0xca8            
            bool m_bRemove; // 0xcac            
            uint8_t _pad0cad[0x3]; // 0xcad
            // metadata: MNetworkEnable
            Vector m_vel; // 0xcb0            
            // metadata: MNetworkEnable
            bool m_isRescued; // 0xcbc            
            // metadata: MNetworkEnable
            bool m_jumpedThisFrame; // 0xcbd            
            uint8_t _pad0cbe[0x2]; // 0xcbe
            // metadata: MNetworkEnable
            std::int32_t m_nHostageState; // 0xcc0            
            // metadata: MNetworkEnable
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_leader;
            char m_leader[0x4]; // 0xcc4            
            // m_lastLeader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawnBase> m_lastLeader;
            char m_lastLeader[0x4]; // 0xcc8            
            uint8_t _pad0ccc[0x4]; // 0xccc
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_reuseTimer; // 0xcd0            
            bool m_hasBeenUsed; // 0xce8            
            uint8_t _pad0ce9[0x3]; // 0xce9
            Vector m_accel; // 0xcec            
            bool m_isRunning; // 0xcf8            
            bool m_isCrouching; // 0xcf9            
            uint8_t _pad0cfa[0x6]; // 0xcfa
            source2sdk::server::CountdownTimer m_jumpTimer; // 0xd00            
            bool m_isWaitingForLeader; // 0xd18            
            uint8_t _pad0d19[0x200f]; // 0xd19
            source2sdk::server::CountdownTimer m_repathTimer; // 0x2d28            
            source2sdk::server::CountdownTimer m_inhibitDoorTimer; // 0x2d40            
            uint8_t _pad2d58[0x78]; // 0x2d58
            source2sdk::server::CountdownTimer m_inhibitObstacleAvoidanceTimer; // 0x2dd0            
            uint8_t _pad2de8[0x8]; // 0x2de8
            source2sdk::server::CountdownTimer m_wiggleTimer; // 0x2df0            
            uint8_t _pad2e08[0x4]; // 0x2e08
            bool m_isAdjusted; // 0x2e0c            
            // metadata: MNetworkEnable
            bool m_bHandsHaveBeenCut; // 0x2e0d            
            uint8_t _pad2e0e[0x2]; // 0x2e0e
            // metadata: MNetworkEnable
            // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hHostageGrabber;
            char m_hHostageGrabber[0x4]; // 0x2e10            
            source2sdk::entity2::GameTime_t m_fLastGrabTime; // 0x2e14            
            Vector m_vecPositionWhenStartedDroppingToGround; // 0x2e18            
            Vector m_vecGrabbedPos; // 0x2e24            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRescueStartTime; // 0x2e30            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrabSuccessTime; // 0x2e34            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDropStartTime; // 0x2e38            
            std::int32_t m_nApproachRewardPayouts; // 0x2e3c            
            std::int32_t m_nPickupEventCount; // 0x2e40            
            Vector m_vecSpawnGroundPos; // 0x2e44            
            uint8_t _pad2e50[0x2c]; // 0x2e50
            Vector m_vecHostageResetPosition; // 0x2e7c            
            
            // Datamap fields:
            // void HostageRescueZoneTouch; // 0x0
            // void CHostageHostageUse; // 0x0
            // void CHostageHostageThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHostage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CHostage) == 0x2e88);
    };
};
