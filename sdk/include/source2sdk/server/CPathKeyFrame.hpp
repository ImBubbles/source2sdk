#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x550
        // Has VTable
        #pragma pack(push, 1)
        class CPathKeyFrame : public source2sdk::server::CLogicalEntity
        {
        public:
            Vector m_Origin; // 0x4f0            
            QAngle m_Angles; // 0x4fc            
            uint8_t _pad0508[0x8]; // 0x508
            Quaternion m_qAngle; // 0x510            
            CUtlSymbolLarge m_iNextKey; // 0x520            
            float m_flNextTime; // 0x528            
            uint8_t _pad052c[0x4]; // 0x52c
            source2sdk::server::CPathKeyFrame* m_pNextKey; // 0x530            
            source2sdk::server::CPathKeyFrame* m_pPrevKey; // 0x538            
            float m_flMoveSpeed; // 0x540            
            uint8_t _pad0544[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathKeyFrame) == 0x550);
    };
};
