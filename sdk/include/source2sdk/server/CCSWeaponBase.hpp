#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/WeaponGameplayAnimState.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlayerWeapon.hpp"
#include "source2sdk/server/CIronSightController.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1030
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
        class CCSWeaponBase : public source2sdk::server::CBasePlayerWeapon
        {
        public:
            bool m_bRemoveable; // 0xe78            
            uint8_t _pad0e79[0x7]; // 0xe79
            // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::HSequence> m_thirdPersonFireSequences;
            char m_thirdPersonFireSequences[0x18]; // 0xe80            
            source2sdk::animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0xe98            
            source2sdk::animationsystem::HSequence m_thirdPersonSequences[7]; // 0xe9c            
            uint8_t _pad0eb8[0x8]; // 0xeb8
            bool m_bPlayerAmmoStockOnPickup; // 0xec0            
            bool m_bRequireUseToTouch; // 0xec1            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "WeaponGameplayAnimStateNetworkChangeCallback"
            source2sdk::client::WeaponGameplayAnimState m_iWeaponGameplayAnimState; // 0xec2            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flWeaponGameplayAnimStateTimestamp; // 0xec4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flInspectCancelCompleteTime; // 0xec8            
            // metadata: MNetworkEnable
            bool m_bInspectPending; // 0xecc            
            bool m_bInspectShouldLoop; // 0xecd            
            uint8_t _pad0ece[0x2a]; // 0xece
            std::int32_t m_nLastEmptySoundCmdNum; // 0xef8            
            uint8_t _pad0efc[0x1c]; // 0xefc
            bool m_bFireOnEmpty; // 0xf18            
            uint8_t _pad0f19[0x7]; // 0xf19
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xf20            
            // metadata: MNetworkEnable
            source2sdk::client::CSWeaponMode m_weaponMode; // 0xf48            
            float m_flTurningInaccuracyDelta; // 0xf4c            
            Vector m_vecTurningInaccuracyEyeDirLast; // 0xf50            
            float m_flTurningInaccuracy; // 0xf5c            
            // metadata: MNetworkEnable
            float m_fAccuracyPenalty; // 0xf60            
            source2sdk::entity2::GameTime_t m_flLastAccuracyUpdateTime; // 0xf64            
            float m_fAccuracySmoothedForZoom; // 0xf68            
            // metadata: MNetworkEnable
            std::int32_t m_iRecoilIndex; // 0xf6c            
            // metadata: MNetworkEnable
            float m_flRecoilIndex; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
            bool m_bBurstMode; // 0xf74            
            uint8_t _pad0f75[0x3]; // 0xf75
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nPostponeFireReadyTicks; // 0xf78            
            // metadata: MNetworkEnable
            float m_flPostponeFireReadyFrac; // 0xf7c            
            // metadata: MNetworkEnable
            bool m_bInReload; // 0xf80            
            uint8_t _pad0f81[0x3]; // 0xf81
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDroppedAtTime; // 0xf84            
            // metadata: MNetworkEnable
            bool m_bIsHauledBack; // 0xf88            
            // metadata: MNetworkEnable
            bool m_bSilencerOn; // 0xf89            
            uint8_t _pad0f8a[0x2]; // 0xf8a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeSilencerSwitchComplete; // 0xf8c            
            // metadata: MNetworkEnable
            std::int32_t m_iOriginalTeamNumber; // 0xf90            
            // metadata: MNetworkEnable
            std::int32_t m_iMostRecentTeamNumber; // 0xf94            
            // metadata: MNetworkEnable
            bool m_bDroppedNearBuyZone; // 0xf98            
            uint8_t _pad0f99[0x3]; // 0xf99
            float m_flNextAttackRenderTimeOffset; // 0xf9c            
            uint8_t _pad0fa0[0x10]; // 0xfa0
            bool m_bCanBePickedUp; // 0xfb0            
            bool m_bUseCanOverrideNextOwnerTouchTime; // 0xfb1            
            uint8_t _pad0fb2[0x2]; // 0xfb2
            source2sdk::entity2::GameTime_t m_nextOwnerTouchTime; // 0xfb4            
            source2sdk::entity2::GameTime_t m_nextPrevOwnerTouchTime; // 0xfb8            
            uint8_t _pad0fbc[0x4]; // 0xfbc
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_nextPrevOwnerUseTime; // 0xfc0            
            // metadata: MNetworkEnable
            // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hPrevOwner;
            char m_hPrevOwner[0x4]; // 0xfc4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTick_t m_nDropTick; // 0xfc8            
            // metadata: MNetworkEnable
            bool m_bWasActiveWeaponWhenDropped; // 0xfcc            
            uint8_t _pad0fcd[0x1f]; // 0xfcd
            bool m_donated; // 0xfec            
            uint8_t _pad0fed[0x3]; // 0xfed
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fLastShotTime; // 0xff0            
            bool m_bWasOwnedByCT; // 0xff4            
            bool m_bWasOwnedByTerrorist; // 0xff5            
            uint8_t _pad0ff6[0x2]; // 0xff6
            std::int32_t m_numRemoveUnownedWeaponThink; // 0xff8            
            uint8_t _pad0ffc[0x4]; // 0xffc
            source2sdk::server::CIronSightController m_IronSightController; // 0x1000            
            // metadata: MNetworkEnable
            std::int32_t m_iIronSightMode; // 0x1018            
            source2sdk::entity2::GameTime_t m_flLastLOSTraceFailureTime; // 0x101c            
            // metadata: MNetworkEnable
            float m_flWatTickOffset; // 0x1020            
            uint8_t _pad1024[0xc];
            
            // Datamap fields:
            // void CCSWeaponBaseDefaultTouch; // 0x0
            // void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
            // void InputToggleCanBePickedUp; // 0x0
            // float InputSetAmmoAmount; // 0x0
            // int32_t InputSetReserveAmmoAmount; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBase) == 0x1030);
    };
};
