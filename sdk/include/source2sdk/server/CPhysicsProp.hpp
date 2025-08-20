#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp_CrateType_t.hpp"

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
        // Size: 0xdf0
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bAwake"
        #pragma pack(push, 1)
        class CPhysicsProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0c40[0x8]; // 0xc40
            source2sdk::entity2::CEntityIOOutput m_MotionEnabled; // 0xc48            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0xc70            
            source2sdk::entity2::CEntityIOOutput m_OnAwake; // 0xc98            
            source2sdk::entity2::CEntityIOOutput m_OnAsleep; // 0xcc0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0xce8            
            source2sdk::entity2::CEntityIOOutput m_OnOutOfWorld; // 0xd10            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd38            
            bool m_bForceNavIgnore; // 0xd60            
            bool m_bNoNavmeshBlocker; // 0xd61            
            bool m_bForceNpcExclude; // 0xd62            
            uint8_t _pad0d63[0x1]; // 0xd63
            float m_massScale; // 0xd64            
            float m_buoyancyScale; // 0xd68            
            std::int32_t m_damageType; // 0xd6c            
            std::int32_t m_damageToEnableMotion; // 0xd70            
            float m_flForceToEnableMotion; // 0xd74            
            bool m_bThrownByPlayer; // 0xd78            
            bool m_bDroppedByPlayer; // 0xd79            
            bool m_bTouchedByPlayer; // 0xd7a            
            bool m_bFirstCollisionAfterLaunch; // 0xd7b            
            bool m_bHasBeenAwakened; // 0xd7c            
            bool m_bIsOverrideProp; // 0xd7d            
            uint8_t _pad0d7e[0x2]; // 0xd7e
            source2sdk::entity2::GameTime_t m_flLastBurn; // 0xd80            
            source2sdk::physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xd84            
            uint8_t _pad0d85[0x3]; // 0xd85
            source2sdk::entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd88            
            std::int32_t m_iInitialGlowState; // 0xd8c            
            std::int32_t m_nGlowRange; // 0xd90            
            std::int32_t m_nGlowRangeMin; // 0xd94            
            Color m_glowColor; // 0xd98            
            bool m_bShouldAutoConvertBackFromDebris; // 0xd9c            
            bool m_bMuteImpactEffects; // 0xd9d            
            uint8_t _pad0d9e[0x9]; // 0xd9e
            bool m_bAcceptDamageFromHeldObjects; // 0xda7            
            bool m_bEnableUseOutput; // 0xda8            
            uint8_t _pad0da9[0x3]; // 0xda9
            source2sdk::server::CPhysicsProp_CrateType_t m_CrateType; // 0xdac            
            CUtlSymbolLarge m_strItemClass[4]; // 0xdb0            
            std::int32_t m_nItemCount[4]; // 0xdd0            
            bool m_bRemovableForAmmoBalancing; // 0xde0            
            // metadata: MNetworkEnable
            bool m_bAwake; // 0xde1            
            bool m_bAttachedToReferenceFrame; // 0xde2            
            uint8_t _pad0de3[0xd];
            
            // Datamap fields:
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputWake; // 0x0
            // bool InputSetAutoConvertBackFromDebris; // 0x0
            // void InputSleep; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // float InputSetMass; // 0x0
            // void InputEnableGravity; // 0x0
            // void InputDisableGravity; // 0x0
            // void InputEnableDrag; // 0x0
            // void InputDisableDrag; // 0x0
            // void InputEnableCollisions; // 0x0
            // void InputDisableCollisions; // 0x0
            // bool forcemotiondisabled; // 0x7fffffff
            // bool phys_start_asleep; // 0x7fffffff
            // void CPhysicsPropClearFlagsThink; // 0x0
            // int32_t m_nNavObstacleType; // 0xda0
            // bool m_bUpdateNavWhenMoving; // 0xda4
            // bool m_bForceNavObstacleCut; // 0xda5
            // bool m_bAllowObstacleConvexHullMerging; // 0xda6
            // int32_t health; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsProp) == 0xdf0);
    };
};
