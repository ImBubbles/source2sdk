#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CEconItemView.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2e0
        // Has VTable
        #pragma pack(push, 1)
        struct CSNetworkableLoadout_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::server::CEconItemView m_Item; // 0x30            
            // metadata: MNetworkEnable
            std::uint16_t m_unTeam; // 0x2d8            
            // metadata: MNetworkEnable
            std::uint16_t m_unSlot; // 0x2da            
            uint8_t _pad02dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSNetworkableLoadout_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSNetworkableLoadout_t) == 0x2e0);
    };
};
