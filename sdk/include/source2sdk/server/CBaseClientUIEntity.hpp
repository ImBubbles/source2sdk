#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x998
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "string_t m_DialogXMLName"
        // static metadata: MNetworkVarNames "string_t m_PanelClassName"
        // static metadata: MNetworkVarNames "string_t m_PanelID"
        #pragma pack(push, 1)
        class CBaseClientUIEntity : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x7e8            
            uint8_t _pad07e9[0x7]; // 0x7e9
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_DialogXMLName; // 0x7f0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelClassName; // 0x7f8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_PanelID; // 0x800            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput0; // 0x808            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput1; // 0x830            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput2; // 0x858            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput3; // 0x880            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput4; // 0x8a8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput5; // 0x8d0            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput6; // 0x8f8            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput7; // 0x920            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput8; // 0x948            
            source2sdk::entity2::CEntityIOOutput m_CustomOutput9; // 0x970            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseClientUIEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseClientUIEntity) == 0x998);
    };
};
