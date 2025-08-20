#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WeaponServices.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerWeapon;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
        // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
        // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
        // static metadata: MNetworkVarNames "uint8 m_networkAnimTiming"
        // static metadata: MNetworkVarNames "bool m_bBlockInspectUntilNextGraphUpdate"
        #pragma pack(push, 1)
        class CCSPlayer_WeaponServices : public source2sdk::server::CPlayer_WeaponServices
        {
        public:
            uint8_t _pad00a8[0x10]; // 0xa8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::entity2::GameTime_t m_flNextAttack; // 0xb8            
            // metadata: MNetworkEnable
            bool m_bIsLookingAtWeapon; // 0xbc            
            // metadata: MNetworkEnable
            bool m_bIsHoldingLookAtWeapon; // 0xbd            
            uint8_t _pad00be[0x2]; // 0xbe
            // m_hSavedWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerWeapon> m_hSavedWeapon;
            char m_hSavedWeapon[0x4]; // 0xc0            
            std::int32_t m_nTimeToMelee; // 0xc4            
            std::int32_t m_nTimeToSecondary; // 0xc8            
            std::int32_t m_nTimeToPrimary; // 0xcc            
            std::int32_t m_nTimeToSniperRifle; // 0xd0            
            bool m_bIsBeingGivenItem; // 0xd4            
            bool m_bIsPickingUpItemWithUse; // 0xd5            
            bool m_bPickedUpWeapon; // 0xd6            
            bool m_bDisableAutoDeploy; // 0xd7            
            bool m_bIsPickingUpGroundWeapon; // 0xd8            
            uint8_t _pad00d9[0x1967]; // 0xd9
            // metadata: MNetworkEnable
            // m_networkAnimTiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_networkAnimTiming;
            char m_networkAnimTiming[0x18]; // 0x1a40            
            // metadata: MNetworkEnable
            bool m_bBlockInspectUntilNextGraphUpdate; // 0x1a58            
            uint8_t _pad1a59[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSPlayer_WeaponServices) == 0x1a60);
    };
};
