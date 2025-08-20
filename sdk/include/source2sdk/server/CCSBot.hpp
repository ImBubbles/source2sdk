#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBot.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6d50
        // Has VTable
        #pragma pack(push, 1)
        class CCSBot : public source2sdk::server::CBot
        {
        public:
            uint8_t _pad0100[0x8]; // 0x100
            Vector m_eyePosition; // 0x108            
            char m_name[64]; // 0x114            
            float m_combatRange; // 0x154            
            bool m_isRogue; // 0x158            
            uint8_t _pad0159[0x7]; // 0x159
            source2sdk::server::CountdownTimer m_rogueTimer; // 0x160            
            uint8_t _pad0178[0x4]; // 0x178
            bool m_diedLastRound; // 0x17c            
            uint8_t _pad017d[0x3]; // 0x17d
            float m_safeTime; // 0x180            
            bool m_wasSafe; // 0x184            
            uint8_t _pad0185[0x7]; // 0x185
            bool m_blindFire; // 0x18c            
            uint8_t _pad018d[0x3]; // 0x18d
            source2sdk::server::CountdownTimer m_surpriseTimer; // 0x190            
            bool m_bAllowActive; // 0x1a8            
            bool m_isFollowing; // 0x1a9            
            uint8_t _pad01aa[0x2]; // 0x1aa
            // m_leader has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_leader;
            char m_leader[0x4]; // 0x1ac            
            float m_followTimestamp; // 0x1b0            
            float m_allowAutoFollowTime; // 0x1b4            
            source2sdk::server::CountdownTimer m_hurryTimer; // 0x1b8            
            source2sdk::server::CountdownTimer m_alertTimer; // 0x1d0            
            source2sdk::server::CountdownTimer m_sneakTimer; // 0x1e8            
            source2sdk::server::CountdownTimer m_panicTimer; // 0x200            
            uint8_t _pad0218[0x2b8]; // 0x218
            float m_stateTimestamp; // 0x4d0            
            bool m_isAttacking; // 0x4d4            
            bool m_isOpeningDoor; // 0x4d5            
            uint8_t _pad04d6[0x6]; // 0x4d6
            // m_taskEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_taskEntity;
            char m_taskEntity[0x4]; // 0x4dc            
            uint8_t _pad04e0[0xc]; // 0x4e0
            Vector m_goalPosition; // 0x4ec            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x4]; // 0x4f8            
            // m_avoid has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_avoid;
            char m_avoid[0x4]; // 0x4fc            
            float m_avoidTimestamp; // 0x500            
            bool m_isStopping; // 0x504            
            bool m_hasVisitedEnemySpawn; // 0x505            
            uint8_t _pad0506[0x2]; // 0x506
            source2sdk::server::IntervalTimer m_stillTimer; // 0x508            
            bool m_bEyeAnglesUnderPathFinderControl; // 0x518            
            uint8_t _pad0519[0x58ff]; // 0x519
            std::int32_t m_pathIndex; // 0x5e18            
            source2sdk::entity2::GameTime_t m_areaEnteredTimestamp; // 0x5e1c            
            source2sdk::server::CountdownTimer m_repathTimer; // 0x5e20            
            source2sdk::server::CountdownTimer m_avoidFriendTimer; // 0x5e38            
            bool m_isFriendInTheWay; // 0x5e50            
            uint8_t _pad5e51[0x7]; // 0x5e51
            source2sdk::server::CountdownTimer m_politeTimer; // 0x5e58            
            bool m_isWaitingBehindFriend; // 0x5e70            
            uint8_t _pad5e71[0x2b]; // 0x5e71
            float m_pathLadderEnd; // 0x5e9c            
            uint8_t _pad5ea0[0x48]; // 0x5ea0
            source2sdk::server::CountdownTimer m_mustRunTimer; // 0x5ee8            
            source2sdk::server::CountdownTimer m_waitTimer; // 0x5f00            
            source2sdk::server::CountdownTimer m_updateTravelDistanceTimer; // 0x5f18            
            float m_playerTravelDistance[64]; // 0x5f30            
            std::uint8_t m_travelDistancePhase; // 0x6030            
            uint8_t _pad6031[0x197]; // 0x6031
            std::uint8_t m_hostageEscortCount; // 0x61c8            
            uint8_t _pad61c9[0x3]; // 0x61c9
            float m_hostageEscortCountTimestamp; // 0x61cc            
            std::int32_t m_desiredTeam; // 0x61d0            
            bool m_hasJoined; // 0x61d4            
            bool m_isWaitingForHostage; // 0x61d5            
            uint8_t _pad61d6[0x2]; // 0x61d6
            source2sdk::server::CountdownTimer m_inhibitWaitingForHostageTimer; // 0x61d8            
            source2sdk::server::CountdownTimer m_waitForHostageTimer; // 0x61f0            
            Vector m_noisePosition; // 0x6208            
            float m_noiseTravelDistance; // 0x6214            
            float m_noiseTimestamp; // 0x6218            
            uint8_t _pad621c[0x4]; // 0x621c
            source2sdk::server::CCSPlayerPawn* m_noiseSource; // 0x6220            
            uint8_t _pad6228[0x10]; // 0x6228
            source2sdk::server::CountdownTimer m_noiseBendTimer; // 0x6238            
            Vector m_bentNoisePosition; // 0x6250            
            bool m_bendNoisePositionValid; // 0x625c            
            uint8_t _pad625d[0x3]; // 0x625d
            float m_lookAroundStateTimestamp; // 0x6260            
            float m_lookAheadAngle; // 0x6264            
            float m_forwardAngle; // 0x6268            
            float m_inhibitLookAroundTimestamp; // 0x626c            
            uint8_t _pad6270[0x4]; // 0x6270
            Vector m_lookAtSpot; // 0x6274            
            uint8_t _pad6280[0x4]; // 0x6280
            float m_lookAtSpotDuration; // 0x6284            
            float m_lookAtSpotTimestamp; // 0x6288            
            float m_lookAtSpotAngleTolerance; // 0x628c            
            bool m_lookAtSpotClearIfClose; // 0x6290            
            bool m_lookAtSpotAttack; // 0x6291            
            uint8_t _pad6292[0x6]; // 0x6292
            char* m_lookAtDesc; // 0x6298            
            float m_peripheralTimestamp; // 0x62a0            
            uint8_t _pad62a4[0x184]; // 0x62a4
            std::uint8_t m_approachPointCount; // 0x6428            
            uint8_t _pad6429[0x3]; // 0x6429
            Vector m_approachPointViewPosition; // 0x642c            
            source2sdk::server::IntervalTimer m_viewSteadyTimer; // 0x6438            
            uint8_t _pad6448[0x8]; // 0x6448
            source2sdk::server::CountdownTimer m_tossGrenadeTimer; // 0x6450            
            uint8_t _pad6468[0x8]; // 0x6468
            source2sdk::server::CountdownTimer m_isAvoidingGrenade; // 0x6470            
            uint8_t _pad6488[0x8]; // 0x6488
            float m_spotCheckTimestamp; // 0x6490            
            uint8_t _pad6494[0x404]; // 0x6494
            std::int32_t m_checkedHidingSpotCount; // 0x6898            
            float m_lookPitch; // 0x689c            
            float m_lookPitchVel; // 0x68a0            
            float m_lookYaw; // 0x68a4            
            float m_lookYawVel; // 0x68a8            
            Vector m_targetSpot; // 0x68ac            
            Vector m_targetSpotVelocity; // 0x68b8            
            Vector m_targetSpotPredicted; // 0x68c4            
            QAngle m_aimError; // 0x68d0            
            QAngle m_aimGoal; // 0x68dc            
            source2sdk::entity2::GameTime_t m_targetSpotTime; // 0x68e8            
            float m_aimFocus; // 0x68ec            
            float m_aimFocusInterval; // 0x68f0            
            source2sdk::entity2::GameTime_t m_aimFocusNextUpdate; // 0x68f4            
            uint8_t _pad68f8[0x8]; // 0x68f8
            source2sdk::server::CountdownTimer m_ignoreEnemiesTimer; // 0x6900            
            // m_enemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_enemy;
            char m_enemy[0x4]; // 0x6918            
            bool m_isEnemyVisible; // 0x691c            
            std::uint8_t m_visibleEnemyParts; // 0x691d            
            uint8_t _pad691e[0x2]; // 0x691e
            Vector m_lastEnemyPosition; // 0x6920            
            float m_lastSawEnemyTimestamp; // 0x692c            
            float m_firstSawEnemyTimestamp; // 0x6930            
            float m_currentEnemyAcquireTimestamp; // 0x6934            
            float m_enemyDeathTimestamp; // 0x6938            
            float m_friendDeathTimestamp; // 0x693c            
            bool m_isLastEnemyDead; // 0x6940            
            uint8_t _pad6941[0x3]; // 0x6941
            std::int32_t m_nearbyEnemyCount; // 0x6944            
            uint8_t _pad6948[0x208]; // 0x6948
            // m_bomber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_bomber;
            char m_bomber[0x4]; // 0x6b50            
            std::int32_t m_nearbyFriendCount; // 0x6b54            
            // m_closestVisibleFriend has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_closestVisibleFriend;
            char m_closestVisibleFriend[0x4]; // 0x6b58            
            // m_closestVisibleHumanFriend has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_closestVisibleHumanFriend;
            char m_closestVisibleHumanFriend[0x4]; // 0x6b5c            
            source2sdk::server::IntervalTimer m_attentionInterval; // 0x6b60            
            // m_attacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_attacker;
            char m_attacker[0x4]; // 0x6b70            
            float m_attackedTimestamp; // 0x6b74            
            source2sdk::server::IntervalTimer m_burnedByFlamesTimer; // 0x6b78            
            std::int32_t m_lastVictimID; // 0x6b88            
            bool m_isAimingAtEnemy; // 0x6b8c            
            bool m_isRapidFiring; // 0x6b8d            
            uint8_t _pad6b8e[0x2]; // 0x6b8e
            source2sdk::server::IntervalTimer m_equipTimer; // 0x6b90            
            source2sdk::server::CountdownTimer m_zoomTimer; // 0x6ba0            
            source2sdk::entity2::GameTime_t m_fireWeaponTimestamp; // 0x6bb8            
            uint8_t _pad6bbc[0x4]; // 0x6bbc
            source2sdk::server::CountdownTimer m_lookForWeaponsOnGroundTimer; // 0x6bc0            
            bool m_bIsSleeping; // 0x6bd8            
            bool m_isEnemySniperVisible; // 0x6bd9            
            uint8_t _pad6bda[0x6]; // 0x6bda
            source2sdk::server::CountdownTimer m_sawEnemySniperTimer; // 0x6be0            
            uint8_t _pad6bf8[0xa0]; // 0x6bf8
            std::uint8_t m_enemyQueueIndex; // 0x6c98            
            std::uint8_t m_enemyQueueCount; // 0x6c99            
            std::uint8_t m_enemyQueueAttendIndex; // 0x6c9a            
            bool m_isStuck; // 0x6c9b            
            source2sdk::entity2::GameTime_t m_stuckTimestamp; // 0x6c9c            
            Vector m_stuckSpot; // 0x6ca0            
            uint8_t _pad6cac[0x4]; // 0x6cac
            source2sdk::server::CountdownTimer m_wiggleTimer; // 0x6cb0            
            source2sdk::server::CountdownTimer m_stuckJumpTimer; // 0x6cc8            
            source2sdk::entity2::GameTime_t m_nextCleanupCheckTimestamp; // 0x6ce0            
            float m_avgVel[10]; // 0x6ce4            
            std::int32_t m_avgVelIndex; // 0x6d0c            
            std::int32_t m_avgVelCount; // 0x6d10            
            Vector m_lastOrigin; // 0x6d14            
            uint8_t _pad6d20[0x4]; // 0x6d20
            float m_lastRadioRecievedTimestamp; // 0x6d24            
            float m_lastRadioSentTimestamp; // 0x6d28            
            // m_radioSubject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_radioSubject;
            char m_radioSubject[0x4]; // 0x6d2c            
            Vector m_radioPosition; // 0x6d30            
            float m_voiceEndTimestamp; // 0x6d3c            
            uint8_t _pad6d40[0x8]; // 0x6d40
            std::int32_t m_lastValidReactionQueueFrame; // 0x6d48            
            uint8_t _pad6d4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSBot because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSBot) == 0x6d50);
    };
};
