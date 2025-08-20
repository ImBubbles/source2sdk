#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x538
        // Has VTable
        #pragma pack(push, 1)
        class CLogicEventListener : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04f0[0x10]; // 0x4f0
            CUtlString m_strEventName; // 0x500            
            bool m_bIsEnabled; // 0x508            
            uint8_t _pad0509[0x3]; // 0x509
            std::int32_t m_nTeam; // 0x50c            
            source2sdk::entity2::CEntityIOOutput m_OnEventFired; // 0x510            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicEventListener because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicEventListener) == 0x538);
    };
};
