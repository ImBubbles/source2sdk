#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/C_BasePlayerWeapon.hpp"
#include "source2sdk/client/C_IronSightController.hpp"
#include "source2sdk/client/WeaponGameplayAnimState.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e10
        // Has VTable
        // 
        // static metadata: MNetworkOutOfPVSUpdates
        // static metadata: MNetworkVarNames "WeaponGameplayAnimState m_iWeaponGameplayAnimState"
        // static metadata: MNetworkVarNames "GameTime_t m_flWeaponGameplayAnimStateTimestamp"
        // static metadata: MNetworkVarNames "GameTime_t m_flInspectCancelCompleteTime"
        // static metadata: MNetworkVarNames "bool m_bInspectPending"
        // static metadata: MNetworkVarNames "CSWeaponMode m_weaponMode"
        // static metadata: MNetworkVarNames "float m_fAccuracyPenalty"
        // static metadata: MNetworkVarNames "int m_iRecoilIndex"
        // static metadata: MNetworkVarNames "float m_flRecoilIndex"
        // static metadata: MNetworkVarNames "bool m_bBurstMode"
        // static metadata: MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
        // static metadata: MNetworkVarNames "float m_flPostponeFireReadyFrac"
        // static metadata: MNetworkVarNames "bool m_bInReload"
        // static metadata: MNetworkVarNames "GameTime_t m_flDroppedAtTime"
        // static metadata: MNetworkVarNames "bool m_bIsHauledBack"
        // static metadata: MNetworkVarNames "bool m_bSilencerOn"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
        // static metadata: MNetworkVarNames "int m_iOriginalTeamNumber"
        // static metadata: MNetworkVarNames "int m_iMostRecentTeamNumber"
        // static metadata: MNetworkVarNames "bool m_bDroppedNearBuyZone"
        // static metadata: MNetworkVarNames "GameTime_t m_nextPrevOwnerUseTime"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
        // static metadata: MNetworkVarNames "GameTick_t m_nDropTick"
        // static metadata: MNetworkVarNames "bool m_bWasActiveWeaponWhenDropped"
        // static metadata: MNetworkVarNames "GameTime_t m_fLastShotTime"
        // static metadata: MNetworkVarNames "int m_iIronSightMode"
        // static metadata: MNetworkVarNames "float m_flWatTickOffset"
        #pragma pack(push, 1)
        class C_CSWeaponBase : public source2sdk::client::C_BasePlayerWeapon
        {
        public:
            uint8_t _pad1928[0x40]; // 0x1928
            // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::HSequence> m_thirdPersonFireSequences;
            char m_thirdPersonFireSequences[0x18]; // 0x1968            
            source2sdk::animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0x1980            
            source2sdk::animationsystem::HSequence m_thirdPersonSequences[7]; // 0x1984            
            uint8_t _pad19a0[0x18]; // 0x19a0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "WeaponGameplayAnimStateNetworkChangeCallback"
            source2sdk::client::WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0x19b8            
            uint8_t _pad19ba[0x2]; // 0x19ba
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0x19bc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flInspectCancelCompleteTime; // 0x19c0            
            // metadata: MNetworkEnable
            bool m_bInspectPending; // 0x19c4            
            bool m_bInspectShouldLoop; // 0x19c5            
            uint8_t _pad19c6[0x2a]; // 0x19c6
            float m_flCrosshairDistance; // 0x19f0            
            std::int32_t m_iAmmoLastCheck; // 0x19f4            
            std::int32_t m_nLastEmptySoundCmdNum; // 0x19f8            
            bool m_bFireOnEmpty; // 0x19fc            
            uint8_t _pad19fd[0x3]; // 0x19fd
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0x1a00            
            // metadata: MNetworkEnable
            source2sdk::client::CSWeaponMode m_weaponMode; // 0x1a28            
            float m_flTurningInaccuracyDelta; // 0x1a2c            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0x1a30            
            float m_flTurningInaccuracy; // 0x1a3c            
            // metadata: MNetworkEnable
            float m_fAccuracyPenalty; // 0x1a40            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0x1a44            
            float m_fAccuracySmoothedForZoom; // 0x1a48            
            // metadata: MNetworkEnable
            std::int32_t m_iRecoilIndex; // 0x1a4c            
            // metadata: MNetworkEnable
            float m_flRecoilIndex; // 0x1a50            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
            bool m_bBurstMode; // 0x1a54            
            uint8_t _pad1a55[0x3]; // 0x1a55
            source2sdk::entity2::GameTime_t m_flLastBurstModeChangeTime; // 0x1a58            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0x1a5c            
            // metadata: MNetworkEnable
            float m_flPostponeFireReadyFrac; // 0x1a60            
            // metadata: MNetworkEnable
            bool m_bInReload; // 0x1a64            
            uint8_t _pad1a65[0x3]; // 0x1a65
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0x1a68            
            // metadata: MNetworkEnable
            bool m_bIsHauledBack; // 0x1a6c            
            // metadata: MNetworkEnable
            bool m_bSilencerOn; // 0x1a6d            
            uint8_t _pad1a6e[0x2]; // 0x1a6e
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0x1a70            
            // metadata: MNetworkEnable
            std::int32_t m_iOriginalTeamNumber; // 0x1a74            
            // metadata: MNetworkEnable
            std::int32_t m_iMostRecentTeamNumber; // 0x1a78            
            // metadata: MNetworkEnable
            bool m_bDroppedNearBuyZone; // 0x1a7c            
            uint8_t _pad1a7d[0x3]; // 0x1a7d
            float m_flNextAttackRenderTimeOffset; // 0x1a80            
            uint8_t _pad1a84[0x9c]; // 0x1a84
            bool m_bClearWeaponIdentifyingUGC; // 0x1b20            
            bool m_bVisualsDataSet; // 0x1b21            
            bool m_bUIWeapon; // 0x1b22            
            uint8_t _pad1b23[0x1]; // 0x1b23
            std::int32_t m_nCustomEconReloadEventId; // 0x1b24            
            uint8_t _pad1b28[0x8]; // 0x1b28
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0x1b30            
            // metadata: MNetworkEnable
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0x1b34            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nDropTick; // 0x1b38            
            // metadata: MNetworkEnable
            bool m_bWasActiveWeaponWhenDropped; // 0x1b3c            
            uint8_t _pad1b3d[0x1f]; // 0x1b3d
            bool m_donated; // 0x1b5c            
            uint8_t _pad1b5d[0x3]; // 0x1b5d
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0x1b60            
            bool m_bWasOwnedByCT; // 0x1b64            
            bool m_bWasOwnedByTerrorist; // 0x1b65            
            uint8_t _pad1b66[0x2]; // 0x1b66
            float m_flNextClientFireBulletTime; // 0x1b68            
            float m_flNextClientFireBulletTime_Repredict; // 0x1b6c            
            uint8_t _pad1b70[0x160]; // 0x1b70
            source2sdk::client::C_IronSightController m_IronSightController; // 0x1cd0            
            // metadata: MNetworkEnable
            std::int32_t m_iIronSightMode; // 0x1d80            
            uint8_t _pad1d84[0x14]; // 0x1d84
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0x1d98            
            uint8_t _pad1d9c[0x5c]; // 0x1d9c
            // metadata: MNetworkEnable
            float m_flWatTickOffset; // 0x1df8            
            uint8_t _pad1dfc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBase) == 0x1e10);
    };
};
