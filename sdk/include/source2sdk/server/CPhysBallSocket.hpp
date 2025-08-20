#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        // Size: 0x578
        // Has VTable
        #pragma pack(push, 1)
        class CPhysBallSocket : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flJointFriction; // 0x560            
            bool m_bEnableSwingLimit; // 0x564            
            uint8_t _pad0565[0x3]; // 0x565
            float m_flSwingLimit; // 0x568            
            bool m_bEnableTwistLimit; // 0x56c            
            uint8_t _pad056d[0x3]; // 0x56d
            float m_flMinTwistAngle; // 0x570            
            float m_flMaxTwistAngle; // 0x574            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBallSocket) == 0x578);
    };
};
