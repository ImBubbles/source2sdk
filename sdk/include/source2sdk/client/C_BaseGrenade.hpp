#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0x13c8
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
        class C_BaseGrenade : public source2sdk::client::C_BaseFlex
        {
        public:
            bool m_bHasWarnedAI; // 0x1378            
            bool m_bIsSmokeGrenade; // 0x1379            
            // metadata: MNetworkEnable
            bool m_bIsLive; // 0x137a            
            uint8_t _pad137b[0x1]; // 0x137b
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1024,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_DmgRadius; // 0x137c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDetonateTime; // 0x1380            
            float m_flWarnAITime; // 0x1384            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flDamage; // 0x1388            
            uint8_t _pad138c[0x4]; // 0x138c
            CUtlSymbolLarge m_iszBounceSound; // 0x1390            
            CUtlString m_ExplosionSound; // 0x1398            
            uint8_t _pad13a0[0x4]; // 0x13a0
            // metadata: MNetworkEnable
            // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hThrower;
            char m_hThrower[0x4]; // 0x13a4            
            uint8_t _pad13a8[0x14]; // 0x13a8
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0x13bc            
            // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hOriginalThrower;
            char m_hOriginalThrower[0x4]; // 0x13c0            
            uint8_t _pad13c4[0x4];
            
            // Datamap fields:
            // int32_t m_nExplosionType; // 0x13a0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseGrenade) == 0x13c8);
    };
};
