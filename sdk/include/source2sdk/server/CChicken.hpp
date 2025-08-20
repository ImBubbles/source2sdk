#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/ChickenActivity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3290
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_leader"
        #pragma pack(push, 1)
        class CChicken : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0d40[0x20]; // 0xd40
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0xd60            
            source2sdk::server::CountdownTimer m_updateTimer; // 0x1058            
            Vector m_stuckAnchor; // 0x1070            
            uint8_t _pad107c[0x4]; // 0x107c
            source2sdk::server::CountdownTimer m_stuckTimer; // 0x1080            
            source2sdk::server::CountdownTimer m_collisionStuckTimer; // 0x1098            
            bool m_isOnGround; // 0x10b0            
            uint8_t _pad10b1[0x3]; // 0x10b1
            Vector m_vFallVelocity; // 0x10b4            
            source2sdk::server::ChickenActivity m_desiredActivity; // 0x10c0            
            source2sdk::server::ChickenActivity m_currentActivity; // 0x10c4            
            source2sdk::server::CountdownTimer m_activityTimer; // 0x10c8            
            float m_turnRate; // 0x10e0            
            // m_fleeFrom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_fleeFrom;
            char m_fleeFrom[0x4]; // 0x10e4            
            source2sdk::server::CountdownTimer m_moveRateThrottleTimer; // 0x10e8            
            source2sdk::server::CountdownTimer m_startleTimer; // 0x1100            
            source2sdk::server::CountdownTimer m_vocalizeTimer; // 0x1118            
            source2sdk::entity2::GameTime_t m_flWhenZombified; // 0x1130            
            // metadata: MNetworkEnable
            bool m_jumpedThisFrame; // 0x1134            
            uint8_t _pad1135[0x3]; // 0x1135
            // metadata: MNetworkEnable
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0x1138            
            uint8_t _pad113c[0x14]; // 0x113c
            source2sdk::server::CountdownTimer m_reuseTimer; // 0x1150            
            bool m_hasBeenUsed; // 0x1168            
            uint8_t _pad1169[0x7]; // 0x1169
            source2sdk::server::CountdownTimer m_jumpTimer; // 0x1170            
            float m_flLastJumpTime; // 0x1188            
            bool m_bInJump; // 0x118c            
            uint8_t _pad118d[0x200b]; // 0x118d
            source2sdk::server::CountdownTimer m_repathTimer; // 0x3198            
            uint8_t _pad31b0[0x80]; // 0x31b0
            Vector m_vecPathGoal; // 0x3230            
            source2sdk::entity2::GameTime_t m_flActiveFollowStartTime; // 0x323c            
            source2sdk::server::CountdownTimer m_followMinuteTimer; // 0x3240            
            uint8_t _pad3258[0x8]; // 0x3258
            source2sdk::server::CountdownTimer m_BlockDirectionTimer; // 0x3260            
            uint8_t _pad3278[0x18];
            
            // Datamap fields:
            // void CChickenChickenTouch; // 0x0
            // void CChickenChickenThink; // 0x0
            // void CChickenChickenUse; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChicken because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CChicken) == 0x3290);
    };
};
