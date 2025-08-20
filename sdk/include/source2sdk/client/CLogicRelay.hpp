#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLogicalEntity.hpp"

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
        // Size: 0x600
        // Has VTable
        #pragma pack(push, 1)
        class CLogicRelay : public source2sdk::client::CLogicalEntity
        {
        public:
            bool m_bDisabled; // 0x5f8            
            bool m_bWaitForRefire; // 0x5f9            
            bool m_bTriggerOnce; // 0x5fa            
            bool m_bFastRetrigger; // 0x5fb            
            bool m_bPassthoughCaller; // 0x5fc            
            uint8_t _pad05fd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CLogicRelay) == 0x600);
    };
};
