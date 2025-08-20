#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CConstantForceController.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x550
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CPhysForce : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04f0[0x8]; // 0x4f0
            CUtlSymbolLarge m_nameAttach; // 0x4f8            
            float m_force; // 0x500            
            float m_forceTime; // 0x504            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x4]; // 0x508            
            bool m_wasRestored; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            source2sdk::server::CConstantForceController m_integrator; // 0x510            
            
            // Datamap fields:
            // void m_pController; // 0x4f0
            // void InputActivate; // 0x0
            // void InputDeactivate; // 0x0
            // float InputForceScale; // 0x0
            // void CPhysForceForceOff; // 0x0
            // void CPhysForceInitialThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysForce) == 0x550);
    };
};
