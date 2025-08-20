#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSPlayerPawn;
    };
};

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
        // Size: 0x14d0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_lifeState"
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecViewOffset"
        // static metadata: MNetworkOverride "m_vecViewOffset C_BaseModelEntity"
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_leader"
        // static metadata: MNetworkVarNames "CountdownTimer m_reuseTimer"
        // static metadata: MNetworkVarNames "Vector m_vel"
        // static metadata: MNetworkVarNames "bool m_isRescued"
        // static metadata: MNetworkVarNames "bool m_jumpedThisFrame"
        // static metadata: MNetworkVarNames "int m_nHostageState"
        // static metadata: MNetworkVarNames "bool m_bHandsHaveBeenCut"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hHostageGrabber"
        // static metadata: MNetworkVarNames "GameTime_t m_flRescueStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flGrabSuccessTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDropStartTime"
        #pragma pack(push, 1)
        class C_Hostage : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x1400            
            // metadata: MNetworkEnable
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_leader;
            char m_leader[0x4]; // 0x1418            
            uint8_t _pad141c[0x4]; // 0x141c
            // metadata: MNetworkEnable
            source2sdk::client::CountdownTimer m_reuseTimer; // 0x1420            
            // metadata: MNetworkEnable
            Vector m_vel; // 0x1438            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecvProxy_Rescued"
            bool m_isRescued; // 0x1444            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecvProxy_Jumped"
            bool m_jumpedThisFrame; // 0x1445            
            uint8_t _pad1446[0x2]; // 0x1446
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHostageStateChanged"
            std::int32_t m_nHostageState; // 0x1448            
            // metadata: MNetworkEnable
            bool m_bHandsHaveBeenCut; // 0x144c            
            uint8_t _pad144d[0x3]; // 0x144d
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGrabberChanged"
            // m_hHostageGrabber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hHostageGrabber;
            char m_hHostageGrabber[0x4]; // 0x1450            
            source2sdk::entity2::GameTime_t m_fLastGrabTime; // 0x1454            
            Vector m_vecGrabbedPos; // 0x1458            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRescueStartTime; // 0x1464            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flGrabSuccessTime; // 0x1468            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDropStartTime; // 0x146c            
            source2sdk::entity2::GameTime_t m_flDeadOrRescuedTime; // 0x1470            
            uint8_t _pad1474[0x4]; // 0x1474
            source2sdk::client::CountdownTimer m_blinkTimer; // 0x1478            
            Vector m_lookAt; // 0x1490            
            uint8_t _pad149c[0x4]; // 0x149c
            source2sdk::client::CountdownTimer m_lookAroundTimer; // 0x14a0            
            bool m_isInit; // 0x14b8            
            source2sdk::modellib::AttachmentHandle_t m_eyeAttachment; // 0x14b9            
            source2sdk::modellib::AttachmentHandle_t m_chestAttachment; // 0x14ba            
            uint8_t _pad14bb[0x5]; // 0x14bb
            source2sdk::client::CBasePlayerController* m_pPredictionOwner; // 0x14c0            
            source2sdk::entity2::GameTime_t m_fNewestAlphaThinkTime; // 0x14c8            
            uint8_t _pad14cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Hostage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Hostage) == 0x14d0);
    };
};
