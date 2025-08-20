#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/C_CSPlayerPawnBase.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/PredictedDamageTag_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_BulletServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_BuyServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_DamageReactServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_GlowServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CCSPlayer_HostageServices;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BulletHitModel;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CS2HudModelArms;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_CSWeaponBase;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3ee0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
        // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
        // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
        // static metadata: MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
        // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
        // static metadata: MNetworkIncludeByName "m_pUseServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
        // static metadata: MNetworkIncludeByName "m_pItemServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
        // static metadata: MNetworkIncludeByName "m_pWaterServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
        // static metadata: MNetworkIncludeByName "m_pWeaponServices"
        // static metadata: MNetworkIncludeByName "m_ArmorValue"
        // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
        // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
        // static metadata: MNetworkVarNames "char m_szLastPlaceName"
        // static metadata: MNetworkVarNames "bool m_bInBuyZone"
        // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
        // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
        // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
        // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
        // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
        // static metadata: MNetworkVarNames "bool m_bInBombZone"
        // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
        // static metadata: MNetworkVarNames "int m_iRetakesOffering"
        // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
        // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
        // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
        // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
        // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
        // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
        // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
        // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
        // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
        // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
        // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
        // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
        // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
        // static metadata: MNetworkReplayCompatField "m_bClientRagdoll"
        // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
        // static metadata: MNetworkVarNames "bool m_bLeftHanded"
        // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
        // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
        // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
        // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
        // static metadata: MNetworkVarNames "bool m_bIsWalking"
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkVarNames "bool m_bIsScoped"
        // static metadata: MNetworkVarNames "bool m_bResumeZoom"
        // static metadata: MNetworkVarNames "bool m_bIsDefusing"
        // static metadata: MNetworkVarNames "bool m_bIsGrabbingHostage"
        // static metadata: MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
        // static metadata: MNetworkVarNames "GameTime_t m_flEmitSoundTime"
        // static metadata: MNetworkVarNames "bool m_bInNoDefuseArea"
        // static metadata: MNetworkVarNames "int m_nWhichBombZone"
        // static metadata: MNetworkVarNames "int m_iShotsFired"
        // static metadata: MNetworkVarNames "float m_flFlinchStack"
        // static metadata: MNetworkVarNames "float m_flVelocityModifier"
        // static metadata: MNetworkVarNames "float m_flHitHeading"
        // static metadata: MNetworkVarNames "int m_nHitBodyPart"
        // static metadata: MNetworkVarNames "bool m_bWaitForNoAttack"
        // static metadata: MNetworkVarNames "bool m_bKilledByHeadshot"
        // static metadata: MNetworkVarNames "int32 m_ArmorValue"
        // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
        // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
        // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
        // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
        // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
        // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
        // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
        // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
        #pragma pack(push, 1)
        class C_CSPlayerPawn : public source2sdk::client::C_CSPlayerPawnBase
        {
        public:
            uint8_t _pad16b8[0x10]; // 0x16b8
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_BulletServices* m_pBulletServices; // 0x16c8            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_HostageServices* m_pHostageServices; // 0x16d0            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_BuyServices* m_pBuyServices; // 0x16d8            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_GlowServices* m_pGlowServices; // 0x16e0            
            // metadata: MNetworkEnable
            source2sdk::client::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x16e8            
            source2sdk::client::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0x16f0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0x16f8            
            source2sdk::entity2::GameTime_t m_flLastFiredWeaponTime; // 0x16fc            
            // metadata: MNetworkEnable
            bool m_bHasFemaleVoice; // 0x1700            
            uint8_t _pad1701[0x3]; // 0x1701
            float m_flLandingTimeSeconds; // 0x1704            
            float m_flOldFallVelocity; // 0x1708            
            // metadata: MNetworkEnable
            char m_szLastPlaceName[18]; // 0x170c            
            bool m_bPrevDefuser; // 0x171e            
            bool m_bPrevHelmet; // 0x171f            
            std::int32_t m_nPrevArmorVal; // 0x1720            
            std::int32_t m_nPrevGrenadeAmmoCount; // 0x1724            
            std::uint32_t m_unPreviousWeaponHash; // 0x1728            
            std::uint32_t m_unWeaponHash; // 0x172c            
            // metadata: MNetworkEnable
            bool m_bInBuyZone; // 0x1730            
            bool m_bPreviouslyInBuyZone; // 0x1731            
            uint8_t _pad1732[0x2]; // 0x1732
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "32"
            QAngle m_aimPunchAngle; // 0x1734            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "32"
            QAngle m_aimPunchAngleVel; // 0x1740            
            // metadata: MNetworkEnable
            std::int32_t m_aimPunchTickBase; // 0x174c            
            // metadata: MNetworkEnable
            float m_aimPunchTickFraction; // 0x1750            
            uint8_t _pad1754[0x4]; // 0x1754
            // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<QAngle> m_aimPunchCache;
            char m_aimPunchCache[0x18]; // 0x1758            
            uint8_t _pad1770[0x8]; // 0x1770
            bool m_bInLanding; // 0x1778            
            uint8_t _pad1779[0x3]; // 0x1779
            float m_flLandingStartTime; // 0x177c            
            // metadata: MNetworkEnable
            bool m_bInHostageRescueZone; // 0x1780            
            // metadata: MNetworkEnable
            bool m_bInBombZone; // 0x1781            
            // metadata: MNetworkEnable
            bool m_bIsBuyMenuOpen; // 0x1782            
            uint8_t _pad1783[0x1]; // 0x1783
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeOfLastInjury; // 0x1784            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextSprayDecalTime; // 0x1788            
            uint8_t _pad178c[0x154]; // 0x178c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRetakesOfferingChanged"
            std::int32_t m_iRetakesOffering; // 0x18e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRetakesOfferingCardChanged"
            std::int32_t m_iRetakesOfferingCard; // 0x18e4            
            // metadata: MNetworkEnable
            bool m_bRetakesHasDefuseKit; // 0x18e8            
            // metadata: MNetworkEnable
            bool m_bRetakesMVPLastRound; // 0x18e9            
            uint8_t _pad18ea[0x2]; // 0x18ea
            // metadata: MNetworkEnable
            std::int32_t m_iRetakesMVPBoostItem; // 0x18ec            
            // metadata: MNetworkEnable
            source2sdk::client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x18f0            
            uint8_t _pad18f4[0x11]; // 0x18f4
            bool m_bNeedToReApplyGloves; // 0x1905            
            uint8_t _pad1906[0x2]; // 0x1906
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_EconGloves; // 0x1908            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEconGlovesChanged"
            std::uint8_t m_nEconGlovesChanged; // 0x1d80            
            bool m_bMustSyncRagdollState; // 0x1d81            
            uint8_t _pad1d82[0x2]; // 0x1d82
            // metadata: MNetworkEnable
            std::int32_t m_nRagdollDamageBone; // 0x1d84            
            // metadata: MNetworkEnable
            Vector m_vRagdollDamageForce; // 0x1d88            
            // metadata: MNetworkEnable
            Vector m_vRagdollDamagePosition; // 0x1d94            
            // metadata: MNetworkEnable
            char m_szRagdollDamageWeaponName[64]; // 0x1da0            
            // metadata: MNetworkEnable
            bool m_bRagdollDamageHeadshot; // 0x1de0            
            uint8_t _pad1de1[0x3]; // 0x1de1
            // metadata: MNetworkEnable
            Vector m_vRagdollServerOrigin; // 0x1de4            
            uint8_t _pad1df0[0x670]; // 0x1df0
            bool m_bLastHeadBoneTransformIsValid; // 0x2460            
            uint8_t _pad2461[0x3]; // 0x2461
            source2sdk::entity2::GameTime_t m_lastLandTime; // 0x2464            
            bool m_bOnGroundLastTick; // 0x2468            
            uint8_t _pad2469[0x1b]; // 0x2469
            // m_hHudModelArms has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CS2HudModelArms> m_hHudModelArms;
            char m_hHudModelArms[0x4]; // 0x2484            
            // metadata: MNetworkEnable
            QAngle m_qDeathEyeAngles; // 0x2488            
            bool m_bSkipOneHeadConstraintUpdate; // 0x2494            
            // metadata: MNetworkEnable
            bool m_bLeftHanded; // 0x2495            
            uint8_t _pad2496[0x2]; // 0x2496
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fSwitchedHandednessTime; // 0x2498            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,500000"
            float m_flViewmodelOffsetX; // 0x249c            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,000000"
            float m_flViewmodelOffsetY; // 0x24a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,000000"
            float m_flViewmodelOffsetZ; // 0x24a4            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "60,000000"
            // metadata: MNetworkMaxValue "68,000000"
            float m_flViewmodelFOV; // 0x24a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "RecvProxy_PatchEconIndices"
            std::uint32_t m_vecPlayerPatchEconIndices[5]; // 0x24ac            
            uint8_t _pad24c0[0x20]; // 0x24c0
            // metadata: MNetworkEnable
            Color m_GunGameImmunityColor; // 0x24e0            
            uint8_t _pad24e4[0x4c]; // 0x24e4
            // m_vecBulletHitModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_BulletHitModel*> m_vecBulletHitModels;
            char m_vecBulletHitModels[0x18]; // 0x2530            
            // metadata: MNetworkEnable
            bool m_bIsWalking; // 0x2548            
            uint8_t _pad2549[0x7]; // 0x2549
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkChangeCallback "OnThirdPersonHeadingChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_thirdPersonHeading; // 0x2550            
            uint8_t _pad255c[0x84]; // 0x255c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSlopeDropOffsetChanged"
            // metadata: MNetworkPriority "32"
            float m_flSlopeDropOffset; // 0x25e0            
            uint8_t _pad25e4[0x74]; // 0x25e4
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSlopeDropHeightChanged"
            // metadata: MNetworkPriority "32"
            float m_flSlopeDropHeight; // 0x2658            
            uint8_t _pad265c[0x74]; // 0x265c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHeadConstraintChanged"
            // metadata: MNetworkPriority "32"
            Vector m_vHeadConstraintOffset; // 0x26d0            
            uint8_t _pad26dc[0x84]; // 0x26dc
            // metadata: MNetworkEnable
            source2sdk::client::EntitySpottedState_t m_entitySpottedState; // 0x2760            
            // metadata: MNetworkEnable
            bool m_bIsScoped; // 0x2778            
            // metadata: MNetworkEnable
            bool m_bResumeZoom; // 0x2779            
            // metadata: MNetworkEnable
            bool m_bIsDefusing; // 0x277a            
            // metadata: MNetworkEnable
            bool m_bIsGrabbingHostage; // 0x277b            
            // metadata: MNetworkEnable
            source2sdk::client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x277c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEmitSoundTime; // 0x2780            
            // metadata: MNetworkEnable
            bool m_bInNoDefuseArea; // 0x2784            
            uint8_t _pad2785[0x3]; // 0x2785
            // metadata: MNetworkEnable
            std::int32_t m_nWhichBombZone; // 0x2788            
            // metadata: MNetworkEnable
            std::int32_t m_iShotsFired; // 0x278c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flFlinchStack; // 0x2790            
            // metadata: MNetworkEnable
            float m_flVelocityModifier; // 0x2794            
            // metadata: MNetworkEnable
            float m_flHitHeading; // 0x2798            
            // metadata: MNetworkEnable
            std::int32_t m_nHitBodyPart; // 0x279c            
            // metadata: MNetworkEnable
            bool m_bWaitForNoAttack; // 0x27a0            
            uint8_t _pad27a1[0x3]; // 0x27a1
            float m_ignoreLadderJumpTime; // 0x27a4            
            uint8_t _pad27a8[0x1]; // 0x27a8
            // metadata: MNetworkEnable
            bool m_bKilledByHeadshot; // 0x27a9            
            uint8_t _pad27aa[0x2]; // 0x27aa
            // metadata: MNetworkEnable
            std::int32_t m_ArmorValue; // 0x27ac            
            // metadata: MNetworkEnable
            std::uint16_t m_unCurrentEquipmentValue; // 0x27b0            
            // metadata: MNetworkEnable
            std::uint16_t m_unRoundStartEquipmentValue; // 0x27b2            
            // metadata: MNetworkEnable
            std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x27b4            
            uint8_t _pad27b6[0x2]; // 0x27b6
            // metadata: MNetworkEnable
            CEntityIndex m_nLastKillerIndex; // 0x27b8            
            bool m_bOldIsScoped; // 0x27bc            
            bool m_bHasDeathInfo; // 0x27bd            
            uint8_t _pad27be[0x2]; // 0x27be
            float m_flDeathInfoTime; // 0x27c0            
            Vector m_vecDeathInfoOrigin; // 0x27c4            
            uint8_t _pad27d0[0x4]; // 0x27d0
            source2sdk::entity2::GameTime_t m_grenadeParameterStashTime; // 0x27d4            
            bool m_bGrenadeParametersStashed; // 0x27d8            
            uint8_t _pad27d9[0x3]; // 0x27d9
            QAngle m_angStashedShootAngles; // 0x27dc            
            Vector m_vecStashedGrenadeThrowPosition; // 0x27e8            
            Vector m_vecStashedVelocity; // 0x27f4            
            QAngle m_angShootAngleHistory[2]; // 0x2800            
            Vector m_vecThrowPositionHistory[2]; // 0x2818            
            Vector m_vecVelocityHistory[2]; // 0x2830            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkChangeCallback "OnPredictedDamageTagsChanged"
            // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::PredictedDamageTag_t> m_PredictedDamageTags;
            char m_PredictedDamageTags[0x68]; // 0x2848            
            source2sdk::entity2::GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x28b0            
            std::int32_t m_nHighestAppliedDamageTagTick; // 0x28b4            
            uint8_t _pad28b8[0x1534]; // 0x28b8
            bool m_bShouldAutobuyDMWeapons; // 0x3dec            
            uint8_t _pad3ded[0x3]; // 0x3ded
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x3df0            
            // metadata: MNetworkEnable
            bool m_bGunGameImmunity; // 0x3df4            
            uint8_t _pad3df5[0x3]; // 0x3df5
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x3df8            
            // metadata: MNetworkEnable
            float m_fMolotovDamageTime; // 0x3dfc            
            uint8_t _pad3e00[0x4]; // 0x3e00
            Vector m_vecLastAliveLocalVelocity; // 0x3e04            
            float m_fRenderingClipPlane[4]; // 0x3e10            
            std::int32_t m_nLastClipPlaneSetupFrame; // 0x3e20            
            Vector m_vecLastClipCameraPos; // 0x3e24            
            Vector m_vecLastClipCameraForward; // 0x3e30            
            bool m_bClipHitStaticWorld; // 0x3e3c            
            bool m_bCachedPlaneIsValid; // 0x3e3d            
            uint8_t _pad3e3e[0x2]; // 0x3e3e
            source2sdk::client::C_CSWeaponBase* m_pClippingWeapon; // 0x3e40            
            source2sdk::client::ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x3e48            
            uint8_t _pad3e4c[0x4]; // 0x3e4c
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x3e50            
            uint8_t _pad3e5c[0x84];
            
            // Datamap fields:
            // CCSPlayer_ItemServices m_pItemServices; // 0x1408
            // CCSPlayer_UseServices m_pUseServices; // 0x1428
            // CCSPlayer_WaterServices m_pWaterServices; // 0x1420
            // CCSPlayer_MovementServices m_pMovementServices; // 0x1440
            // CCSPlayer_WeaponServices m_pWeaponServices; // 0x1400
            // CCSPlayer_CameraServices m_pCameraServices; // 0x1438
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSPlayerPawn) == 0x3ee0);
    };
};
