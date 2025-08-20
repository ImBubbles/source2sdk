#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTeam.hpp"

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
        // Size: 0x868
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bSurrendered"
        // static metadata: MNetworkVarNames "char m_szTeamMatchStat"
        // static metadata: MNetworkVarNames "int m_numMapVictories"
        // static metadata: MNetworkVarNames "int32 m_scoreFirstHalf"
        // static metadata: MNetworkVarNames "int32 m_scoreSecondHalf"
        // static metadata: MNetworkVarNames "int32 m_scoreOvertime"
        // static metadata: MNetworkVarNames "char m_szClanTeamname"
        // static metadata: MNetworkVarNames "uint32 m_iClanID"
        // static metadata: MNetworkVarNames "char m_szTeamFlagImage"
        // static metadata: MNetworkVarNames "char m_szTeamLogoImage"
        #pragma pack(push, 1)
        class CCSTeam : public source2sdk::server::CTeam
        {
        public:
            std::int32_t m_nLastRecievedShorthandedRoundBonus; // 0x5a8            
            std::int32_t m_nShorthandedRoundBonusStartRound; // 0x5ac            
            // metadata: MNetworkEnable
            bool m_bSurrendered; // 0x5b0            
            // metadata: MNetworkEnable
            char m_szTeamMatchStat[512]; // 0x5b1            
            uint8_t _pad07b1[0x3]; // 0x7b1
            // metadata: MNetworkEnable
            std::int32_t m_numMapVictories; // 0x7b4            
            // metadata: MNetworkEnable
            std::int32_t m_scoreFirstHalf; // 0x7b8            
            // metadata: MNetworkEnable
            std::int32_t m_scoreSecondHalf; // 0x7bc            
            // metadata: MNetworkEnable
            std::int32_t m_scoreOvertime; // 0x7c0            
            // metadata: MNetworkEnable
            char m_szClanTeamname[129]; // 0x7c4            
            uint8_t _pad0845[0x3]; // 0x845
            // metadata: MNetworkEnable
            std::uint32_t m_iClanID; // 0x848            
            // metadata: MNetworkEnable
            char m_szTeamFlagImage[8]; // 0x84c            
            // metadata: MNetworkEnable
            char m_szTeamLogoImage[8]; // 0x854            
            float m_flNextResourceTime; // 0x85c            
            std::int32_t m_iLastUpdateSentAt; // 0x860            
            uint8_t _pad0864[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSTeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSTeam) == 0x868);
    };
};
