#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x800
        // Has VTable
        #pragma pack(push, 1)
        class CFuncNavObstruction : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07e8[0x10]; // 0x7e8
            bool m_bDisabled; // 0x7f8            
            bool m_bUseAsyncObstacleUpdate; // 0x7f9            
            uint8_t _pad07fa[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncNavObstruction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncNavObstruction) == 0x800);
    };
};
