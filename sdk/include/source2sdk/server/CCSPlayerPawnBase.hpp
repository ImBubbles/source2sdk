#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerPawn.hpp"
#include "source2sdk/server/CTouchExpansionComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_PingServices;
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
        // Size: 0xec0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CTouchExpansionComponent::Storage_t m_CTouchExpansionComponent"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
        // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
        // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
        // static metadata: MNetworkVarNames "float m_flFlashDuration"
        // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
        // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
        // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
        #pragma pack(push, 1)
        class CCSPlayerPawnBase : public source2sdk::server::CBasePlayerPawn
        {
        public:
            uint8_t _pad0d80[0x8]; // 0xd80
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CTouchExpansionComponent"
            // metadata: MNetworkAlias "CTouchExpansionComponent"
            // metadata: MNetworkTypeAlias "CTouchExpansionComponent"
            source2sdk::server::CTouchExpansionComponent m_CTouchExpansionComponent; // 0xd88            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_PingServices* m_pPingServices; // 0xdd8            
            source2sdk::entity2::GameTime_t m_blindUntilTime; // 0xde0            
            source2sdk::entity2::GameTime_t m_blindStartTime; // 0xde4            
            // metadata: MNetworkEnable
            source2sdk::client::CSPlayerState m_iPlayerState; // 0xde8            
            uint8_t _pad0dec[0xac]; // 0xdec
            bool m_bRespawning; // 0xe98            
            // metadata: MNetworkEnable
            bool m_bHasMovedSinceSpawn; // 0xe99            
            uint8_t _pad0e9a[0x2]; // 0xe9a
            std::int32_t m_iNumSpawns; // 0xe9c            
            uint8_t _pad0ea0[0x4]; // 0xea0
            float m_flIdleTimeSinceLastAction; // 0xea4            
            float m_fNextRadarUpdateTime; // 0xea8            
            // metadata: MNetworkEnable
            float m_flFlashDuration; // 0xeac            
            // metadata: MNetworkEnable
            float m_flFlashMaxAlpha; // 0xeb0            
            // metadata: MNetworkEnable
            float m_flProgressBarStartTime; // 0xeb4            
            // metadata: MNetworkEnable
            std::int32_t m_iProgressBarDuration; // 0xeb8            
            // metadata: MNetworkEnable
            // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerController> m_hOriginalController;
            char m_hOriginalController[0x4]; // 0xebc            
            
            // Datamap fields:
            // CHandle< CBaseEntity > original_controller; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerPawnBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerPawnBase) == 0xec0);
    };
};
