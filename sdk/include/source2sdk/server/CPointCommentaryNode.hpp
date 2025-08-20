#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0xb70
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
        // static metadata: MNetworkVarNames "string_t m_iszTitle"
        // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
        // static metadata: MNetworkVarNames "int m_iNodeNumber"
        // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
        // static metadata: MNetworkVarNames "bool m_bListenedTo"
        #pragma pack(push, 1)
        class CPointCommentaryNode : public source2sdk::server::CBaseAnimGraph
        {
        public:
            CUtlSymbolLarge m_iszPreCommands; // 0xa78            
            CUtlSymbolLarge m_iszPostCommands; // 0xa80            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0xa88            
            CUtlSymbolLarge m_iszViewTarget; // 0xa90            
            // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTarget;
            char m_hViewTarget[0x4]; // 0xa98            
            // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewTargetAngles;
            char m_hViewTargetAngles[0x4]; // 0xa9c            
            CUtlSymbolLarge m_iszViewPosition; // 0xaa0            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0xaa8            
            // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hViewPositionMover;
            char m_hViewPositionMover[0x4]; // 0xaac            
            bool m_bPreventMovement; // 0xab0            
            bool m_bUnderCrosshair; // 0xab1            
            bool m_bUnstoppable; // 0xab2            
            uint8_t _pad0ab3[0x1]; // 0xab3
            source2sdk::entity2::GameTime_t m_flFinishedTime; // 0xab4            
            Vector m_vecFinishOrigin; // 0xab8            
            QAngle m_vecOriginalAngles; // 0xac4            
            QAngle m_vecFinishAngles; // 0xad0            
            bool m_bPreventChangesWhileMoving; // 0xadc            
            bool m_bDisabled; // 0xadd            
            uint8_t _pad0ade[0x2]; // 0xade
            Vector m_vecTeleportOrigin; // 0xae0            
            source2sdk::entity2::GameTime_t m_flAbortedPlaybackAt; // 0xaec            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xaf0            
            source2sdk::entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xb18            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xb40            
            uint8_t _pad0b41[0x3]; // 0xb41
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xb44            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0xb48            
            uint8_t _pad0b4c[0x4]; // 0xb4c
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0xb50            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0xb58            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0xb60            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0xb64            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0xb68            
            uint8_t _pad0b69[0x7];
            
            // Datamap fields:
            // void InputStartCommentary; // 0x0
            // void InputStartUnstoppableCommentary; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CPointCommentaryNodeSpinThink; // 0x0
            // void CPointCommentaryNodeUpdateViewThink; // 0x0
            // void CPointCommentaryNodeUpdateViewPostThink; // 0x0
            // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointCommentaryNode) == 0xb70);
    };
};
