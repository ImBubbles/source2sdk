#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CRetakeGameRules.hpp"
#include "source2sdk/server/CTeamplayRules.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSGameModeRules;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct SpawnPoint;
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
        // Size: 0x153e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
        // static metadata: MNetworkVarNames "bool m_bWarmupPeriod"
        // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_fWarmupPeriodStart"
        // static metadata: MNetworkVarNames "bool m_bTerroristTimeOutActive"
        // static metadata: MNetworkVarNames "bool m_bCTTimeOutActive"
        // static metadata: MNetworkVarNames "float m_flTerroristTimeOutRemaining"
        // static metadata: MNetworkVarNames "float m_flCTTimeOutRemaining"
        // static metadata: MNetworkVarNames "int m_nTerroristTimeOuts"
        // static metadata: MNetworkVarNames "int m_nCTTimeOuts"
        // static metadata: MNetworkVarNames "bool m_bTechnicalTimeOut"
        // static metadata: MNetworkVarNames "bool m_bMatchWaitingForResume"
        // static metadata: MNetworkVarNames "int m_iRoundTime"
        // static metadata: MNetworkVarNames "float m_fMatchStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_fRoundStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flRestartRoundTime"
        // static metadata: MNetworkVarNames "bool m_bGameRestart"
        // static metadata: MNetworkVarNames "float m_flGameStartTime"
        // static metadata: MNetworkVarNames "float m_timeUntilNextPhaseStarts"
        // static metadata: MNetworkVarNames "int m_gamePhase"
        // static metadata: MNetworkVarNames "int m_totalRoundsPlayed"
        // static metadata: MNetworkVarNames "int m_nRoundsPlayedThisPhase"
        // static metadata: MNetworkVarNames "int m_nOvertimePlaying"
        // static metadata: MNetworkVarNames "int m_iHostagesRemaining"
        // static metadata: MNetworkVarNames "bool m_bAnyHostageReached"
        // static metadata: MNetworkVarNames "bool m_bMapHasBombTarget"
        // static metadata: MNetworkVarNames "bool m_bMapHasRescueZone"
        // static metadata: MNetworkVarNames "bool m_bMapHasBuyZone"
        // static metadata: MNetworkVarNames "bool m_bIsQueuedMatchmaking"
        // static metadata: MNetworkVarNames "int m_nQueuedMatchmakingMode"
        // static metadata: MNetworkVarNames "bool m_bIsValveDS"
        // static metadata: MNetworkVarNames "bool m_bLogoMap"
        // static metadata: MNetworkVarNames "bool m_bPlayAllStepSoundsOnServer"
        // static metadata: MNetworkVarNames "int m_iSpectatorSlotCount"
        // static metadata: MNetworkVarNames "int m_MatchDevice"
        // static metadata: MNetworkVarNames "bool m_bHasMatchStarted"
        // static metadata: MNetworkVarNames "int m_nNextMapInMapgroup"
        // static metadata: MNetworkVarNames "char m_szTournamentEventName"
        // static metadata: MNetworkVarNames "char m_szTournamentEventStage"
        // static metadata: MNetworkVarNames "char m_szMatchStatTxt"
        // static metadata: MNetworkVarNames "char m_szTournamentPredictionsTxt"
        // static metadata: MNetworkVarNames "int m_nTournamentPredictionsPct"
        // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flCMMItemDropRevealEndTime"
        // static metadata: MNetworkVarNames "bool m_bIsDroppingItems"
        // static metadata: MNetworkVarNames "bool m_bIsQuestEligible"
        // static metadata: MNetworkVarNames "bool m_bIsHltvActive"
        // static metadata: MNetworkVarNames "uint16 m_arrProhibitedItemIndices"
        // static metadata: MNetworkVarNames "uint32 m_arrTournamentActiveCasterAccounts"
        // static metadata: MNetworkVarNames "int m_numBestOfMaps"
        // static metadata: MNetworkVarNames "int m_nHalloweenMaskListSeed"
        // static metadata: MNetworkVarNames "bool m_bBombDropped"
        // static metadata: MNetworkVarNames "bool m_bBombPlanted"
        // static metadata: MNetworkVarNames "int m_iRoundWinStatus"
        // static metadata: MNetworkVarNames "int m_eRoundWinReason"
        // static metadata: MNetworkVarNames "bool m_bTCantBuy"
        // static metadata: MNetworkVarNames "bool m_bCTCantBuy"
        // static metadata: MNetworkVarNames "int m_iMatchStats_RoundResults"
        // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_CT"
        // static metadata: MNetworkVarNames "int m_iMatchStats_PlayersAlive_T"
        // static metadata: MNetworkVarNames "float m_TeamRespawnWaveTimes"
        // static metadata: MNetworkVarNames "GameTime_t m_flNextRespawnWave"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
        // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
        // static metadata: MNetworkVarNames "float m_MinimapVerticalSectionHeights"
        // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteTypes"
        // static metadata: MNetworkVarNames "int m_nEndMatchMapGroupVoteOptions"
        // static metadata: MNetworkVarNames "int m_nEndMatchMapVoteWinner"
        // static metadata: MNetworkVarNames "int m_iNumConsecutiveCTLoses"
        // static metadata: MNetworkVarNames "int m_iNumConsecutiveTerroristLoses"
        // static metadata: MNetworkVarNames "int m_nMatchAbortedEarlyReason"
        // static metadata: MNetworkVarNames "CCSGameModeRules * m_pGameModeRules"
        // static metadata: MNetworkVarNames "CRetakeGameRules m_RetakeRules"
        // static metadata: MNetworkVarNames "uint8 m_nMatchEndCount"
        // static metadata: MNetworkVarNames "int m_nTTeamIntroVariant"
        // static metadata: MNetworkVarNames "int m_nCTTeamIntroVariant"
        // static metadata: MNetworkVarNames "bool m_bTeamIntroPeriod"
        // static metadata: MNetworkVarNames "int m_iRoundEndWinnerTeam"
        // static metadata: MNetworkVarNames "int m_eRoundEndReason"
        // static metadata: MNetworkVarNames "bool m_bRoundEndShowTimerDefend"
        // static metadata: MNetworkVarNames "int m_iRoundEndTimerTime"
        // static metadata: MNetworkVarNames "CUtlString m_sRoundEndFunFactToken"
        // static metadata: MNetworkVarNames "CPlayerSlot m_iRoundEndFunFactPlayerSlot"
        // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData1"
        // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData2"
        // static metadata: MNetworkVarNames "int m_iRoundEndFunFactData3"
        // static metadata: MNetworkVarNames "CUtlString m_sRoundEndMessage"
        // static metadata: MNetworkVarNames "int m_iRoundEndPlayerCount"
        // static metadata: MNetworkVarNames "bool m_bRoundEndNoMusic"
        // static metadata: MNetworkVarNames "int m_iRoundEndLegacy"
        // static metadata: MNetworkVarNames "uint8 m_nRoundEndCount"
        // static metadata: MNetworkVarNames "int m_iRoundStartRoundNumber"
        // static metadata: MNetworkVarNames "uint8 m_nRoundStartCount"
        #pragma pack(push, 1)
        class CCSGameRules : public source2sdk::server::CTeamplayRules
        {
        public:
            uint8_t _pad00c0[0x8]; // 0xc0
            // metadata: MNetworkEnable
            bool m_bFreezePeriod; // 0xc8            
            // metadata: MNetworkEnable
            bool m_bWarmupPeriod; // 0xc9            
            uint8_t _pad00ca[0x2]; // 0xca
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fWarmupPeriodEnd; // 0xcc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fWarmupPeriodStart; // 0xd0            
            // metadata: MNetworkEnable
            bool m_bTerroristTimeOutActive; // 0xd4            
            // metadata: MNetworkEnable
            bool m_bCTTimeOutActive; // 0xd5            
            uint8_t _pad00d6[0x2]; // 0xd6
            // metadata: MNetworkEnable
            float m_flTerroristTimeOutRemaining; // 0xd8            
            // metadata: MNetworkEnable
            float m_flCTTimeOutRemaining; // 0xdc            
            // metadata: MNetworkEnable
            std::int32_t m_nTerroristTimeOuts; // 0xe0            
            // metadata: MNetworkEnable
            std::int32_t m_nCTTimeOuts; // 0xe4            
            // metadata: MNetworkEnable
            bool m_bTechnicalTimeOut; // 0xe8            
            // metadata: MNetworkEnable
            bool m_bMatchWaitingForResume; // 0xe9            
            uint8_t _pad00ea[0x2]; // 0xea
            // metadata: MNetworkEnable
            std::int32_t m_iRoundTime; // 0xec            
            // metadata: MNetworkEnable
            float m_fMatchStartTime; // 0xf0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_fRoundStartTime; // 0xf4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flRestartRoundTime; // 0xf8            
            // metadata: MNetworkEnable
            bool m_bGameRestart; // 0xfc            
            uint8_t _pad00fd[0x3]; // 0xfd
            // metadata: MNetworkEnable
            float m_flGameStartTime; // 0x100            
            // metadata: MNetworkEnable
            float m_timeUntilNextPhaseStarts; // 0x104            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnGamePhaseChanged"
            std::int32_t m_gamePhase; // 0x108            
            // metadata: MNetworkEnable
            std::int32_t m_totalRoundsPlayed; // 0x10c            
            // metadata: MNetworkEnable
            std::int32_t m_nRoundsPlayedThisPhase; // 0x110            
            // metadata: MNetworkEnable
            std::int32_t m_nOvertimePlaying; // 0x114            
            // metadata: MNetworkEnable
            std::int32_t m_iHostagesRemaining; // 0x118            
            // metadata: MNetworkEnable
            bool m_bAnyHostageReached; // 0x11c            
            // metadata: MNetworkEnable
            bool m_bMapHasBombTarget; // 0x11d            
            // metadata: MNetworkEnable
            bool m_bMapHasRescueZone; // 0x11e            
            // metadata: MNetworkEnable
            bool m_bMapHasBuyZone; // 0x11f            
            // metadata: MNetworkEnable
            bool m_bIsQueuedMatchmaking; // 0x120            
            uint8_t _pad0121[0x3]; // 0x121
            // metadata: MNetworkEnable
            std::int32_t m_nQueuedMatchmakingMode; // 0x124            
            // metadata: MNetworkEnable
            bool m_bIsValveDS; // 0x128            
            // metadata: MNetworkEnable
            bool m_bLogoMap; // 0x129            
            // metadata: MNetworkEnable
            bool m_bPlayAllStepSoundsOnServer; // 0x12a            
            uint8_t _pad012b[0x1]; // 0x12b
            // metadata: MNetworkEnable
            std::int32_t m_iSpectatorSlotCount; // 0x12c            
            // metadata: MNetworkEnable
            std::int32_t m_MatchDevice; // 0x130            
            // metadata: MNetworkEnable
            bool m_bHasMatchStarted; // 0x134            
            uint8_t _pad0135[0x3]; // 0x135
            // metadata: MNetworkEnable
            std::int32_t m_nNextMapInMapgroup; // 0x138            
            // metadata: MNetworkEnable
            char m_szTournamentEventName[512]; // 0x13c            
            // metadata: MNetworkEnable
            char m_szTournamentEventStage[512]; // 0x33c            
            // metadata: MNetworkEnable
            char m_szMatchStatTxt[512]; // 0x53c            
            // metadata: MNetworkEnable
            char m_szTournamentPredictionsTxt[512]; // 0x73c            
            // metadata: MNetworkEnable
            std::int32_t m_nTournamentPredictionsPct; // 0x93c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealStartTime; // 0x940            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCMMItemDropRevealEndTime; // 0x944            
            // metadata: MNetworkEnable
            bool m_bIsDroppingItems; // 0x948            
            // metadata: MNetworkEnable
            bool m_bIsQuestEligible; // 0x949            
            // metadata: MNetworkEnable
            bool m_bIsHltvActive; // 0x94a            
            uint8_t _pad094b[0x1]; // 0x94b
            // metadata: MNetworkEnable
            std::uint16_t m_arrProhibitedItemIndices[100]; // 0x94c            
            // metadata: MNetworkEnable
            std::uint32_t m_arrTournamentActiveCasterAccounts[4]; // 0xa14            
            // metadata: MNetworkEnable
            std::int32_t m_numBestOfMaps; // 0xa24            
            // metadata: MNetworkEnable
            std::int32_t m_nHalloweenMaskListSeed; // 0xa28            
            // metadata: MNetworkEnable
            bool m_bBombDropped; // 0xa2c            
            // metadata: MNetworkEnable
            bool m_bBombPlanted; // 0xa2d            
            uint8_t _pad0a2e[0x2]; // 0xa2e
            // metadata: MNetworkEnable
            std::int32_t m_iRoundWinStatus; // 0xa30            
            // metadata: MNetworkEnable
            std::int32_t m_eRoundWinReason; // 0xa34            
            // metadata: MNetworkEnable
            bool m_bTCantBuy; // 0xa38            
            // metadata: MNetworkEnable
            bool m_bCTCantBuy; // 0xa39            
            uint8_t _pad0a3a[0x2]; // 0xa3a
            // metadata: MNetworkEnable
            std::int32_t m_iMatchStats_RoundResults[30]; // 0xa3c            
            // metadata: MNetworkEnable
            std::int32_t m_iMatchStats_PlayersAlive_CT[30]; // 0xab4            
            // metadata: MNetworkEnable
            std::int32_t m_iMatchStats_PlayersAlive_T[30]; // 0xb2c            
            // metadata: MNetworkEnable
            float m_TeamRespawnWaveTimes[32]; // 0xba4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flNextRespawnWave[32]; // 0xc24            
            // metadata: MNetworkEnable
            Vector m_vMinimapMins; // 0xca4            
            // metadata: MNetworkEnable
            Vector m_vMinimapMaxs; // 0xcb0            
            // metadata: MNetworkEnable
            float m_MinimapVerticalSectionHeights[8]; // 0xcbc            
            uint8_t _pad0cdc[0x4]; // 0xcdc
            std::uint64_t m_ullLocalMatchID; // 0xce0            
            // metadata: MNetworkEnable
            std::int32_t m_nEndMatchMapGroupVoteTypes[10]; // 0xce8            
            // metadata: MNetworkEnable
            std::int32_t m_nEndMatchMapGroupVoteOptions[10]; // 0xd10            
            // metadata: MNetworkEnable
            std::int32_t m_nEndMatchMapVoteWinner; // 0xd38            
            // metadata: MNetworkEnable
            std::int32_t m_iNumConsecutiveCTLoses; // 0xd3c            
            // metadata: MNetworkEnable
            std::int32_t m_iNumConsecutiveTerroristLoses; // 0xd40            
            uint8_t _pad0d44[0x1c]; // 0xd44
            bool m_bHasHostageBeenTouched; // 0xd60            
            uint8_t _pad0d61[0x3]; // 0xd61
            source2sdk::entity2::GameTime_t m_flIntermissionStartTime; // 0xd64            
            source2sdk::entity2::GameTime_t m_flIntermissionEndTime; // 0xd68            
            bool m_bLevelInitialized; // 0xd6c            
            uint8_t _pad0d6d[0x3]; // 0xd6d
            std::int32_t m_iTotalRoundsPlayed; // 0xd70            
            std::int32_t m_iUnBalancedRounds; // 0xd74            
            bool m_endMatchOnRoundReset; // 0xd78            
            bool m_endMatchOnThink; // 0xd79            
            uint8_t _pad0d7a[0x2]; // 0xd7a
            std::int32_t m_iFreezeTime; // 0xd7c            
            std::int32_t m_iNumTerrorist; // 0xd80            
            std::int32_t m_iNumCT; // 0xd84            
            std::int32_t m_iNumSpawnableTerrorist; // 0xd88            
            std::int32_t m_iNumSpawnableCT; // 0xd8c            
            // m_arrSelectedHostageSpawnIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_arrSelectedHostageSpawnIndices;
            char m_arrSelectedHostageSpawnIndices[0x18]; // 0xd90            
            std::int32_t m_nSpawnPointsRandomSeed; // 0xda8            
            bool m_bFirstConnected; // 0xdac            
            bool m_bCompleteReset; // 0xdad            
            bool m_bPickNewTeamsOnReset; // 0xdae            
            bool m_bScrambleTeamsOnRestart; // 0xdaf            
            bool m_bSwapTeamsOnRestart; // 0xdb0            
            uint8_t _pad0db1[0x7]; // 0xdb1
            // m_nEndMatchTiedVotes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nEndMatchTiedVotes;
            char m_nEndMatchTiedVotes[0x18]; // 0xdb8            
            uint8_t _pad0dd0[0x4]; // 0xdd0
            bool m_bNeedToAskPlayersForContinueVote; // 0xdd4            
            uint8_t _pad0dd5[0x3]; // 0xdd5
            std::uint32_t m_numQueuedMatchmakingAccounts; // 0xdd8            
            float m_fAvgPlayerRank; // 0xddc            
            char* m_pQueuedMatchmakingReservationString; // 0xde0            
            std::uint32_t m_numTotalTournamentDrops; // 0xde8            
            std::uint32_t m_numSpectatorsCountMax; // 0xdec            
            std::uint32_t m_numSpectatorsCountMaxTV; // 0xdf0            
            std::uint32_t m_numSpectatorsCountMaxLnk; // 0xdf4            
            uint8_t _pad0df8[0x8]; // 0xdf8
            std::int32_t m_nCTsAliveAtFreezetimeEnd; // 0xe00            
            std::int32_t m_nTerroristsAliveAtFreezetimeEnd; // 0xe04            
            bool m_bForceTeamChangeSilent; // 0xe08            
            bool m_bLoadingRoundBackupData; // 0xe09            
            uint8_t _pad0e0a[0x36]; // 0xe0a
            std::int32_t m_nMatchInfoShowType; // 0xe40            
            float m_flMatchInfoDecidedTime; // 0xe44            
            uint8_t _pad0e48[0x18]; // 0xe48
            std::int32_t mTeamDMLastWinningTeamNumber; // 0xe60            
            float mTeamDMLastThinkTime; // 0xe64            
            float m_flTeamDMLastAnnouncementTime; // 0xe68            
            std::int32_t m_iAccountTerrorist; // 0xe6c            
            std::int32_t m_iAccountCT; // 0xe70            
            std::int32_t m_iSpawnPointCount_Terrorist; // 0xe74            
            std::int32_t m_iSpawnPointCount_CT; // 0xe78            
            std::int32_t m_iMaxNumTerrorists; // 0xe7c            
            std::int32_t m_iMaxNumCTs; // 0xe80            
            std::int32_t m_iLoserBonusMostRecentTeam; // 0xe84            
            float m_tmNextPeriodicThink; // 0xe88            
            bool m_bVoiceWonMatchBragFired; // 0xe8c            
            uint8_t _pad0e8d[0x3]; // 0xe8d
            float m_fWarmupNextChatNoticeTime; // 0xe90            
            uint8_t _pad0e94[0x4]; // 0xe94
            std::int32_t m_iHostagesRescued; // 0xe98            
            std::int32_t m_iHostagesTouched; // 0xe9c            
            float m_flNextHostageAnnouncement; // 0xea0            
            bool m_bNoTerroristsKilled; // 0xea4            
            bool m_bNoCTsKilled; // 0xea5            
            bool m_bNoEnemiesKilled; // 0xea6            
            bool m_bCanDonateWeapons; // 0xea7            
            uint8_t _pad0ea8[0x4]; // 0xea8
            float m_firstKillTime; // 0xeac            
            uint8_t _pad0eb0[0x4]; // 0xeb0
            float m_firstBloodTime; // 0xeb4            
            uint8_t _pad0eb8[0x18]; // 0xeb8
            bool m_hostageWasInjured; // 0xed0            
            bool m_hostageWasKilled; // 0xed1            
            uint8_t _pad0ed2[0xe]; // 0xed2
            bool m_bVoteCalled; // 0xee0            
            bool m_bServerVoteOnReset; // 0xee1            
            uint8_t _pad0ee2[0x2]; // 0xee2
            float m_flVoteCheckThrottle; // 0xee4            
            bool m_bBuyTimeEnded; // 0xee8            
            uint8_t _pad0ee9[0x3]; // 0xee9
            std::int32_t m_nLastFreezeEndBeep; // 0xeec            
            bool m_bTargetBombed; // 0xef0            
            bool m_bBombDefused; // 0xef1            
            bool m_bMapHasBombZone; // 0xef2            
            uint8_t _pad0ef3[0x4d]; // 0xef3
            Vector m_vecMainCTSpawnPos; // 0xf40            
            uint8_t _pad0f4c[0x4]; // 0xf4c
            // m_CTSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SpawnPoint*> m_CTSpawnPointsMasterList;
            char m_CTSpawnPointsMasterList[0x18]; // 0xf50            
            // m_TerroristSpawnPointsMasterList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SpawnPoint*> m_TerroristSpawnPointsMasterList;
            char m_TerroristSpawnPointsMasterList[0x18]; // 0xf68            
            bool m_bRespawningAllRespawnablePlayers; // 0xf80            
            uint8_t _pad0f81[0x3]; // 0xf81
            std::int32_t m_iNextCTSpawnPoint; // 0xf84            
            float m_flCTSpawnPointUsedTime; // 0xf88            
            std::int32_t m_iNextTerroristSpawnPoint; // 0xf8c            
            float m_flTerroristSpawnPointUsedTime; // 0xf90            
            uint8_t _pad0f94[0x4]; // 0xf94
            // m_CTSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SpawnPoint*> m_CTSpawnPoints;
            char m_CTSpawnPoints[0x18]; // 0xf98            
            // m_TerroristSpawnPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SpawnPoint*> m_TerroristSpawnPoints;
            char m_TerroristSpawnPoints[0x18]; // 0xfb0            
            bool m_bIsUnreservedGameServer; // 0xfc8            
            uint8_t _pad0fc9[0x3]; // 0xfc9
            float m_fAutobalanceDisplayTime; // 0xfcc            
            uint8_t _pad0fd0[0x38]; // 0xfd0
            bool m_bAllowWeaponSwitch; // 0x1008            
            bool m_bRoundTimeWarningTriggered; // 0x1009            
            uint8_t _pad100a[0x2]; // 0x100a
            source2sdk::entity2::GameTime_t m_phaseChangeAnnouncementTime; // 0x100c            
            float m_fNextUpdateTeamClanNamesTime; // 0x1010            
            source2sdk::entity2::GameTime_t m_flLastThinkTime; // 0x1014            
            float m_fAccumulatedRoundOffDamage; // 0x1018            
            std::int32_t m_nShorthandedBonusLastEvalRound; // 0x101c            
            uint8_t _pad1020[0x48]; // 0x1020
            // metadata: MNetworkEnable
            std::int32_t m_nMatchAbortedEarlyReason; // 0x1068            
            bool m_bHasTriggeredRoundStartMusic; // 0x106c            
            bool m_bSwitchingTeamsAtRoundReset; // 0x106d            
            uint8_t _pad106e[0x1a]; // 0x106e
            // metadata: MNetworkEnable
            // metadata: MNetworkPolymorphic
            source2sdk::server::CCSGameModeRules* m_pGameModeRules; // 0x1088            
            KeyValues3 m_BtGlobalBlackboard; // 0x1090            
            uint8_t _pad10a0[0x88]; // 0x10a0
            // m_hPlayerResource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPlayerResource;
            char m_hPlayerResource[0x4]; // 0x1128            
            uint8_t _pad112c[0x4]; // 0x112c
            // metadata: MNetworkEnable
            source2sdk::server::CRetakeGameRules m_RetakeRules; // 0x1130            
            // m_arrTeamUniqueKillWeaponsMatch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_arrTeamUniqueKillWeaponsMatch[4];
            char m_arrTeamUniqueKillWeaponsMatch[0x60]; // 0x12c8            
            bool m_bTeamLastKillUsedUniqueWeaponMatch[4]; // 0x1328            
            uint8_t _pad132c[0x24]; // 0x132c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMatchEndCountChanged"
            std::uint8_t m_nMatchEndCount; // 0x1350            
            uint8_t _pad1351[0x3]; // 0x1351
            // metadata: MNetworkEnable
            std::int32_t m_nTTeamIntroVariant; // 0x1354            
            // metadata: MNetworkEnable
            std::int32_t m_nCTTeamIntroVariant; // 0x1358            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnTeamIntroPeriodChanged"
            bool m_bTeamIntroPeriod; // 0x135c            
            uint8_t _pad135d[0x3]; // 0x135d
            source2sdk::entity2::GameTime_t m_fTeamIntroPeriodEnd; // 0x1360            
            bool m_bPlayedTeamIntroVO; // 0x1364            
            uint8_t _pad1365[0x3]; // 0x1365
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndWinnerTeam; // 0x1368            
            // metadata: MNetworkEnable
            std::int32_t m_eRoundEndReason; // 0x136c            
            // metadata: MNetworkEnable
            bool m_bRoundEndShowTimerDefend; // 0x1370            
            uint8_t _pad1371[0x3]; // 0x1371
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndTimerTime; // 0x1374            
            // metadata: MNetworkEnable
            CUtlString m_sRoundEndFunFactToken; // 0x1378            
            // metadata: MNetworkEnable
            CPlayerSlot m_iRoundEndFunFactPlayerSlot; // 0x1380            
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndFunFactData1; // 0x1384            
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndFunFactData2; // 0x1388            
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndFunFactData3; // 0x138c            
            // metadata: MNetworkEnable
            CUtlString m_sRoundEndMessage; // 0x1390            
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndPlayerCount; // 0x1398            
            // metadata: MNetworkEnable
            bool m_bRoundEndNoMusic; // 0x139c            
            uint8_t _pad139d[0x3]; // 0x139d
            // metadata: MNetworkEnable
            std::int32_t m_iRoundEndLegacy; // 0x13a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRoundEndCountChanged"
            std::uint8_t m_nRoundEndCount; // 0x13a4            
            uint8_t _pad13a5[0x3]; // 0x13a5
            // metadata: MNetworkEnable
            std::int32_t m_iRoundStartRoundNumber; // 0x13a8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRoundStartCountChanged"
            std::uint8_t m_nRoundStartCount; // 0x13ac            
            uint8_t _pad13ad[0x400b]; // 0x13ad
            double m_flLastPerfSampleTime; // 0x53b8            
            uint8_t _pad53c0[0x10020];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSGameRules because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSGameRules) == 0x153e0);
    };
};
