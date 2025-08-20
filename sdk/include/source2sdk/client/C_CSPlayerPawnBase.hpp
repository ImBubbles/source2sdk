#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_PingServices;
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
        // Size: 0x16b8
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
        // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
        // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
        // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
        // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
        // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
        // static metadata: MNetworkVarNames "float m_flFlashDuration"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
        #pragma pack(push, 1)
        class C_CSPlayerPawnBase : public source2sdk::client::C_BasePlayerPawn
        {
        public:
            uint8_t _pad15d8[0x10]; // 0x15d8
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_PingServices* m_pPingServices; // 0x15e8            
            source2sdk::client::CSPlayerState m_previousPlayerState; // 0x15f0            
            // metadata: MNetworkEnable
            source2sdk::client::CSPlayerState m_iPlayerState; // 0x15f4            
            // metadata: MNetworkEnable
            bool m_bHasMovedSinceSpawn; // 0x15f8            
            uint8_t _pad15f9[0x3]; // 0x15f9
            source2sdk::entity2::GameTime_t m_flLastSpawnTimeIndex; // 0x15fc            
            // metadata: MNetworkEnable
            std::int32_t m_iProgressBarDuration; // 0x1600            
            // metadata: MNetworkEnable
            float m_flProgressBarStartTime; // 0x1604            
            source2sdk::entity2::GameTime_t m_flClientDeathTime; // 0x1608            
            float m_flFlashBangTime; // 0x160c            
            float m_flFlashScreenshotAlpha; // 0x1610            
            float m_flFlashOverlayAlpha; // 0x1614            
            bool m_bFlashBuildUp; // 0x1618            
            bool m_bFlashDspHasBeenCleared; // 0x1619            
            bool m_bFlashScreenshotHasBeenGrabbed; // 0x161a            
            uint8_t _pad161b[0x1]; // 0x161b
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashMaxAlphaChanged"
            float m_flFlashMaxAlpha; // 0x161c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnFlashDurationChanged"
            float m_flFlashDuration; // 0x1620            
            source2sdk::entity2::GameTime_t m_flClientHealthFadeChangeTimestamp; // 0x1624            
            std::int32_t m_nClientHealthFadeParityValue; // 0x1628            
            float m_fNextThinkPushAway; // 0x162c            
            CEntityIndex m_iIDEntIndex; // 0x1630            
            uint8_t _pad1634[0x4]; // 0x1634
            source2sdk::client::CountdownTimer m_delayTargetIDTimer; // 0x1638            
            CEntityIndex m_iTargetItemEntIdx; // 0x1650            
            CEntityIndex m_iOldIDEntIndex; // 0x1654            
            source2sdk::client::CountdownTimer m_holdTargetIDTimer; // 0x1658            
            uint8_t _pad1670[0x4]; // 0x1670
            float m_flCurrentMusicStartTime; // 0x1674            
            float m_flMusicRoundStartTime; // 0x1678            
            bool m_bDeferStartMusicOnWarmup; // 0x167c            
            uint8_t _pad167d[0x3]; // 0x167d
            float m_flLastSmokeOverlayAlpha; // 0x1680            
            float m_flLastSmokeAge; // 0x1684            
            Vector m_vLastSmokeOverlayColor; // 0x1688            
            uint8_t _pad1694[0x1c]; // 0x1694
            // metadata: MNetworkEnable
            // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCSPlayerController> m_hOriginalController;
            char m_hOriginalController[0x4]; // 0x16b0            
            uint8_t _pad16b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerPawnBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerPawnBase) == 0x16b8);
    };
};
