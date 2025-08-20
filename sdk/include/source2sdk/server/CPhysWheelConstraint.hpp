#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x598
        // Has VTable
        #pragma pack(push, 1)
        class CPhysWheelConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flSuspensionFrequency; // 0x560            
            float m_flSuspensionDampingRatio; // 0x564            
            float m_flSuspensionHeightOffset; // 0x568            
            bool m_bEnableSuspensionLimit; // 0x56c            
            uint8_t _pad056d[0x3]; // 0x56d
            float m_flMinSuspensionOffset; // 0x570            
            float m_flMaxSuspensionOffset; // 0x574            
            bool m_bEnableSteeringLimit; // 0x578            
            uint8_t _pad0579[0x3]; // 0x579
            float m_flMinSteeringAngle; // 0x57c            
            float m_flMaxSteeringAngle; // 0x580            
            float m_flSteeringAxisFriction; // 0x584            
            float m_flSpinAxisFriction; // 0x588            
            // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSteeringMimicsEntity;
            char m_hSteeringMimicsEntity[0x4]; // 0x58c            
            uint8_t _pad0590[0x8];
            
            // Datamap fields:
            // float InputSetMinSuspensionOffset; // 0x0
            // float InputSetMaxSuspensionOffset; // 0x0
            // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysWheelConstraint) == 0x598);
    };
};
