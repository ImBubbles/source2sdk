#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

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
        // Size: 0x568
        // Has VTable
        #pragma pack(push, 1)
        class CFilterEnemy : public source2sdk::server::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iszEnemyName; // 0x548            
            float m_flRadius; // 0x550            
            float m_flOuterRadius; // 0x554            
            std::int32_t m_nMaxSquadmatesPerEnemy; // 0x558            
            uint8_t _pad055c[0x4]; // 0x55c
            CUtlSymbolLarge m_iszPlayerName; // 0x560            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterEnemy) == 0x568);
    };
};
