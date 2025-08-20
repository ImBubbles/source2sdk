#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPropDoorRotating.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x10a0
        // Has VTable
        #pragma pack(push, 1)
        class CPropDoorRotatingBreakable : public source2sdk::server::CPropDoorRotating
        {
        public:
            bool m_bBreakable; // 0x1080            
            bool m_isAbleToCloseAreaPortals; // 0x1081            
            uint8_t _pad1082[0x2]; // 0x1082
            std::int32_t m_currentDamageState; // 0x1084            
            // m_damageStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlSymbolLarge> m_damageStates;
            char m_damageStates[0x18]; // 0x1088            
            
            // Datamap fields:
            // void InputSetUnbreakable; // 0x0
            // void InputSetBreakable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotatingBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotatingBreakable) == 0x10a0);
    };
};
