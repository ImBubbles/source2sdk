#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"

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
        // Size: 0xc28
        // Has VTable
        #pragma pack(push, 1)
        class CFlashbangProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            float m_flTimeToDetonate; // 0xc20            
            std::uint8_t m_numOpponentsHit; // 0xc24            
            std::uint8_t m_numTeammatesHit; // 0xc25            
            uint8_t _pad0c26[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFlashbangProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFlashbangProjectile) == 0xc28);
    };
};
