#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ForcedCrouchState_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/modellib/ScriptedMoveTo_t.hpp"
#include "source2sdk/modellib/SharedMovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimGraph;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x810
        // Has VTable
        #pragma pack(push, 1)
        class CScriptedSequence : public source2sdk::server::CBaseEntity
        {
        public:
            CUtlSymbolLarge m_iszEntry; // 0x4f0            
            CUtlSymbolLarge m_iszPreIdle; // 0x4f8            
            CUtlSymbolLarge m_iszPlay; // 0x500            
            CUtlSymbolLarge m_iszPostIdle; // 0x508            
            CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x510            
            CUtlSymbolLarge m_iszNextScript; // 0x518            
            CUtlSymbolLarge m_iszEntity; // 0x520            
            CUtlSymbolLarge m_iszSyncGroup; // 0x528            
            source2sdk::modellib::ScriptedMoveTo_t m_nMoveTo; // 0x530            
            source2sdk::modellib::SharedMovementGait_t m_nMoveToGait; // 0x534            
            uint8_t _pad0535[0x3]; // 0x535
            source2sdk::modellib::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x538            
            source2sdk::client::ForcedCrouchState_t m_nForcedCrouchState; // 0x53c            
            bool m_bIsPlayingPreIdle; // 0x540            
            bool m_bIsPlayingEntry; // 0x541            
            bool m_bIsPlayingAction; // 0x542            
            bool m_bIsPlayingPostIdle; // 0x543            
            bool m_bDontRotateOther; // 0x544            
            bool m_bIsRepeatable; // 0x545            
            bool m_bShouldLeaveCorpse; // 0x546            
            bool m_bStartOnSpawn; // 0x547            
            bool m_bDisallowInterrupts; // 0x548            
            bool m_bCanOverrideNPCState; // 0x549            
            bool m_bDontTeleportAtEnd; // 0x54a            
            bool m_bHighPriority; // 0x54b            
            bool m_bHideDebugComplaints; // 0x54c            
            bool m_bContinueOnDeath; // 0x54d            
            bool m_bLoopPreIdleSequence; // 0x54e            
            bool m_bLoopActionSequence; // 0x54f            
            bool m_bLoopPostIdleSequence; // 0x550            
            bool m_bSynchPostIdles; // 0x551            
            bool m_bIgnoreLookAt; // 0x552            
            bool m_bIgnoreGravity; // 0x553            
            bool m_bDisableNPCCollisions; // 0x554            
            bool m_bKeepAnimgraphLockedPost; // 0x555            
            bool m_bDontAddModifiers; // 0x556            
            bool m_bDisableAimingWhileMoving; // 0x557            
            bool m_bIgnoreRotation; // 0x558            
            uint8_t _pad0559[0x3]; // 0x559
            float m_flRadius; // 0x55c            
            float m_flRepeat; // 0x560            
            float m_flPlayAnimFadeInTime; // 0x564            
            float m_flMoveInterpTime; // 0x568            
            float m_flAngRate; // 0x56c            
            float m_flMoveSpeed; // 0x570            
            bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x574            
            uint8_t _pad0575[0x3]; // 0x575
            std::int32_t m_nNotReadySequenceCount; // 0x578            
            source2sdk::entity2::GameTime_t m_startTime; // 0x57c            
            bool m_bWaitForBeginSequence; // 0x580            
            uint8_t _pad0581[0x3]; // 0x581
            std::int32_t m_saved_effects; // 0x584            
            std::int32_t m_savedFlags; // 0x588            
            std::int32_t m_savedCollisionGroup; // 0x58c            
            bool m_bInterruptable; // 0x590            
            bool m_sequenceStarted; // 0x591            
            bool m_bPositionRelativeToOtherEntity; // 0x592            
            uint8_t _pad0593[0x1]; // 0x593
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x594            
            // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CScriptedSequence> m_hNextCine;
            char m_hNextCine[0x4]; // 0x598            
            bool m_bThinking; // 0x59c            
            bool m_bInitiatedSelfDelete; // 0x59d            
            bool m_bIsTeleportingDueToMoveTo; // 0x59e            
            bool m_bAllowCustomInterruptConditions; // 0x59f            
            // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimGraph> m_hForcedTarget;
            char m_hForcedTarget[0x4]; // 0x5a0            
            bool m_bDontCancelOtherSequences; // 0x5a4            
            bool m_bForceSynch; // 0x5a5            
            bool m_bPreventUpdateYawOnFinish; // 0x5a6            
            bool m_bEnsureOnNavmeshOnFinish; // 0x5a7            
            source2sdk::client::ScriptedOnDeath_t m_onDeathBehavior; // 0x5a8            
            source2sdk::server::ScriptedConflictResponse_t m_ConflictResponse; // 0x5ac            
            source2sdk::entity2::CEntityIOOutput m_OnBeginSequence; // 0x5b0            
            source2sdk::entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x5d8            
            source2sdk::entity2::CEntityIOOutput m_OnEndSequence; // 0x600            
            source2sdk::entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x628            
            source2sdk::entity2::CEntityIOOutput m_OnCancelSequence; // 0x650            
            source2sdk::entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x678            
            source2sdk::entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x6a0            
            CTransform m_matOtherToMain; // 0x7e0            
            // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hInteractionMainEntity;
            char m_hInteractionMainEntity[0x4]; // 0x800            
            std::int32_t m_iPlayerDeathBehavior; // 0x804            
            bool m_bSkipFadeIn; // 0x808            
            uint8_t _pad0809[0x7];
            
            // Datamap fields:
            // void CScriptedSequenceScriptThink; // 0x0
            // void InputMoveToPosition; // 0x0
            // void InputBeginSequence; // 0x0
            // void InputCancelSequence; // 0x0
            // CUtlSymbolLarge InputSetActionSequence; // 0x0
            // CUtlSymbolLarge InputForceTarget; // 0x0
            // void InputScriptPlayerDeath; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CScriptedSequence) == 0x810);
    };
};
