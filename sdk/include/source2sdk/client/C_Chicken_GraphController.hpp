#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"

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
        // Size: 0x2f0
        // Has VTable
        #pragma pack(push, 1)
        class C_Chicken_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_paramActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_paramActivity;
            char m_paramActivity[0x28]; // 0x268            
            // m_paramEndActivityImmediately has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_paramEndActivityImmediately;
            char m_paramEndActivityImmediately[0x20]; // 0x290            
            // m_paramSnapToSquatting has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_paramSnapToSquatting;
            char m_paramSnapToSquatting[0x20]; // 0x2b0            
            CAnimGraphTagRef m_sActivityFinished; // 0x2d0            
            uint8_t _pad02e8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Chicken_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Chicken_GraphController) == 0x2f0);
    };
};
