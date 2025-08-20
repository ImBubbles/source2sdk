#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2e8
        // Has VTable
        #pragma pack(push, 1)
        class CChicken_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_paramActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<char*> m_paramActivity;
            char m_paramActivity[0x28]; // 0x268            
            // m_paramEndActivityImmediately has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<bool> m_paramEndActivityImmediately;
            char m_paramEndActivityImmediately[0x20]; // 0x290            
            CAnimGraphTagRef m_sActivityFinished; // 0x2b0            
            // m_paramTurnAngle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamRef<float> m_paramTurnAngle;
            char m_paramTurnAngle[0x20]; // 0x2c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CChicken_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CChicken_GraphController) == 0x2e8);
    };
};
