#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_WeaponServices.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x1a90
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
        // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
        // static metadata: MNetworkVarNames "uint8 m_networkAnimTiming"
        // static metadata: MNetworkVarNames "bool m_bBlockInspectUntilNextGraphUpdate"
        #pragma pack(push, 1)
        class CCSPlayer_WeaponServices : public source2sdk::client::CPlayer_WeaponServices
        {
        public:
            uint8_t _pad00a0[0x28]; // 0xa0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xc8            
            // metadata: MNetworkEnable
            bool m_bIsLookingAtWeapon; // 0xcc            
            // metadata: MNetworkEnable
            bool m_bIsHoldingLookAtWeapon; // 0xcd            
            uint8_t _pad00ce[0x2]; // 0xce
            std::uint32_t m_nOldTotalShootPositionHistoryCount; // 0xd0            
            uint8_t _pad00d4[0x414]; // 0xd4
            std::uint32_t m_nOldTotalInputHistoryCount; // 0x4e8            
            uint8_t _pad04ec[0x155c]; // 0x4ec
            // metadata: MNetworkEnable
            // m_networkAnimTiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_networkAnimTiming;
            char m_networkAnimTiming[0x18]; // 0x1a48            
            // metadata: MNetworkEnable
            bool m_bBlockInspectUntilNextGraphUpdate; // 0x1a60            
            uint8_t _pad1a61[0x2f];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_WeaponServices) == 0x1a90);
    };
};
