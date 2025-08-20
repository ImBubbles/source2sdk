#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0x8c0
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
        class CPlayerSprayDecal : public source2sdk::server::CModelPointEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nUniqueID; // 0x7e8            
            // metadata: MNetworkEnable
            std::uint32_t m_unAccountID; // 0x7ec            
            // metadata: MNetworkEnable
            std::uint32_t m_unTraceID; // 0x7f0            
            // metadata: MNetworkEnable
            std::uint32_t m_rtGcTime; // 0x7f4            
            // metadata: MNetworkEnable
            Vector m_vecEndPos; // 0x7f8            
            // metadata: MNetworkEnable
            Vector m_vecStart; // 0x804            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0x810            
            // metadata: MNetworkEnable
            Vector m_vecNormal; // 0x81c            
            // metadata: MNetworkEnable
            std::int32_t m_nPlayer; // 0x828            
            // metadata: MNetworkEnable
            std::int32_t m_nEntity; // 0x82c            
            // metadata: MNetworkEnable
            std::int32_t m_nHitbox; // 0x830            
            // metadata: MNetworkEnable
            float m_flCreationTime; // 0x834            
            // metadata: MNetworkEnable
            std::int32_t m_nTintID; // 0x838            
            // metadata: MNetworkEnable
            std::uint8_t m_nVersion; // 0x83c            
            // metadata: MNetworkEnable
            std::uint8_t m_ubSignature[128]; // 0x83d            
            uint8_t _pad08bd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayerSprayDecal) == 0x8c0);
    };
};
