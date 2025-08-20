#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EconItemView.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4b0
        // Has VTable
        #pragma pack(push, 1)
        struct CSNetworkableLoadout_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::C_EconItemView m_Item; // 0x30            
            // metadata: MNetworkEnable
            std::uint16_t m_unTeam; // 0x4a8            
            // metadata: MNetworkEnable
            std::uint16_t m_unSlot; // 0x4aa            
            uint8_t _pad04ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSNetworkableLoadout_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSNetworkableLoadout_t) == 0x4b0);
    };
};
