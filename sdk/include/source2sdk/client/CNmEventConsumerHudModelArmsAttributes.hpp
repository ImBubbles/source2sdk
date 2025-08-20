#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNmEventConsumerAttributes.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmEventConsumerHudModelArmsAttributes : public source2sdk::client::CNmEventConsumerAttributes
        {
        public:
            uint8_t _pad0038[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CNmEventConsumerHudModelArmsAttributes) == 0x40);
    };
};
