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
        // Size: 0x608
        // Has VTable
        #pragma pack(push, 1)
        class CInfoSpawnGroupLoadUnload : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadStarted; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupLoadFinished; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadStarted; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnGroupUnloadFinished; // 0x568            
            CUtlSymbolLarge m_iszSpawnGroupName; // 0x590            
            CUtlSymbolLarge m_iszSpawnGroupFilterName; // 0x598            
            CUtlSymbolLarge m_iszLandmarkName; // 0x5a0            
            CUtlString m_sFixedSpawnGroupName; // 0x5a8            
            float m_flTimeoutInterval; // 0x5b0            
            bool m_bAutoActivate; // 0x5b4            
            bool m_bUnloadingStarted; // 0x5b5            
            bool m_bQueueActiveSpawnGroupChange; // 0x5b6            
            bool m_bQueueFinishLoading; // 0x5b7            
            uint8_t _pad05b8[0x50];
            
            // Datamap fields:
            // void CInfoSpawnGroupLoadUnloadSpawnGroupLoadingThink; // 0x0
            // void CInfoSpawnGroupLoadUnloadSpawnGroupUnloadingThink; // 0x0
            // void InputStartSpawnGroupLoad; // 0x0
            // void InputActivateSpawnGroup; // 0x0
            // void InputStartSpawnGroupUnload; // 0x0
            // CUtlSymbolLarge InputSetSpawnGroup; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoSpawnGroupLoadUnload because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoSpawnGroupLoadUnload) == 0x608);
    };
};
