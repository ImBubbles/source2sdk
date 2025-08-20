#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"

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
        // Size: 0x1050
        // Has VTable
        #pragma pack(push, 1)
        class C_Precipitation : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_flDensity; // 0x1000            
            uint8_t _pad1004[0xc]; // 0x1004
            float m_flParticleInnerDist; // 0x1010            
            uint8_t _pad1014[0x4]; // 0x1014
            char* m_pParticleDef; // 0x1018            
            uint8_t _pad1020[0x20]; // 0x1020
            source2sdk::client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0x1040            
            bool m_bActiveParticlePrecipEmitter[1]; // 0x1048            
            bool m_bParticlePrecipInitialized; // 0x1049            
            bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0x104a            
            uint8_t _pad104b[0x1]; // 0x104b
            std::int32_t m_nAvailableSheetSequencesMaxIndex; // 0x104c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Precipitation) == 0x1050);
    };
};
