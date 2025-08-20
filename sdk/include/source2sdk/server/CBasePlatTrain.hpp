#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseToggle.hpp"

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
        // Size: 0x890
        // Has VTable
        #pragma pack(push, 1)
        class CBasePlatTrain : public source2sdk::server::CBaseToggle
        {
        public:
            CUtlSymbolLarge m_NoiseMoving; // 0x868            
            CUtlSymbolLarge m_NoiseArrived; // 0x870            
            uint8_t _pad0878[0x8]; // 0x878
            float m_volume; // 0x880            
            float m_flTWidth; // 0x884            
            float m_flTLength; // 0x888            
            uint8_t _pad088c[0x4];
            
            // Datamap fields:
            // void m_pMovementSound; // 0x878
            // float rotation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlatTrain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlatTrain) == 0x890);
    };
};
