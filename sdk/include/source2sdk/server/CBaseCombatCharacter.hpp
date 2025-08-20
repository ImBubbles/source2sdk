#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/server/CMovementStatsProperty.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEconWearable;
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
        // Size: 0xbd0
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseFlex
        {
        public:
            bool m_bForceServerRagdoll; // 0xb08            
            uint8_t _pad0b09[0x7]; // 0xb09
            // metadata: MNetworkEnable
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0xb10            
            float m_impactEnergyScale; // 0xb28            
            std::int32_t m_nMinVehicleDamageToTempRagdoll; // 0xb2c            
            bool m_bApplyStressDamage; // 0xb30            
            bool m_bDeathEventsDispatched; // 0xb31            
            uint8_t _pad0b32[0x46]; // 0xb32
            // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t>* m_pVecRelationships;
            char m_pVecRelationships[0x8]; // 0xb78            
            CUtlSymbolLarge m_strRelationships; // 0xb80            
            source2sdk::client::Hull_t m_eHull; // 0xb88            
            std::uint32_t m_nNavHullIdx; // 0xb8c            
            source2sdk::server::CMovementStatsProperty m_movementStats; // 0xb90            
            
            // Datamap fields:
            // void InputBecomeServerRagdoll; // 0x0
            // CUtlSymbolLarge InputSetRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0xbd0);
    };
};
