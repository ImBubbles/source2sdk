#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CItem.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Size: 0xb58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
        // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
        #pragma pack(push, 1)
        class CItemDogtags : public source2sdk::server::CItem
        {
        public:
            // metadata: MNetworkEnable
            // m_OwningPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_OwningPlayer;
            char m_OwningPlayer[0x4]; // 0xb50            
            // metadata: MNetworkEnable
            // m_KillingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_KillingPlayer;
            char m_KillingPlayer[0x4]; // 0xb54            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemDogtags because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemDogtags) == 0xb58);
    };
};
