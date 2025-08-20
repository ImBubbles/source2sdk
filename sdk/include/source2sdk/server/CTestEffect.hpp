#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBeam;
    };
};

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
        // Size: 0x620
        // Has VTable
        #pragma pack(push, 1)
        class CTestEffect : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_iLoop; // 0x4f0            
            std::int32_t m_iBeam; // 0x4f4            
            source2sdk::server::CBeam* m_pBeam[24]; // 0x4f8            
            source2sdk::entity2::GameTime_t m_flBeamTime[24]; // 0x5b8            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x618            
            uint8_t _pad061c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestEffect) == 0x620);
    };
};
