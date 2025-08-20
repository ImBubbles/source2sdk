#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Size: 0xd18
        // Has VTable
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x9b8            
            Vector m_flPosition; // 0x9d0            
            float m_flCenterSize; // 0x9dc            
            float m_flMinVal; // 0x9e0            
            float m_flMaxVal; // 0x9e4            
            CUtlSymbolLarge m_opvarName; // 0x9e8            
            CUtlSymbolLarge m_stackName; // 0x9f0            
            CUtlSymbolLarge m_operatorName; // 0x9f8            
            bool m_bVolIs2D; // 0xa00            
            char m_opvarNameChar[256]; // 0xa01            
            char m_stackNameChar[256]; // 0xb01            
            char m_operatorNameChar[256]; // 0xc01            
            uint8_t _pad0d01[0x3]; // 0xd01
            Vector m_VecNormPos; // 0xd04            
            float m_flNormCenterSize; // 0xd10            
            uint8_t _pad0d14[0x4];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
            // void m_opvarNameChar; // 0xa01
            // void m_stackNameChar; // 0xb01
            // void m_operatorNameChar; // 0xc01
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xd18);
    };
};
