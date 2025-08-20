#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CPhysicsSpring : public source2sdk::server::CBaseEntity
        {
        public:
            uint8_t _pad04f0[0x8]; // 0x4f0
            float m_flFrequency; // 0x4f8            
            float m_flDampingRatio; // 0x4fc            
            float m_flRestLength; // 0x500            
            uint8_t _pad0504[0x4]; // 0x504
            CUtlSymbolLarge m_nameAttachStart; // 0x508            
            CUtlSymbolLarge m_nameAttachEnd; // 0x510            
            Vector m_start; // 0x518            
            Vector m_end; // 0x524            
            std::uint32_t m_teleportTick; // 0x530            
            uint8_t _pad0534[0x4];
            
            // Datamap fields:
            // void m_pSpringJoint; // 0x4f0
            // float lengthscale; // 0x7fffffff
            // float InputSetFrequency; // 0x0
            // float InputSetDampingRatio; // 0x0
            // float InputSetRestLength; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsSpring because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsSpring) == 0x538);
    };
};
