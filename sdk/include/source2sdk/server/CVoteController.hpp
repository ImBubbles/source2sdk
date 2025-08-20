#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseIssue;
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
        // Size: 0x6a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iActiveIssueIndex"
        // static metadata: MNetworkVarNames "int m_iOnlyTeamToVote"
        // static metadata: MNetworkVarNames "int m_nVoteOptionCount"
        // static metadata: MNetworkVarNames "int m_nPotentialVotes"
        // static metadata: MNetworkVarNames "bool m_bIsYesNoVote"
        #pragma pack(push, 1)
        class CVoteController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iActiveIssueIndex; // 0x4f0            
            // metadata: MNetworkEnable
            std::int32_t m_iOnlyTeamToVote; // 0x4f4            
            // metadata: MNetworkEnable
            std::int32_t m_nVoteOptionCount[5]; // 0x4f8            
            // metadata: MNetworkEnable
            std::int32_t m_nPotentialVotes; // 0x50c            
            // metadata: MNetworkEnable
            bool m_bIsYesNoVote; // 0x510            
            uint8_t _pad0511[0x7]; // 0x511
            source2sdk::server::CountdownTimer m_acceptingVotesTimer; // 0x518            
            source2sdk::server::CountdownTimer m_executeCommandTimer; // 0x530            
            source2sdk::server::CountdownTimer m_resetVoteTimer; // 0x548            
            std::int32_t m_nVotesCast[64]; // 0x560            
            CPlayerSlot m_playerHoldingVote; // 0x660            
            CPlayerSlot m_playerOverrideForVote; // 0x664            
            std::int32_t m_nHighestCountIndex; // 0x668            
            uint8_t _pad066c[0x4]; // 0x66c
            // m_potentialIssues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseIssue*> m_potentialIssues;
            char m_potentialIssues[0x18]; // 0x670            
            // m_VoteOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_VoteOptions;
            char m_VoteOptions[0x18]; // 0x688            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoteController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CVoteController) == 0x6a0);
    };
};
