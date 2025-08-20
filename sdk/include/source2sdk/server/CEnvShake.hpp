#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPhysicsShake.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x540
        // Has VTable
        #pragma pack(push, 1)
        class CEnvShake : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_limitToEntity; // 0x4f0            
            float m_Amplitude; // 0x4f8            
            float m_Frequency; // 0x4fc            
            float m_Duration; // 0x500            
            float m_Radius; // 0x504            
            source2sdk::entity2::GameTime_t m_stopTime; // 0x508            
            source2sdk::entity2::GameTime_t m_nextShake; // 0x50c            
            float m_currentAmp; // 0x510            
            Vector m_maxForce; // 0x514            
            uint8_t _pad0520[0x8]; // 0x520
            source2sdk::server::CPhysicsShake m_shakeCallback; // 0x528            
            
            // Datamap fields:
            // void m_pShakeController; // 0x520
            // void InputStartShake; // 0x0
            // void InputStopShake; // 0x0
            // float InputAmplitude; // 0x0
            // float InputFrequency; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvShake because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvShake) == 0x540);
    };
};
