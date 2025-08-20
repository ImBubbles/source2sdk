#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoLadderDismount;
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
        // Size: 0x898
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
        // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
        // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
        // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
        // static metadata: MNetworkVarNames "bool m_bFakeLadder"
        #pragma pack(push, 1)
        class CFuncLadder : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecLadderDir; // 0x7e8            
            uint8_t _pad07f4[0x4]; // 0x7f4
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CInfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0x7f8            
            Vector m_vecLocalTop; // 0x810            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecPlayerMountPositionTop; // 0x81c            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecPlayerMountPositionBottom; // 0x828            
            // metadata: MNetworkEnable
            float m_flAutoRideSpeed; // 0x834            
            bool m_bDisabled; // 0x838            
            // metadata: MNetworkEnable
            bool m_bFakeLadder; // 0x839            
            bool m_bHasSlack; // 0x83a            
            uint8_t _pad083b[0x5]; // 0x83b
            CUtlSymbolLarge m_surfacePropName; // 0x840            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x848            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x870            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncLadder) == 0x898);
    };
};
