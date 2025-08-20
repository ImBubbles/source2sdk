#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x4f8
        // Has VTable
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::server::CLogicalEntity
        {
        public:
            bool m_bDisabled; // 0x4f0            
            bool m_bWaitForRefire; // 0x4f1            
            bool m_bTriggerOnce; // 0x4f2            
            bool m_bFastRetrigger; // 0x4f3            
            bool m_bPassthoughCaller; // 0x4f4            
            uint8_t _pad04f5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicRelay) == 0x4f8);
    };
};
