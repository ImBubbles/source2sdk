#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0x9c0
        // Has VTable
        #pragma pack(push, 1)
        class CBuyZone : public source2sdk::server::CBaseTrigger
        {
        public:
            std::int32_t m_LegacyTeamNum; // 0x9b8            
            uint8_t _pad09bc[0x4];
            
            // Datamap fields:
            // void InputSetTeam_TerroristOnly; // 0x0
            // void InputSetTeam_CTOnly; // 0x0
            // void InputSetTeam_AllTeams; // 0x0
            // void InputSetTeam_None; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBuyZone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBuyZone) == 0x9c0);
    };
};
