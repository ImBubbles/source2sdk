#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSPlayerPawnBase.hpp"
#include "source2sdk/server/CEconItemView.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
#include "source2sdk/server/PredictedDamageTag_t.hpp"
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
        struct CCSBot;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_ActionTrackingServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_BulletServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_BuyServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_DamageReactServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_HostageServices;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayer_RadioServices;
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
        // Size: 0x1c90
        // Has VTable
        // 
        // static metadata: MNetworkOutOfPVSUpdates
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
        // static metadata: MNetworkIncludeByName "m_pWeaponServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
        // static metadata: MNetworkIncludeByName "m_pItemServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
        // static metadata: MNetworkIncludeByName "m_pUseServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
        // static metadata: MNetworkIncludeByName "m_pWaterServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
        // static metadata: MNetworkIncludeByName "m_pMovementServices"
        // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
        // static metadata: MNetworkIncludeByName "m_pCameraServices"
        // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
        // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
        // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
        // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
        // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
        // static metadata: MNetworkVarNames "char m_szLastPlaceName"
        // static metadata: MNetworkVarNames "bool m_bInBuyZone"
        // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
        // static metadata: MNetworkVarNames "bool m_bInBombZone"
        // static metadata: MNetworkVarNames "int m_iRetakesOffering"
        // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
        // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
        // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
        // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
        // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
        // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
        // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
        // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
        // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
        // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
        // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
        // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
        // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
        // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
        // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
        // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
        // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
        // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
        // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
        // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
        // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
        // static metadata: MNetworkVarNames "bool m_bLeftHanded"
        // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
        // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
        // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
        // static metadata: MNetworkVarNames "bool m_bIsWalking"
        // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
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
        // static metadata: MNetworkVarNames "QAngle m_thirdPersonHeading"
        // static metadata: MNetworkVarNames "float m_flSlopeDropOffset"
        // static metadata: MNetworkVarNames "float m_flSlopeDropHeight"
        // static metadata: MNetworkVarNames "Vector m_vHeadConstraintOffset"
        // static metadata: MNetworkVarNames "int32 m_ArmorValue"
        // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
        // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
        // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
        // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
        // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
        // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
        // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
        // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
        // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
        // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
        #pragma pack(push, 1)
        class CCSPlayerPawn : public source2sdk::server::CCSPlayerPawnBase
        {
        public:
            uint8_t _pad0ec0[0x8]; // 0xec0
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_BulletServices* m_pBulletServices; // 0xec8            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_HostageServices* m_pHostageServices; // 0xed0            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_BuyServices* m_pBuyServices; // 0xed8            
            // metadata: MNetworkEnable
            source2sdk::server::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xee0            
            source2sdk::server::CCSPlayer_RadioServices* m_pRadioServices; // 0xee8            
            source2sdk::server::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xef0            
            std::uint16_t m_nCharacterDefIndex; // 0xef8            
            // metadata: MNetworkEnable
            bool m_bHasFemaleVoice; // 0xefa            
            uint8_t _pad0efb[0x5]; // 0xefb
            CUtlString m_strVOPrefix; // 0xf00            
            // metadata: MNetworkEnable
            char m_szLastPlaceName[18]; // 0xf08            
            uint8_t _pad0f1a[0xae]; // 0xf1a
            bool m_bInHostageResetZone; // 0xfc8            
            // metadata: MNetworkEnable
            bool m_bInBuyZone; // 0xfc9            
            uint8_t _pad0fca[0x6]; // 0xfca
            // m_TouchingBuyZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_TouchingBuyZones;
            char m_TouchingBuyZones[0x18]; // 0xfd0            
            bool m_bWasInBuyZone; // 0xfe8            
            // metadata: MNetworkEnable
            bool m_bInHostageRescueZone; // 0xfe9            
            // metadata: MNetworkEnable
            bool m_bInBombZone; // 0xfea            
            bool m_bWasInHostageRescueZone; // 0xfeb            
            // metadata: MNetworkEnable
            std::int32_t m_iRetakesOffering; // 0xfec            
            // metadata: MNetworkEnable
            std::int32_t m_iRetakesOfferingCard; // 0xff0            
            // metadata: MNetworkEnable
            bool m_bRetakesHasDefuseKit; // 0xff4            
            // metadata: MNetworkEnable
            bool m_bRetakesMVPLastRound; // 0xff5            
            uint8_t _pad0ff6[0x2]; // 0xff6
            // metadata: MNetworkEnable
            std::int32_t m_iRetakesMVPBoostItem; // 0xff8            
            // metadata: MNetworkEnable
            source2sdk::client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xffc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flHealthShotBoostExpirationTime; // 0x1000            
            float m_flLandingTimeSeconds; // 0x1004            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "32"
            QAngle m_aimPunchAngle; // 0x1008            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "32"
            QAngle m_aimPunchAngleVel; // 0x1014            
            // metadata: MNetworkEnable
            std::int32_t m_aimPunchTickBase; // 0x1020            
            // metadata: MNetworkEnable
            float m_aimPunchTickFraction; // 0x1024            
            // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<QAngle> m_aimPunchCache;
            char m_aimPunchCache[0x18]; // 0x1028            
            // metadata: MNetworkEnable
            bool m_bIsBuyMenuOpen; // 0x1040            
            uint8_t _pad1041[0x6af]; // 0x1041
            CTransform m_xLastHeadBoneTransform; // 0x16f0            
            bool m_bLastHeadBoneTransformIsValid; // 0x1710            
            uint8_t _pad1711[0x3]; // 0x1711
            source2sdk::entity2::GameTime_t m_lastLandTime; // 0x1714            
            bool m_bOnGroundLastTick; // 0x1718            
            uint8_t _pad1719[0x3]; // 0x1719
            std::int32_t m_iPlayerLocked; // 0x171c            
            uint8_t _pad1720[0x4]; // 0x1720
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTimeOfLastInjury; // 0x1724            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextSprayDecalTime; // 0x1728            
            bool m_bNextSprayDecalTimeExpedited; // 0x172c            
            uint8_t _pad172d[0x3]; // 0x172d
            // metadata: MNetworkEnable
            std::int32_t m_nRagdollDamageBone; // 0x1730            
            // metadata: MNetworkEnable
            Vector m_vRagdollDamageForce; // 0x1734            
            // metadata: MNetworkEnable
            Vector m_vRagdollDamagePosition; // 0x1740            
            // metadata: MNetworkEnable
            char m_szRagdollDamageWeaponName[64]; // 0x174c            
            // metadata: MNetworkEnable
            bool m_bRagdollDamageHeadshot; // 0x178c            
            uint8_t _pad178d[0x3]; // 0x178d
            // metadata: MNetworkEnable
            Vector m_vRagdollServerOrigin; // 0x1790            
            uint8_t _pad179c[0x4]; // 0x179c
            // metadata: MNetworkEnable
            source2sdk::server::CEconItemView m_EconGloves; // 0x17a0            
            // metadata: MNetworkEnable
            std::uint8_t m_nEconGlovesChanged; // 0x1a48            
            uint8_t _pad1a49[0x3]; // 0x1a49
            // metadata: MNetworkEnable
            QAngle m_qDeathEyeAngles; // 0x1a4c            
            bool m_bSkipOneHeadConstraintUpdate; // 0x1a58            
            // metadata: MNetworkEnable
            bool m_bLeftHanded; // 0x1a59            
            uint8_t _pad1a5a[0x2]; // 0x1a5a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fSwitchedHandednessTime; // 0x1a5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,500000"
            float m_flViewmodelOffsetX; // 0x1a60            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,000000"
            float m_flViewmodelOffsetY; // 0x1a64            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-2,000000"
            // metadata: MNetworkMaxValue "2,000000"
            float m_flViewmodelOffsetZ; // 0x1a68            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "60,000000"
            // metadata: MNetworkMaxValue "68,000000"
            float m_flViewmodelFOV; // 0x1a6c            
            // metadata: MNetworkEnable
            bool m_bIsWalking; // 0x1a70            
            uint8_t _pad1a71[0x3]; // 0x1a71
            float m_fLastGivenDefuserTime; // 0x1a74            
            float m_fLastGivenBombTime; // 0x1a78            
            float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x1a7c            
            std::uint32_t m_iDisplayHistoryBits; // 0x1a80            
            float m_flLastAttackedTeammate; // 0x1a84            
            source2sdk::entity2::GameTime_t m_allowAutoFollowTime; // 0x1a88            
            bool m_bResetArmorNextSpawn; // 0x1a8c            
            uint8_t _pad1a8d[0x3]; // 0x1a8d
            // metadata: MNetworkEnable
            CEntityIndex m_nLastKillerIndex; // 0x1a90            
            uint8_t _pad1a94[0x4]; // 0x1a94
            // metadata: MNetworkEnable
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0x1a98            
            std::int32_t m_nSpotRules; // 0x1ab0            
            // metadata: MNetworkEnable
            bool m_bIsScoped; // 0x1ab4            
            // metadata: MNetworkEnable
            bool m_bResumeZoom; // 0x1ab5            
            // metadata: MNetworkEnable
            bool m_bIsDefusing; // 0x1ab6            
            // metadata: MNetworkEnable
            bool m_bIsGrabbingHostage; // 0x1ab7            
            // metadata: MNetworkEnable
            source2sdk::client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1ab8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flEmitSoundTime; // 0x1abc            
            // metadata: MNetworkEnable
            bool m_bInNoDefuseArea; // 0x1ac0            
            uint8_t _pad1ac1[0x3]; // 0x1ac1
            CEntityIndex m_iBombSiteIndex; // 0x1ac4            
            // metadata: MNetworkEnable
            std::int32_t m_nWhichBombZone; // 0x1ac8            
            bool m_bInBombZoneTrigger; // 0x1acc            
            bool m_bWasInBombZoneTrigger; // 0x1acd            
            uint8_t _pad1ace[0x2]; // 0x1ace
            // metadata: MNetworkEnable
            std::int32_t m_iShotsFired; // 0x1ad0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            float m_flFlinchStack; // 0x1ad4            
            // metadata: MNetworkEnable
            float m_flVelocityModifier; // 0x1ad8            
            // metadata: MNetworkEnable
            float m_flHitHeading; // 0x1adc            
            // metadata: MNetworkEnable
            std::int32_t m_nHitBodyPart; // 0x1ae0            
            Vector m_vecTotalBulletForce; // 0x1ae4            
            // metadata: MNetworkEnable
            bool m_bWaitForNoAttack; // 0x1af0            
            uint8_t _pad1af1[0x3]; // 0x1af1
            float m_ignoreLadderJumpTime; // 0x1af4            
            // metadata: MNetworkEnable
            bool m_bKilledByHeadshot; // 0x1af8            
            uint8_t _pad1af9[0x3]; // 0x1af9
            std::int32_t m_LastHitBox; // 0x1afc            
            std::int32_t m_LastHealth; // 0x1b00            
            uint8_t _pad1b04[0x4]; // 0x1b04
            source2sdk::server::CCSBot* m_pBot; // 0x1b08            
            bool m_bBotAllowActive; // 0x1b10            
            uint8_t _pad1b11[0x3]; // 0x1b11
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkPriority "32"
            QAngle m_thirdPersonHeading; // 0x1b14            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_flSlopeDropOffset; // 0x1b20            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_flSlopeDropHeight; // 0x1b24            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            Vector m_vHeadConstraintOffset; // 0x1b28            
            std::int32_t m_nLastPickupPriority; // 0x1b34            
            float m_flLastPickupPriorityTime; // 0x1b38            
            // metadata: MNetworkEnable
            std::int32_t m_ArmorValue; // 0x1b3c            
            // metadata: MNetworkEnable
            std::uint16_t m_unCurrentEquipmentValue; // 0x1b40            
            // metadata: MNetworkEnable
            std::uint16_t m_unRoundStartEquipmentValue; // 0x1b42            
            // metadata: MNetworkEnable
            std::uint16_t m_unFreezetimeEndEquipmentValue; // 0x1b44            
            uint8_t _pad1b46[0x2]; // 0x1b46
            std::int32_t m_iLastWeaponFireUsercmd; // 0x1b48            
            bool m_bIsSpawning; // 0x1b4c            
            uint8_t _pad1b4d[0xb]; // 0x1b4d
            std::int32_t m_iDeathFlags; // 0x1b58            
            bool m_bHasDeathInfo; // 0x1b5c            
            uint8_t _pad1b5d[0x3]; // 0x1b5d
            float m_flDeathInfoTime; // 0x1b60            
            Vector m_vecDeathInfoOrigin; // 0x1b64            
            // metadata: MNetworkEnable
            std::uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1b70            
            // metadata: MNetworkEnable
            Color m_GunGameImmunityColor; // 0x1b84            
            source2sdk::entity2::GameTime_t m_grenadeParameterStashTime; // 0x1b88            
            bool m_bGrenadeParametersStashed; // 0x1b8c            
            uint8_t _pad1b8d[0x3]; // 0x1b8d
            QAngle m_angStashedShootAngles; // 0x1b90            
            Vector m_vecStashedGrenadeThrowPosition; // 0x1b9c            
            Vector m_vecStashedVelocity; // 0x1ba8            
            QAngle m_angShootAngleHistory[2]; // 0x1bb4            
            Vector m_vecThrowPositionHistory[2]; // 0x1bcc            
            Vector m_vecVelocityHistory[2]; // 0x1be4            
            uint8_t _pad1bfc[0x4]; // 0x1bfc
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::PredictedDamageTag_t> m_PredictedDamageTags;
            char m_PredictedDamageTags[0x68]; // 0x1c00            
            std::int32_t m_nHighestAppliedDamageTagTick; // 0x1c68            
            bool m_bCommittingSuicideOnTeamChange; // 0x1c6c            
            bool m_wasNotKilledNaturally; // 0x1c6d            
            uint8_t _pad1c6e[0x2]; // 0x1c6e
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fImmuneToGunGameDamageTime; // 0x1c70            
            // metadata: MNetworkEnable
            bool m_bGunGameImmunity; // 0x1c74            
            uint8_t _pad1c75[0x3]; // 0x1c75
            // metadata: MNetworkEnable
            float m_fMolotovDamageTime; // 0x1c78            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkPriority "32"
            QAngle m_angEyeAngles; // 0x1c7c            
            uint8_t _pad1c88[0x8];
            
            // Datamap fields:
            // CCSPlayer_WeaponServices m_pWeaponServices; // 0xbd0
            // CCSPlayer_ItemServices m_pItemServices; // 0xbd8
            // CCSPlayer_UseServices m_pUseServices; // 0xbf8
            // CCSPlayer_WaterServices m_pWaterServices; // 0xbf0
            // CCSPlayer_MovementServices m_pMovementServices; // 0xc10
            // CCSPlayer_CameraServices m_pCameraServices; // 0xc08
            // void CCSPlayerPawnCheckStuffThink; // 0x0
            // void CCSPlayerPawnPushawayThink; // 0x0
            // void RescueZoneTouch; // 0x0
            // bool bot; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayerPawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayerPawn) == 0x1c90);
    };
};
