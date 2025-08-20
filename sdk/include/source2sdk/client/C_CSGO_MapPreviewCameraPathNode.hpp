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
        // Size: 0x648
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGO_MapPreviewCameraPathNode : public source2sdk::client::C_BaseEntity
        {
        public:
            CUtlSymbolLarge m_szParentPathUniqueID; // 0x5f8            
            std::int32_t m_nPathIndex; // 0x600            
            Vector m_vInTangentLocal; // 0x604            
            Vector m_vOutTangentLocal; // 0x610            
            float m_flFOV; // 0x61c            
            float m_flCameraSpeed; // 0x620            
            float m_flEaseIn; // 0x624            
            float m_flEaseOut; // 0x628            
            Vector m_vInTangentWorld; // 0x62c            
            Vector m_vOutTangentWorld; // 0x638            
            uint8_t _pad0644[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPathNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_MapPreviewCameraPathNode) == 0x648);
    };
};
