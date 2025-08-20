#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x538
        // Has VTable
        #pragma pack(push, 1)
        class CPointVelocitySensor : public source2sdk::server::CPointEntity
        {
        public:
            // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEntity;
            char m_hTargetEntity[0x4]; // 0x4f0            
            Vector m_vecAxis; // 0x4f4            
            bool m_bEnabled; // 0x500            
            uint8_t _pad0501[0x3]; // 0x501
            float m_fPrevVelocity; // 0x504            
            float m_flAvgInterval; // 0x508            
            uint8_t _pad050c[0x4]; // 0x50c
            // m_Velocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_Velocity;
            char m_Velocity[0x28]; // 0x510            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointVelocitySensor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointVelocitySensor) == 0x538);
    };
};
