#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"

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
        // Size: 0xb08
        // Has VTable
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimGraph
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0xa78            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0xaa0            
            float m_massScale; // 0xac8            
            float m_forceLimit; // 0xacc            
            float m_torqueLimit; // 0xad0            
            uint8_t _pad0ad4[0x4]; // 0xad4
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0xad8            
            bool m_bActive; // 0xaf0            
            bool m_bHasHitSomething; // 0xaf1            
            uint8_t _pad0af2[0x2]; // 0xaf2
            float m_flTotalMass; // 0xaf4            
            float m_flRadius; // 0xaf8            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0xafc            
            std::int32_t m_iMaxObjectsAttached; // 0xb00            
            uint8_t _pad0b04[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0xb08);
    };
};
