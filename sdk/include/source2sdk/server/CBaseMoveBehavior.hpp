#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPathKeyFrame.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathKeyFrame;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x590
        // Has VTable
        #pragma pack(push, 1)
        class CBaseMoveBehavior : public source2sdk::server::CPathKeyFrame
        {
        public:
            std::int32_t m_iPositionInterpolator; // 0x550            
            std::int32_t m_iRotationInterpolator; // 0x554            
            float m_flAnimStartTime; // 0x558            
            float m_flAnimEndTime; // 0x55c            
            float m_flAverageSpeedAcrossFrame; // 0x560            
            uint8_t _pad0564[0x4]; // 0x564
            source2sdk::server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x568            
            source2sdk::server::CPathKeyFrame* m_pTargetKeyFrame; // 0x570            
            source2sdk::server::CPathKeyFrame* m_pPreKeyFrame; // 0x578            
            source2sdk::server::CPathKeyFrame* m_pPostKeyFrame; // 0x580            
            float m_flTimeIntoFrame; // 0x588            
            std::int32_t m_iDirection; // 0x58c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseMoveBehavior because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseMoveBehavior) == 0x590);
    };
};
