#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xfe0
        // Has VTable
        // Is Abstract
        // 
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_blinktoggle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
        // static metadata: MNetworkVarNames "bool m_bLocked"
        // static metadata: MNetworkVarNames "bool m_bNoNPCs"
        // static metadata: MNetworkVarNames "Vector m_closedPosition"
        // static metadata: MNetworkVarNames "QAngle m_closedAngles"
        // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class CBasePropDoor : public source2sdk::server::CDynamicProp
        {
        public:
            uint8_t _pad0d40[0x10]; // 0xd40
            float m_flAutoReturnDelay; // 0xd50            
            uint8_t _pad0d54[0x4]; // 0xd54
            // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePropDoor>> m_hDoorList;
            char m_hDoorList[0x18]; // 0xd58            
            std::int32_t m_nHardwareType; // 0xd70            
            bool m_bNeedsHardware; // 0xd74            
            uint8_t _pad0d75[0x3]; // 0xd75
            // metadata: MNetworkEnable
            source2sdk::client::DoorState_t m_eDoorState; // 0xd78            
            // metadata: MNetworkEnable
            bool m_bLocked; // 0xd7c            
            // metadata: MNetworkEnable
            bool m_bNoNPCs; // 0xd7d            
            uint8_t _pad0d7e[0x2]; // 0xd7e
            // metadata: MNetworkEnable
            Vector m_closedPosition; // 0xd80            
            // metadata: MNetworkEnable
            QAngle m_closedAngles; // 0xd8c            
            // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBlocker;
            char m_hBlocker[0x4]; // 0xd98            
            bool m_bFirstBlocked; // 0xd9c            
            uint8_t _pad0d9d[0x3]; // 0xd9d
            source2sdk::server::locksound_t m_ls; // 0xda0            
            bool m_bForceClosed; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            Vector m_vecLatchWorldPosition; // 0xdc4            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x4]; // 0xdd0            
            uint8_t _pad0dd4[0x14]; // 0xdd4
            CUtlSymbolLarge m_SoundMoving; // 0xde8            
            CUtlSymbolLarge m_SoundOpen; // 0xdf0            
            CUtlSymbolLarge m_SoundClose; // 0xdf8            
            CUtlSymbolLarge m_SoundLock; // 0xe00            
            CUtlSymbolLarge m_SoundUnlock; // 0xe08            
            CUtlSymbolLarge m_SoundLatch; // 0xe10            
            CUtlSymbolLarge m_SoundPound; // 0xe18            
            CUtlSymbolLarge m_SoundJiggle; // 0xe20            
            CUtlSymbolLarge m_SoundLockedAnim; // 0xe28            
            std::int32_t m_numCloseAttempts; // 0xe30            
            CUtlStringToken m_nPhysicsMaterial; // 0xe34            
            CUtlSymbolLarge m_SlaveName; // 0xe38            
            // metadata: MNetworkEnable
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0xe40            
            uint8_t _pad0e44[0x4]; // 0xe44
            source2sdk::entity2::CEntityIOOutput m_OnBlockedClosing; // 0xe48            
            source2sdk::entity2::CEntityIOOutput m_OnBlockedOpening; // 0xe70            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xe98            
            source2sdk::entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xec0            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0xee8            
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0xf10            
            source2sdk::entity2::CEntityIOOutput m_OnClose; // 0xf38            
            source2sdk::entity2::CEntityIOOutput m_OnOpen; // 0xf60            
            source2sdk::entity2::CEntityIOOutput m_OnLockedUse; // 0xf88            
            source2sdk::entity2::CEntityIOOutput m_OnAjarOpen; // 0xfb0            
            uint8_t _pad0fd8[0x8];
            
            // Datamap fields:
            // void m_hSoundMoving; // 0xdd4
            //  m_ls.sLockedSound; // 0xda8
            //  m_ls.sUnlockedSound; // 0xdb0
            // void InputOpen; // 0x0
            // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
            // float InputOpenAwayFromActivator; // 0x0
            // void InputClose; // 0x0
            // void InputToggle; // 0x0
            // void InputLock; // 0x0
            // void InputUnlock; // 0x0
            // void InputPlayerOpen; // 0x0
            // void InputPlayerClose; // 0x0
            // bool InputSetNoNPCs; // 0x0
            // void CBasePropDoorDoorOpenMoveDone; // 0x0
            // void CBasePropDoorDoorCloseMoveDone; // 0x0
            // void CBasePropDoorDoorAutoCloseThink; // 0x0
            // void CBasePropDoorDisableAreaPortalThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePropDoor) == 0xfe0);
    };
};
