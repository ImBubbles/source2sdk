#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBuoyancyHelper.hpp"
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0x1120
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flFluidDensity"
        #pragma pack(push, 1)
        class C_TriggerBuoyancy : public source2sdk::client::C_BaseTrigger
        {
        public:
            source2sdk::client::CBuoyancyHelper m_BuoyancyHelper; // 0x1000            
            // metadata: MNetworkEnable
            float m_flFluidDensity; // 0x1118            
            uint8_t _pad111c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerBuoyancy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerBuoyancy) == 0x1120);
    };
};
