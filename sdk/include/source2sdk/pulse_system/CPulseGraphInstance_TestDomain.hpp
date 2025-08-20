#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_system
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x148
        // Has VTable
        // 
        // static metadata: MPulseInstanceDomainInfo
        // static metadata: MPulseDomainHookInfo
        // static metadata: MPulseDomainScopeInfo
        // static metadata: MPulseLibraryBindings
        // static metadata: MPulseDomainOptInFeatureTag
        // static metadata: MPulseDomainOptInVariableKeysSource
        // static metadata: MPulseDomainDebuggerCanCreateInstance
        #pragma pack(push, 1)
        class CPulseGraphInstance_TestDomain : public source2sdk::pulse_runtime_lib::CBasePulseGraphInstance
        {
        public:
            uint8_t _pad0110[0x8]; // 0x110
            bool m_bIsRunningUnitTests; // 0x118            
            bool m_bExplicitTimeStepping; // 0x119            
            bool m_bExpectingToDestroyWithYieldedCursors; // 0x11a            
            bool m_bQuietTracepoints; // 0x11b            
            bool m_bExpectingCursorTerminatedDueToMaxInstructions; // 0x11c            
            uint8_t _pad011d[0x3]; // 0x11d
            std::int32_t m_nCursorsTerminatedDueToMaxInstructions; // 0x120            
            std::int32_t m_nNextValidateIndex; // 0x124            
            // m_Tracepoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Tracepoints;
            char m_Tracepoints[0x18]; // 0x128            
            bool m_bTestYesOrNoPath; // 0x140            
            uint8_t _pad0141[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseGraphInstance_TestDomain because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::pulse_system::CPulseGraphInstance_TestDomain) == 0x148);
    };
};
