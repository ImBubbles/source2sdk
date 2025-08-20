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
        // Size: 0x308
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGO_PreviewModel_GraphController : public source2sdk::client::CBaseAnimGraphAnimGraphController
        {
        public:
            // m_pszCharacterMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszCharacterMode;
            char m_pszCharacterMode[0x28]; // 0x268            
            // m_pszWeaponState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszWeaponState;
            char m_pszWeaponState[0x28]; // 0x290            
            // m_pszWeaponType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszWeaponType;
            char m_pszWeaponType[0x28]; // 0x2b8            
            // m_pszEndOfMatchCelebration has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszEndOfMatchCelebration;
            char m_pszEndOfMatchCelebration[0x28]; // 0x2e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_PreviewModel_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_PreviewModel_GraphController) == 0x308);
    };
};
