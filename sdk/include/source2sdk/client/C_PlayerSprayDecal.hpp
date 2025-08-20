#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerSprayDecalRenderHelper.hpp"
#include "source2sdk/client/C_ModelPointEntity.hpp"

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
        // Size: 0xfd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nUniqueID"
        // static metadata: MNetworkVarNames "uint32 m_unAccountID"
        // static metadata: MNetworkVarNames "uint32 m_unTraceID"
        // static metadata: MNetworkVarNames "uint32 m_rtGcTime"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        // static metadata: MNetworkVarNames "Vector m_vecStart"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "Vector m_vecNormal"
        // static metadata: MNetworkVarNames "int m_nPlayer"
        // static metadata: MNetworkVarNames "int m_nEntity"
        // static metadata: MNetworkVarNames "int m_nHitbox"
        // static metadata: MNetworkVarNames "float m_flCreationTime"
        // static metadata: MNetworkVarNames "int m_nTintID"
        // static metadata: MNetworkVarNames "uint8 m_nVersion"
        // static metadata: MNetworkVarNames "uint8 m_ubSignature"
        #pragma pack(push, 1)
        class C_PlayerSprayDecal : public source2sdk::client::C_ModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nUniqueID; // 0xec0            
            // metadata: MNetworkEnable
            std::uint32_t m_unAccountID; // 0xec4            
            // metadata: MNetworkEnable
            std::uint32_t m_unTraceID; // 0xec8            
            // metadata: MNetworkEnable
            std::uint32_t m_rtGcTime; // 0xecc            
            // metadata: MNetworkEnable
            Vector m_vecEndPos; // 0xed0            
            // metadata: MNetworkEnable
            Vector m_vecStart; // 0xedc            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0xee8            
            // metadata: MNetworkEnable
            Vector m_vecNormal; // 0xef4            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayer; // 0xf00            
            // metadata: MNetworkEnable
            std::int32_t m_nEntity; // 0xf04            
            // metadata: MNetworkEnable
            std::int32_t m_nHitbox; // 0xf08            
            // metadata: MNetworkEnable
            float m_flCreationTime; // 0xf0c            
            // metadata: MNetworkEnable
            std::int32_t m_nTintID; // 0xf10            
            // metadata: MNetworkEnable
            std::uint8_t m_nVersion; // 0xf14            
            // metadata: MNetworkEnable
            std::uint8_t m_ubSignature[128]; // 0xf15            
            uint8_t _pad0f95[0xb]; // 0xf95
            source2sdk::client::CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xfa0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerSprayDecal) == 0xfd0);
    };
};
