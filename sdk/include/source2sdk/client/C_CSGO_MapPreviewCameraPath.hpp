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
        // Size: 0x680
        // Has VTable
        #pragma pack(push, 1)
        class C_CSGO_MapPreviewCameraPath : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flZFar; // 0x5f8            
            float m_flZNear; // 0x5fc            
            bool m_bLoop; // 0x600            
            bool m_bVerticalFOV; // 0x601            
            bool m_bConstantSpeed; // 0x602            
            uint8_t _pad0603[0x1]; // 0x603
            float m_flDuration; // 0x604            
            uint8_t _pad0608[0x40]; // 0x608
            float m_flPathLength; // 0x648            
            float m_flPathDuration; // 0x64c            
            uint8_t _pad0650[0x14]; // 0x650
            bool m_bDofEnabled; // 0x664            
            uint8_t _pad0665[0x3]; // 0x665
            float m_flDofNearBlurry; // 0x668            
            float m_flDofNearCrisp; // 0x66c            
            float m_flDofFarCrisp; // 0x670            
            float m_flDofFarBlurry; // 0x674            
            float m_flDofTiltToGround; // 0x678            
            uint8_t _pad067c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_MapPreviewCameraPath) == 0x680);
    };
};
