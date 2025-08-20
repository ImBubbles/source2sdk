#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x540
        // Has VTable
        #pragma pack(push, 1)
        class CPhysExplosion : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bExplodeOnSpawn; // 0x4f0            
            uint8_t _pad04f1[0x3]; // 0x4f1
            float m_flMagnitude; // 0x4f4            
            float m_flDamage; // 0x4f8            
            float m_radius; // 0x4fc            
            CUtlSymbolLarge m_targetEntityName; // 0x500            
            float m_flInnerRadius; // 0x508            
            float m_flPushScale; // 0x50c            
            bool m_bConvertToDebrisWhenPossible; // 0x510            
            bool m_bAffectInvulnerableEnts; // 0x511            
            uint8_t _pad0512[0x6]; // 0x512
            source2sdk::entity2::CEntityIOOutput m_OnPushedPlayer; // 0x518            
            
            // Datamap fields:
            // void InputExplode; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysExplosion) == 0x540);
    };
};
