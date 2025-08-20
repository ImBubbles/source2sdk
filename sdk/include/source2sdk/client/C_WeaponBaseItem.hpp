#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
        // static metadata: MNetworkVarNames "bool m_bRedraw"
        #pragma pack(push, 1)
        class C_WeaponBaseItem : public source2sdk::client::C_CSWeaponBase
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::CountdownTimer m_SequenceCompleteTimer; // 0x1e10            
            // metadata: MNetworkEnable
            bool m_bRedraw; // 0x1e28            
            uint8_t _pad1e29[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_WeaponBaseItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_WeaponBaseItem) == 0x1e30);
    };
};
