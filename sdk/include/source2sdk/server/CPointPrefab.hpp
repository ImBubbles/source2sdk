#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x558
        // Has VTable
        #pragma pack(push, 1)
        class CPointPrefab : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            CUtlSymbolLarge m_targetMapName; // 0x4f0            
            CUtlSymbolLarge m_forceWorldGroupID; // 0x4f8            
            CUtlSymbolLarge m_associatedRelayTargetName; // 0x500            
            bool m_fixupNames; // 0x508            
            bool m_bLoadDynamic; // 0x509            
            uint8_t _pad050a[0x2]; // 0x50a
            // m_associatedRelayEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointPrefab> m_associatedRelayEntity;
            char m_associatedRelayEntity[0x4]; // 0x50c            
            uint8_t _pad0510[0x48];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPrefab because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPrefab) == 0x558);
    };
};
