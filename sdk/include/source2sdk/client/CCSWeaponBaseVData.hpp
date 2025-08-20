#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBasePlayerWeaponVData.hpp"
#include "source2sdk/client/CFiringModeFloat.hpp"
#include "source2sdk/client/CFiringModeInt.hpp"
#include "source2sdk/client/CSWeaponCategory.hpp"
#include "source2sdk/client/CSWeaponSilencerType.hpp"
#include "source2sdk/client/CSWeaponType.hpp"
#include "source2sdk/client/gear_slot_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x898
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCSWeaponBaseVData : public source2sdk::client::CBasePlayerWeaponVData
        {
        public:
            source2sdk::client::CSWeaponType m_WeaponType; // 0x440            
            source2sdk::client::CSWeaponCategory m_WeaponCategory; // 0x444            
            // metadata: MPropertyStartGroup "Visuals"
            // m_szModel_AG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_szModel_AG2;
            char m_szModel_AG2[0xe0]; // 0x448            
            // m_szAnimSkeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmSkeleton>> m_szAnimSkeleton;
            char m_szAnimSkeleton[0xe0]; // 0x528            
            Vector m_vecMuzzlePos0; // 0x608            
            Vector m_vecMuzzlePos1; // 0x614            
            // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon"
            // m_szTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szTracerParticle;
            char m_szTracerParticle[0xe0]; // 0x620            
            // metadata: MPropertyStartGroup "HUD Positions"
            // metadata: MPropertyFriendlyName "HUD Bucket"
            // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
            source2sdk::client::gear_slot_t m_GearSlot; // 0x700            
            std::int32_t m_GearSlotPosition; // 0x704            
            // metadata: MPropertyFriendlyName "HUD Bucket Position"
            // metadata: MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
            source2sdk::client::loadout_slot_t m_DefaultLoadoutSlot; // 0x708            
            // metadata: MPropertyStartGroup "In-Game Data"
            std::int32_t m_nPrice; // 0x70c            
            std::int32_t m_nKillAward; // 0x710            
            std::int32_t m_nPrimaryReserveAmmoMax; // 0x714            
            std::int32_t m_nSecondaryReserveAmmoMax; // 0x718            
            bool m_bMeleeWeapon; // 0x71c            
            bool m_bHasBurstMode; // 0x71d            
            bool m_bIsRevolver; // 0x71e            
            bool m_bCannotShootUnderwater; // 0x71f            
            // metadata: MPropertyFriendlyName "In-Code weapon name"
            CGlobalSymbol m_szName; // 0x720            
            source2sdk::client::CSWeaponSilencerType m_eSilencerType; // 0x728            
            std::int32_t m_nCrosshairMinDistance; // 0x72c            
            std::int32_t m_nCrosshairDeltaDistance; // 0x730            
            bool m_bIsFullAuto; // 0x734            
            uint8_t _pad0735[0x3]; // 0x735
            std::int32_t m_nNumBullets; // 0x738            
            bool m_bReloadsSingleShells; // 0x73c            
            uint8_t _pad073d[0x3]; // 0x73d
            // metadata: MPropertyStartGroup "Firing Mode Data"
            source2sdk::client::CFiringModeFloat m_flCycleTime; // 0x740            
            source2sdk::client::CFiringModeFloat m_flMaxSpeed; // 0x748            
            source2sdk::client::CFiringModeFloat m_flSpread; // 0x750            
            source2sdk::client::CFiringModeFloat m_flInaccuracyCrouch; // 0x758            
            source2sdk::client::CFiringModeFloat m_flInaccuracyStand; // 0x760            
            source2sdk::client::CFiringModeFloat m_flInaccuracyJump; // 0x768            
            source2sdk::client::CFiringModeFloat m_flInaccuracyLand; // 0x770            
            source2sdk::client::CFiringModeFloat m_flInaccuracyLadder; // 0x778            
            source2sdk::client::CFiringModeFloat m_flInaccuracyFire; // 0x780            
            source2sdk::client::CFiringModeFloat m_flInaccuracyMove; // 0x788            
            source2sdk::client::CFiringModeFloat m_flRecoilAngle; // 0x790            
            source2sdk::client::CFiringModeFloat m_flRecoilAngleVariance; // 0x798            
            source2sdk::client::CFiringModeFloat m_flRecoilMagnitude; // 0x7a0            
            source2sdk::client::CFiringModeFloat m_flRecoilMagnitudeVariance; // 0x7a8            
            source2sdk::client::CFiringModeInt m_nTracerFrequency; // 0x7b0            
            float m_flInaccuracyJumpInitial; // 0x7b8            
            float m_flInaccuracyJumpApex; // 0x7bc            
            float m_flInaccuracyReload; // 0x7c0            
            float m_flDeployDuration; // 0x7c4            
            float m_flDisallowAttackAfterReloadStartDuration; // 0x7c8            
            // metadata: MPropertyStartGroup "Firing"
            std::int32_t m_nRecoilSeed; // 0x7cc            
            std::int32_t m_nSpreadSeed; // 0x7d0            
            float m_flAttackMovespeedFactor; // 0x7d4            
            float m_flInaccuracyPitchShift; // 0x7d8            
            float m_flInaccuracyAltSoundThreshold; // 0x7dc            
            CUtlString m_szUseRadioSubtitle; // 0x7e0            
            // metadata: MPropertyStartGroup "Zooming"
            bool m_bUnzoomsAfterShot; // 0x7e8            
            bool m_bHideViewModelWhenZoomed; // 0x7e9            
            uint8_t _pad07ea[0x2]; // 0x7ea
            std::int32_t m_nZoomLevels; // 0x7ec            
            std::int32_t m_nZoomFOV1; // 0x7f0            
            std::int32_t m_nZoomFOV2; // 0x7f4            
            float m_flZoomTime0; // 0x7f8            
            float m_flZoomTime1; // 0x7fc            
            float m_flZoomTime2; // 0x800            
            // metadata: MPropertyStartGroup "Iron Sights"
            float m_flIronSightPullUpSpeed; // 0x804            
            float m_flIronSightPutDownSpeed; // 0x808            
            float m_flIronSightFOV; // 0x80c            
            float m_flIronSightPivotForward; // 0x810            
            float m_flIronSightLooseness; // 0x814            
            // metadata: MPropertyStartGroup "Damage"
            std::int32_t m_nDamage; // 0x818            
            float m_flHeadshotMultiplier; // 0x81c            
            float m_flArmorRatio; // 0x820            
            float m_flPenetration; // 0x824            
            float m_flRange; // 0x828            
            float m_flRangeModifier; // 0x82c            
            float m_flFlinchVelocityModifierLarge; // 0x830            
            float m_flFlinchVelocityModifierSmall; // 0x834            
            // metadata: MPropertyStartGroup "Recovery"
            float m_flRecoveryTimeCrouch; // 0x838            
            float m_flRecoveryTimeStand; // 0x83c            
            float m_flRecoveryTimeCrouchFinal; // 0x840            
            float m_flRecoveryTimeStandFinal; // 0x844            
            std::int32_t m_nRecoveryTransitionStartBullet; // 0x848            
            std::int32_t m_nRecoveryTransitionEndBullet; // 0x84c            
            // metadata: MPropertyStartGroup "Grenade Data"
            float m_flThrowVelocity; // 0x850            
            Vector m_vSmokeColor; // 0x854            
            CGlobalSymbol m_szAnimClass; // 0x860            
            uint8_t _pad0868[0x30];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBaseVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSWeaponBaseVData) == 0x898);
    };
};
