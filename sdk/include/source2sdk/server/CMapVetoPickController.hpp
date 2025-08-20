#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0xf18
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nDraftType"
        // static metadata: MNetworkVarNames "int m_nTeamWinningCoinToss"
        // static metadata: MNetworkVarNames "int m_nTeamWithFirstChoice"
        // static metadata: MNetworkVarNames "int m_nVoteMapIdsList"
        // static metadata: MNetworkVarNames "int m_nAccountIDs"
        // static metadata: MNetworkVarNames "int m_nMapId0"
        // static metadata: MNetworkVarNames "int m_nMapId1"
        // static metadata: MNetworkVarNames "int m_nMapId2"
        // static metadata: MNetworkVarNames "int m_nMapId3"
        // static metadata: MNetworkVarNames "int m_nMapId4"
        // static metadata: MNetworkVarNames "int m_nMapId5"
        // static metadata: MNetworkVarNames "int m_nStartingSide0"
        // static metadata: MNetworkVarNames "int m_nCurrentPhase"
        // static metadata: MNetworkVarNames "int m_nPhaseStartTick"
        // static metadata: MNetworkVarNames "int m_nPhaseDurationTicks"
        #pragma pack(push, 1)
        class CMapVetoPickController : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bPlayedIntroVcd; // 0x4f0            
            bool m_bNeedToPlayFiveSecondsRemaining; // 0x4f1            
            uint8_t _pad04f2[0x1e]; // 0x4f2
            double m_dblPreMatchDraftSequenceTime; // 0x510            
            bool m_bPreMatchDraftStateChanged; // 0x518            
            uint8_t _pad0519[0x3]; // 0x519
            // metadata: MNetworkEnable
            std::int32_t m_nDraftType; // 0x51c            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWinningCoinToss; // 0x520            
            // metadata: MNetworkEnable
            std::int32_t m_nTeamWithFirstChoice[64]; // 0x524            
            // metadata: MNetworkEnable
            std::int32_t m_nVoteMapIdsList[7]; // 0x624            
            // metadata: MNetworkEnable
            std::int32_t m_nAccountIDs[64]; // 0x640            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId0[64]; // 0x740            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId1[64]; // 0x840            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId2[64]; // 0x940            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId3[64]; // 0xa40            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId4[64]; // 0xb40            
            // metadata: MNetworkEnable
            std::int32_t m_nMapId5[64]; // 0xc40            
            // metadata: MNetworkEnable
            std::int32_t m_nStartingSide0[64]; // 0xd40            
            // metadata: MNetworkEnable
            std::int32_t m_nCurrentPhase; // 0xe40            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseStartTick; // 0xe44            
            // metadata: MNetworkEnable
            std::int32_t m_nPhaseDurationTicks; // 0xe48            
            uint8_t _pad0e4c[0x4]; // 0xe4c
            // m_OnMapVetoed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapVetoed;
            char m_OnMapVetoed[0x28]; // 0xe50            
            // m_OnMapPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapPicked;
            char m_OnMapPicked[0x28]; // 0xe78            
            // m_OnSidesPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnSidesPicked;
            char m_OnSidesPicked[0x28]; // 0xea0            
            // m_OnNewPhaseStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnNewPhaseStarted;
            char m_OnNewPhaseStarted[0x28]; // 0xec8            
            // m_OnLevelTransition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnLevelTransition;
            char m_OnLevelTransition[0x28]; // 0xef0            
            
            // Datamap fields:
            // void CMapVetoPickControllerVoteControllerThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMapVetoPickController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMapVetoPickController) == 0xf18);
    };
};
