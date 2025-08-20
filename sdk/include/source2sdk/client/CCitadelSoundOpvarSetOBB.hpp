#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x660
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "string_t m_iszStackName"
        // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
        // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMaxs"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMins"
        // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMaxs"
        // static metadata: MNetworkVarNames "int m_nAABBDirection"
        #pragma pack(push, 1)
        class CCitadelSoundOpvarSetOBB : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f8[0x18]; // 0x5f8
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszStackName; // 0x610            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOperatorName; // 0x618            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszOpvarName; // 0x620            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMins; // 0x628            
            // metadata: MNetworkEnable
            Vector m_vDistanceInnerMaxs; // 0x634            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMins; // 0x640            
            // metadata: MNetworkEnable
            Vector m_vDistanceOuterMaxs; // 0x64c            
            // metadata: MNetworkEnable
            std::int32_t m_nAABBDirection; // 0x658            
            uint8_t _pad065c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSoundOpvarSetOBB) == 0x660);
    };
};
