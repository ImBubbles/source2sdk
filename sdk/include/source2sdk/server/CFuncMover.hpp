#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover_FollowEntityDirection_t.hpp"
#include "source2sdk/server/CFuncMover_Move_t.hpp"
#include "source2sdk/server/CFuncMover_OrientationUpdate_t.hpp"
#include "source2sdk/server/CFuncMover_TransitionToPathNodeAction_t.hpp"
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
        struct CMoverPathNode;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Size: 0xa98
        // Has VTable
        #pragma pack(push, 1)
        class CFuncMover : public source2sdk::server::CBaseModelEntity
        {
        public:
            CUtlSymbolLarge m_iszPathName; // 0x7e8            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x4]; // 0x7f0            
            uint8_t _pad07f4[0x4]; // 0x7f4
            CUtlSymbolLarge m_iszPathNodeStart; // 0x7f8            
            CUtlSymbolLarge m_iszPathNodeEnd; // 0x800            
            source2sdk::server::CFuncMover_Move_t m_eMoveType; // 0x808            
            bool m_bIsReversing; // 0x80c            
            uint8_t _pad080d[0x3]; // 0x80d
            Vector m_vTarget; // 0x810            
            float m_flStartSpeed; // 0x81c            
            float m_flPathLocation; // 0x820            
            float m_flT; // 0x824            
            std::int32_t m_nCurrentNodeIndex; // 0x828            
            std::int32_t m_nPreviousNodeIndex; // 0x82c            
            source2sdk::client::SolidType_t m_eSolidType; // 0x830            
            bool m_bIsMoving; // 0x831            
            uint8_t _pad0832[0x2]; // 0x832
            float m_flTimeToReachMaxSpeed; // 0x834            
            float m_flDistanceToReachMaxSpeed; // 0x838            
            float m_flTimeToReachZeroSpeed; // 0x83c            
            float m_flDistanceToReachZeroSpeed; // 0x840            
            source2sdk::entity2::GameTime_t m_flTimeMovementStart; // 0x844            
            source2sdk::entity2::GameTime_t m_flTimeMovementStop; // 0x848            
            // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CMoverPathNode> m_hStopAtNode;
            char m_hStopAtNode[0x4]; // 0x84c            
            float m_flPathLocationToBeginStop; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            CUtlSymbolLarge m_iszStartForwardSound; // 0x858            
            CUtlSymbolLarge m_iszLoopForwardSound; // 0x860            
            CUtlSymbolLarge m_iszStopForwardSound; // 0x868            
            CUtlSymbolLarge m_iszStartReverseSound; // 0x870            
            CUtlSymbolLarge m_iszLoopReverseSound; // 0x878            
            CUtlSymbolLarge m_iszStopReverseSound; // 0x880            
            CUtlSymbolLarge m_iszArriveAtDestinationSound; // 0x888            
            uint8_t _pad0890[0x18]; // 0x890
            source2sdk::entity2::CEntityIOOutput m_OnMovementEnd; // 0x8a8            
            bool m_bStartAtClosestPoint; // 0x8d0            
            bool m_bStartAtEnd; // 0x8d1            
            uint8_t _pad08d2[0x2]; // 0x8d2
            source2sdk::server::CFuncMover_OrientationUpdate_t m_eOrientationUpdate; // 0x8d4            
            source2sdk::entity2::GameTime_t m_flTimeStartOrientationChange; // 0x8d8            
            float m_flTimeToBlendToNewOrientation; // 0x8dc            
            float m_flDurationBlendToNewOrientationRan; // 0x8e0            
            std::int32_t m_nOriginalOrientationIndex; // 0x8e4            
            bool m_bCreateMovableNavMesh; // 0x8e8            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x8e9            
            uint8_t _pad08ea[0x6]; // 0x8ea
            source2sdk::entity2::CEntityIOOutput m_OnNodePassed; // 0x8f0            
            CUtlSymbolLarge m_iszOrientationMatchEntityName; // 0x918            
            // m_hOrientationMatchEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationMatchEntity;
            char m_hOrientationMatchEntity[0x4]; // 0x920            
            float m_flTimeToTraverseToNextNode; // 0x924            
            Vector m_vLerpToNewPosStartInPathEntitySpace; // 0x928            
            Vector m_vLerpToNewPosEndInPathEntitySpace; // 0x934            
            float m_flLerpToPositionT; // 0x940            
            float m_flLerpToPositionDeltaT; // 0x944            
            source2sdk::entity2::CEntityIOOutput m_OnLerpToPositionComplete; // 0x948            
            bool m_bIsPaused; // 0x970            
            uint8_t _pad0971[0x3]; // 0x971
            source2sdk::server::CFuncMover_TransitionToPathNodeAction_t m_eTransitionedToPathNodeAction; // 0x974            
            std::int32_t m_nDelayedTeleportToNode; // 0x978            
            bool m_bIsVerboseLogging; // 0x97c            
            uint8_t _pad097d[0x3]; // 0x97d
            // m_hFollowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEntity;
            char m_hFollowEntity[0x4]; // 0x980            
            float m_flFollowDistance; // 0x984            
            float m_flFollowMinimumSpeed; // 0x988            
            float m_flCurFollowEntityT; // 0x98c            
            float m_flCurFollowSpeed; // 0x990            
            uint8_t _pad0994[0x4]; // 0x994
            CUtlSymbolLarge m_strOrientationFaceEntityName; // 0x998            
            // m_hOrientationFaceEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOrientationFaceEntity;
            char m_hOrientationFaceEntity[0x4]; // 0x9a0            
            uint8_t _pad09a4[0x4]; // 0x9a4
            source2sdk::entity2::CEntityIOOutput m_OnStart; // 0x9a8            
            source2sdk::entity2::CEntityIOOutput m_OnStartForward; // 0x9d0            
            source2sdk::entity2::CEntityIOOutput m_OnStartReverse; // 0x9f8            
            source2sdk::entity2::CEntityIOOutput m_OnStop; // 0xa20            
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0xa48            
            bool m_bNextNodeReturnsCurrent; // 0xa70            
            bool m_bStartedMoving; // 0xa71            
            uint8_t _pad0a72[0x1e]; // 0xa72
            source2sdk::server::CFuncMover_FollowEntityDirection_t m_eFollowEntityDirection; // 0xa90            
            uint8_t _pad0a94[0x4];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputToggleDirection; // 0x0
            // void InputPause; // 0x0
            // void InputUnpause; // 0x0
            // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
            // CUtlSymbolLarge InputMoveToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartForward; // 0x0
            // CUtlSymbolLarge InputTransitionToPathNodeStartReverse; // 0x0
            // float InputSetSpeed; // 0x0
            // float InputSetSpeedImmediate; // 0x0
            // float InputSetTimeToReachMaxSpeed; // 0x0
            // float InputSetTimeToBlendToNewOrientation; // 0x0
            // int32_t InputSetOrientationMode; // 0x0
            // CUtlSymbolLarge InputSetFollowEntity; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityForward; // 0x0
            // CUtlSymbolLarge InputSetFollowEntityReverse; // 0x0
            // CUtlSymbolLarge InputSetFaceEntity; // 0x0
            // float InputSetFollowDistance; // 0x0
            // float InputSetFollowMinimumSpeed; // 0x0
            // float InputSetTimeToTraverseToNextNode; // 0x0
            // void CFuncMoverMoveThink; // 0x0
            // void CFuncMoverLerpToNewPosition; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMover) == 0xa98);
    };
};
