#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x508
        // Has VTable
        #pragma pack(push, 1)
        class CMessageEntity : public source2sdk::server::CPointEntity
        {
        public:
            std::int32_t m_radius; // 0x4f0            
            uint8_t _pad04f4[0x4]; // 0x4f4
            CUtlSymbolLarge m_messageText; // 0x4f8            
            bool m_drawText; // 0x500            
            bool m_bDeveloperOnly; // 0x501            
            bool m_bEnabled; // 0x502            
            uint8_t _pad0503[0x5];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // CUtlSymbolLarge InputSetMessage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMessageEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMessageEntity) == 0x508);
    };
};
