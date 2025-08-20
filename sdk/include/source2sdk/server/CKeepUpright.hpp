#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
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
        // Size: 0x530
        // Has VTable
        #pragma pack(push, 1)
        class CKeepUpright : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04f0[0x8]; // 0x4f0
            Vector m_worldGoalAxis; // 0x4f8            
            Vector m_localTestAxis; // 0x504            
            uint8_t _pad0510[0x8]; // 0x510
            CUtlSymbolLarge m_nameAttach; // 0x518            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x4]; // 0x520            
            float m_angularLimit; // 0x524            
            bool m_bActive; // 0x528            
            bool m_bDampAllRotation; // 0x529            
            uint8_t _pad052a[0x6];
            
            // Datamap fields:
            // void m_pController; // 0x510
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // float InputSetAngularLimit; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CKeepUpright because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CKeepUpright) == 0x530);
    };
};
