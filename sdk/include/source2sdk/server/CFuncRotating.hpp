#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x8e0
        // Has VTable
        // 
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x7e8            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x810            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x838            
            RotationVector m_localRotationVector; // 0x860            
            float m_flFanFriction; // 0x86c            
            float m_flAttenuation; // 0x870            
            float m_flVolume; // 0x874            
            float m_flTargetSpeed; // 0x878            
            float m_flMaxSpeed; // 0x87c            
            float m_flBlockDamage; // 0x880            
            uint8_t _pad0884[0x4]; // 0x884
            CUtlSymbolLarge m_NoiseRunning; // 0x888            
            bool m_bReversed; // 0x890            
            bool m_bAccelDecel; // 0x891            
            uint8_t _pad0892[0x16]; // 0x892
            QAngle m_prevLocalAngles; // 0x8a8            
            QAngle m_angStart; // 0x8b4            
            bool m_bStopAtStartPos; // 0x8c0            
            uint8_t _pad08c1[0x3]; // 0x8c1
            Vector m_vecClientOrigin; // 0x8c4            
            QAngle m_vecClientAngles; // 0x8d0            
            uint8_t _pad08dc[0x4];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncRotatingSpinUpMove; // 0x0
            // void CFuncRotatingSpinDownMove; // 0x0
            // void CFuncRotatingHurtTouch; // 0x0
            // void CFuncRotatingRotatingUse; // 0x0
            // void CFuncRotatingRotateMove; // 0x0
            // void CFuncRotatingReverseMove; // 0x0
            // float InputSetSpeed; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputReverse; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputStopAtStartPos; // 0x0
            // void InputSnapToStartPos; // 0x0
            // Vector InputSetStartPos; // 0x0
            // void InputEnableAccelDecel; // 0x0
            // void InputDisableAccelDecel; // 0x0
            // void m_nNoiseRunningGuid; // 0x894
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x8e0);
    };
};
