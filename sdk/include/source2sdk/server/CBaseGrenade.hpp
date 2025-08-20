#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xbb0
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_nResetEventsParity"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByName "m_nNewSequenceParity"
        // static metadata: MNetworkVarNames "bool m_bIsLive"
        // static metadata: MNetworkVarNames "float32 m_DmgRadius"
        // static metadata: MNetworkVarNames "GameTime_t m_flDetonateTime"
        // static metadata: MNetworkVarNames "float32 m_flDamage"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
        #pragma pack(push, 1)
        class CBaseGrenade : public source2sdk::server::CBaseFlex
        {
        public:
            uint8_t _pad0b08[0x8]; // 0xb08
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xb10            
            source2sdk::entity2::CEntityIOOutput m_OnExplode; // 0xb38            
            bool m_bHasWarnedAI; // 0xb60            
            bool m_bIsSmokeGrenade; // 0xb61            
            // metadata: MNetworkEnable
            bool m_bIsLive; // 0xb62            
            uint8_t _pad0b63[0x1]; // 0xb63
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1024,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_DmgRadius; // 0xb64            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDetonateTime; // 0xb68            
            float m_flWarnAITime; // 0xb6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flDamage; // 0xb70            
            uint8_t _pad0b74[0x4]; // 0xb74
            CUtlSymbolLarge m_iszBounceSound; // 0xb78            
            CUtlString m_ExplosionSound; // 0xb80            
            uint8_t _pad0b88[0x4]; // 0xb88
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hThrower;
            char m_hThrower[0x4]; // 0xb8c            
            uint8_t _pad0b90[0x14]; // 0xb90
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xba4            
            // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hOriginalThrower;
            char m_hOriginalThrower[0x4]; // 0xba8            
            uint8_t _pad0bac[0x4];
            
            // Datamap fields:
            // int32_t m_nExplosionType; // 0xb88
            // void CBaseGrenadeSmoke; // 0x0
            // void CBaseGrenadeBounceTouch; // 0x0
            // void CBaseGrenadeSlideTouch; // 0x0
            // void CBaseGrenadeExplodeTouch; // 0x0
            // void CBaseGrenadeDetonateUse; // 0x0
            // void CBaseGrenadeDangerSoundThink; // 0x0
            // void CBaseGrenadePreDetonate; // 0x0
            // void CBaseGrenadeDetonate; // 0x0
            // void CBaseGrenadeTumbleThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseGrenade) == 0xbb0);
    };
};
