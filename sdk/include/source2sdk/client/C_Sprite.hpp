#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0xf38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HMaterialStrong m_hSpriteMaterial"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hAttachedToEntity"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachment"
        // static metadata: MNetworkVarNames "float32 m_flSpriteFramerate"
        // static metadata: MNetworkVarNames "float32 m_flFrame"
        // static metadata: MNetworkVarNames "uint32 m_nBrightness"
        // static metadata: MNetworkVarNames "float32 m_flBrightnessDuration"
        // static metadata: MNetworkVarNames "float32 m_flSpriteScale"
        // static metadata: MNetworkVarNames "float32 m_flScaleDuration"
        // static metadata: MNetworkVarNames "bool m_bWorldSpaceScale"
        // static metadata: MNetworkVarNames "float32 m_flGlowProxySize"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        #pragma pack(push, 1)
        class C_Sprite : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0xec0            
            // metadata: MNetworkEnable
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0xec8            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0xecc            
            uint8_t _pad0ecd[0x3]; // 0xecd
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "60,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flSpriteFramerate; // 0xed0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFrame; // 0xed4            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0xed8            
            uint8_t _pad0edc[0xc]; // 0xedc
            // metadata: MNetworkEnable
            std::uint32_t m_nBrightness; // 0xee8            
            // metadata: MNetworkEnable
            float m_flBrightnessDuration; // 0xeec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
            float m_flSpriteScale; // 0xef0            
            // metadata: MNetworkEnable
            float m_flScaleDuration; // 0xef4            
            // metadata: MNetworkEnable
            bool m_bWorldSpaceScale; // 0xef8            
            uint8_t _pad0ef9[0x3]; // 0xef9
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "6"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flGlowProxySize; // 0xefc            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0xf00            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0xf04            
            float m_flMaxFrame; // 0xf08            
            float m_flStartScale; // 0xf0c            
            float m_flDestScale; // 0xf10            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0xf14            
            std::int32_t m_nStartBrightness; // 0xf18            
            std::int32_t m_nDestBrightness; // 0xf1c            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0xf20            
            uint8_t _pad0f24[0xc]; // 0xf24
            std::int32_t m_nSpriteWidth; // 0xf30            
            std::int32_t m_nSpriteHeight; // 0xf34            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Sprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Sprite) == 0xf38);
    };
};
