#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
        // Size: 0xe70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBombTicking"
        // static metadata: MNetworkVarNames "GameTime_t m_flC4Blow"
        // static metadata: MNetworkVarNames "int m_nBombSite"
        // static metadata: MNetworkVarNames "int m_nSourceSoundscapeHash"
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "bool m_bCannotBeDefused"
        // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
        // static metadata: MNetworkVarNames "bool m_bHasExploded"
        // static metadata: MNetworkVarNames "float m_flTimerLength"
        // static metadata: MNetworkVarNames "bool m_bBeingDefused"
        // static metadata: MNetworkVarNames "float m_flDefuseLength"
        // static metadata: MNetworkVarNames "GameTime_t m_flDefuseCountDown"
        // static metadata: MNetworkVarNames "bool m_bBombDefused"
        // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
        #pragma pack(push, 1)
        class CPlantedC4 : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0a78[0x8]; // 0xa78
            // metadata: MNetworkEnable
            bool m_bBombTicking; // 0xa80            
            uint8_t _pad0a81[0x3]; // 0xa81
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flC4Blow; // 0xa84            
            // metadata: MNetworkEnable
            std::int32_t m_nBombSite; // 0xa88            
            // metadata: MNetworkEnable
            std::int32_t m_nSourceSoundscapeHash; // 0xa8c            
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0xa90            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefused; // 0xd88            
            source2sdk::entity2::CEntityIOOutput m_OnBombBeginDefuse; // 0xdb0            
            source2sdk::entity2::CEntityIOOutput m_OnBombDefuseAborted; // 0xdd8            
            // metadata: MNetworkEnable
            bool m_bCannotBeDefused; // 0xe00            
            uint8_t _pad0e01[0x7]; // 0xe01
            // metadata: MNetworkEnable
            source2sdk::server::EntitySpottedState_t m_entitySpottedState; // 0xe08            
            std::int32_t m_nSpotRules; // 0xe20            
            bool m_bTrainingPlacedByPlayer; // 0xe24            
            // metadata: MNetworkEnable
            bool m_bHasExploded; // 0xe25            
            uint8_t _pad0e26[0x2]; // 0xe26
            // metadata: MNetworkEnable
            float m_flTimerLength; // 0xe28            
            // metadata: MNetworkEnable
            bool m_bBeingDefused; // 0xe2c            
            uint8_t _pad0e2d[0x7]; // 0xe2d
            source2sdk::entity2::GameTime_t m_fLastDefuseTime; // 0xe34            
            uint8_t _pad0e38[0x4]; // 0xe38
            // metadata: MNetworkEnable
            float m_flDefuseLength; // 0xe3c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flDefuseCountDown; // 0xe40            
            // metadata: MNetworkEnable
            bool m_bBombDefused; // 0xe44            
            uint8_t _pad0e45[0x3]; // 0xe45
            // metadata: MNetworkEnable
            // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hBombDefuser;
            char m_hBombDefuser[0x4]; // 0xe48            
            std::int32_t m_iProgressBarTime; // 0xe4c            
            bool m_bVoiceAlertFired; // 0xe50            
            bool m_bVoiceAlertPlayed[4]; // 0xe51            
            uint8_t _pad0e55[0x3]; // 0xe55
            source2sdk::entity2::GameTime_t m_flNextBotBeepTime; // 0xe58            
            uint8_t _pad0e5c[0x4]; // 0xe5c
            QAngle m_angCatchUpToPlayerEye; // 0xe60            
            source2sdk::entity2::GameTime_t m_flLastSpinDetectionTime; // 0xe6c            
            
            // Datamap fields:
            // void CPlantedC4C4Think; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlantedC4 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlantedC4) == 0xe70);
    };
};
