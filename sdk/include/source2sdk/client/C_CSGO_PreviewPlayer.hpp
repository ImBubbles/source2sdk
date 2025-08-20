#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSPlayerPawn.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x3f90
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGO_PreviewPlayer : public source2sdk::client::C_CSPlayerPawn
        {
        public:
            CUtlString m_animgraph; // 0x3ee0            
            CGlobalSymbol m_animgraphCharacterModeString; // 0x3ee8            
            float m_flInitialModelScale; // 0x3ef0            
            uint8_t _pad3ef4[0x9c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_PreviewPlayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_PreviewPlayer) == 0x3f90);
    };
};
