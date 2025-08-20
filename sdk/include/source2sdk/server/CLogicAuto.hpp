#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x688
        // Has VTable
        #pragma pack(push, 1)
        class CLogicAuto : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMapSpawn; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnDemoMapSpawn; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnNewGame; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnLoadGame; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnMapTransition; // 0x590            
            source2sdk::entity2::CEntityIOOutput m_OnBackgroundMap; // 0x5b8            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewMap; // 0x5e0            
            source2sdk::entity2::CEntityIOOutput m_OnMultiNewRound; // 0x608            
            source2sdk::entity2::CEntityIOOutput m_OnVREnabled; // 0x630            
            source2sdk::entity2::CEntityIOOutput m_OnVRNotEnabled; // 0x658            
            CUtlSymbolLarge m_globalstate; // 0x680            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAuto because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAuto) == 0x688);
    };
};
