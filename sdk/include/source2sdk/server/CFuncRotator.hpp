#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncRotator_Rotate_t.hpp"
#include "source2sdk/server/RotatorHistoryEntry_t.hpp"
#include "source2sdk/server/RotatorQueueEntry_t.hpp"
#include "source2sdk/server/RotatorTargetSpace_t.hpp"
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
        // Size: 0xa20
        // Has VTable
        #pragma pack(push, 1)
        class CFuncRotator : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hRotatorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRotatorTarget;
            char m_hRotatorTarget[0x4]; // 0x7e8            
            bool m_bIsRotating; // 0x7ec            
            bool m_bIsReversing; // 0x7ed            
            uint8_t _pad07ee[0x2]; // 0x7ee
            float m_flTimeToReachMaxSpeed; // 0x7f0            
            float m_flTimeToReachZeroSpeed; // 0x7f4            
            float m_flDistanceAlongArcTraveled; // 0x7f8            
            float m_flTimeToWaitOscillate; // 0x7fc            
            source2sdk::entity2::GameTime_t m_flTimeRotationStart; // 0x800            
            uint8_t _pad0804[0xc]; // 0x804
            Quaternion m_qLSPrevChange; // 0x810            
            Quaternion m_qWSPrev; // 0x820            
            Quaternion m_qWSInit; // 0x830            
            Quaternion m_qLSInit; // 0x840            
            Quaternion m_qLSOrientation; // 0x850            
            source2sdk::entity2::CEntityIOOutput m_OnRotationStarted; // 0x860            
            source2sdk::entity2::CEntityIOOutput m_OnRotationCompleted; // 0x888            
            source2sdk::entity2::CEntityIOOutput m_OnOscillate; // 0x8b0            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartArrive; // 0x8d8            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateStartDepart; // 0x900            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndArrive; // 0x928            
            source2sdk::entity2::CEntityIOOutput m_OnOscillateEndDepart; // 0x950            
            bool m_bOscillateDepart; // 0x978            
            uint8_t _pad0979[0x3]; // 0x979
            std::int32_t m_nOscillateCount; // 0x97c            
            source2sdk::server::CFuncRotator_Rotate_t m_eRotateType; // 0x980            
            source2sdk::server::CFuncRotator_Rotate_t m_ePrevRotateType; // 0x984            
            bool m_bHasTargetOverride; // 0x988            
            uint8_t _pad0989[0x7]; // 0x989
            Quaternion m_qOrientationOverride; // 0x990            
            source2sdk::server::RotatorTargetSpace_t m_eSpaceOverride; // 0x9a0            
            QAngle m_qAngularVelocity; // 0x9a4            
            Vector m_vLookAtForcedUp; // 0x9b0            
            uint8_t _pad09bc[0x4]; // 0x9bc
            CUtlSymbolLarge m_strRotatorTarget; // 0x9c0            
            bool m_bRecordHistory; // 0x9c8            
            uint8_t _pad09c9[0x7]; // 0x9c9
            // m_vecRotatorHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorHistory;
            char m_vecRotatorHistory[0x18]; // 0x9d0            
            bool m_bReturningToPreviousOrientation; // 0x9e8            
            uint8_t _pad09e9[0x7]; // 0x9e9
            // m_vecRotatorQueue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorQueueEntry_t> m_vecRotatorQueue;
            char m_vecRotatorQueue[0x18]; // 0x9f0            
            // m_vecRotatorQueueHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RotatorHistoryEntry_t> m_vecRotatorQueueHistory;
            char m_vecRotatorQueueHistory[0x18]; // 0xa08            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartReverse; // 0x0
            // void InputReturnToPreviousOrientation; // 0x0
            // void InputReturnToInitialOrientation; // 0x0
            // float InputPitch; // 0x0
            // float InputYaw; // 0x0
            // float InputRoll; // 0x0
            // CUtlSymbolLarge InputSetRotatorTarget; // 0x0
            // void CFuncRotatorRotateThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotator) == 0xa20);
    };
};
