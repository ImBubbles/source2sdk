#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x610
        // Has VTable
        #pragma pack(push, 1)
        class CTestPulseIO : public source2sdk::server::CLogicalEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnVariantVoid; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnVariantBool; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnVariantInt; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnVariantFloat; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnVariantString; // 0x590            
            source2sdk::entity2::CEntityIOOutput m_OnVariantColor; // 0x5b8            
            source2sdk::entity2::CEntityIOOutput m_OnVariantVector; // 0x5e0            
            bool m_bAllowEmptyInputs; // 0x608            
            uint8_t _pad0609[0x7];
            
            // Datamap fields:
            // void InputVariantVoid; // 0x0
            // bool InputVariantBool; // 0x0
            // int32_t InputVariantInt; // 0x0
            // float InputVariantFloat; // 0x0
            // CUtlSymbolLarge InputVariantString; // 0x0
            // Color InputVariantColor; // 0x0
            // Vector InputVariantVector; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTestPulseIO because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTestPulseIO) == 0x610);
    };
};
