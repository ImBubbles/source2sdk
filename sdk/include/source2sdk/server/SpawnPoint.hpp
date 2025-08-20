#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x500
        // Has VTable
        #pragma pack(push, 1)
        class SpawnPoint : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            std::int32_t m_iPriority; // 0x4f0            
            bool m_bEnabled; // 0x4f4            
            uint8_t _pad04f5[0x3]; // 0x4f5
            std::int32_t m_nType; // 0x4f8            
            uint8_t _pad04fc[0x4];
            
            // Datamap fields:
            // void InputSetEnabled; // 0x0
            // void InputSetDisabled; // 0x0
            // void InputToggleEnabled; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in SpawnPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::SpawnPoint) == 0x500);
    };
};
