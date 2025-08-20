#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x560
        // Has VTable
        #pragma pack(push, 1)
        class CEnvInstructorHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4f0            
            CUtlSymbolLarge m_iszReplace_Key; // 0x4f8            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x500            
            std::int32_t m_iTimeout; // 0x508            
            std::int32_t m_iDisplayLimit; // 0x50c            
            CUtlSymbolLarge m_iszIcon_Onscreen; // 0x510            
            CUtlSymbolLarge m_iszIcon_Offscreen; // 0x518            
            CUtlSymbolLarge m_iszCaption; // 0x520            
            CUtlSymbolLarge m_iszActivatorCaption; // 0x528            
            Color m_Color; // 0x530            
            float m_fIconOffset; // 0x534            
            float m_fRange; // 0x538            
            std::uint8_t m_iPulseOption; // 0x53c            
            std::uint8_t m_iAlphaOption; // 0x53d            
            std::uint8_t m_iShakeOption; // 0x53e            
            bool m_bStatic; // 0x53f            
            bool m_bNoOffscreen; // 0x540            
            bool m_bForceCaption; // 0x541            
            uint8_t _pad0542[0x2]; // 0x542
            std::int32_t m_iInstanceType; // 0x544            
            bool m_bSuppressRest; // 0x548            
            uint8_t _pad0549[0x7]; // 0x549
            CUtlSymbolLarge m_iszBinding; // 0x550            
            bool m_bAllowNoDrawTarget; // 0x558            
            bool m_bAutoStart; // 0x559            
            bool m_bLocalPlayerOnly; // 0x55a            
            uint8_t _pad055b[0x5];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorHint) == 0x560);
    };
};
