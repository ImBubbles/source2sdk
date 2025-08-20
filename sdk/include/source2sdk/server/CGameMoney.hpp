#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRulePointEntity.hpp"

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
        // Size: 0x858
        // Has VTable
        #pragma pack(push, 1)
        class CGameMoney : public source2sdk::server::CRulePointEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMoneySpent; // 0x7f8            
            source2sdk::entity2::CEntityIOOutput m_OnMoneySpentFail; // 0x820            
            std::int32_t m_nMoney; // 0x848            
            uint8_t _pad084c[0x4]; // 0x84c
            CUtlString m_strAwardText; // 0x850            
            
            // Datamap fields:
            // int32_t InputSetMoneyAmount; // 0x0
            // void InputAddTeamMoneyTerrorist; // 0x0
            // void InputAddTeamMoneyCT; // 0x0
            // void InputAddMoneyPlayer; // 0x0
            // void InputSpendMoneyFromPlayer; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGameMoney because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGameMoney) == 0x858);
    };
};
