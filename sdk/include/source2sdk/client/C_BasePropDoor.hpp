#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"
#include "source2sdk/client/DoorState_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1470
        // Has VTable
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
        // static metadata: MNetworkVarNames "CHandle< C_BasePropDoor> m_hMaster"
        #pragma pack(push, 1)
        class C_BasePropDoor : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad1430[0x10]; // 0x1430
            // metadata: MNetworkEnable
            source2sdk::client::DoorState_t m_eDoorState; // 0x1440            
            bool m_modelChanged; // 0x1444            
            // metadata: MNetworkEnable
            bool m_bLocked; // 0x1445            
            // metadata: MNetworkEnable
            bool m_bNoNPCs; // 0x1446            
            uint8_t _pad1447[0x1]; // 0x1447
            // metadata: MNetworkEnable
            Vector m_closedPosition; // 0x1448            
            // metadata: MNetworkEnable
            QAngle m_closedAngles; // 0x1454            
            // metadata: MNetworkEnable
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BasePropDoor> m_hMaster;
            char m_hMaster[0x4]; // 0x1460            
            Vector m_vWhereToSetLightingOrigin; // 0x1464            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BasePropDoor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BasePropDoor) == 0x1470);
    };
};
