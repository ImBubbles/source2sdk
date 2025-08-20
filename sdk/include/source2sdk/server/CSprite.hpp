#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x858
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
        class CSprite : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // m_hSpriteMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hSpriteMaterial;
            char m_hSpriteMaterial[0x8]; // 0x7e8            
            // metadata: MNetworkEnable
            // m_hAttachedToEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachedToEntity;
            char m_hAttachedToEntity[0x4]; // 0x7f0            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachment; // 0x7f4            
            uint8_t _pad07f5[0x3]; // 0x7f5
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "60,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flSpriteFramerate; // 0x7f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flFrame; // 0x7fc            
            source2sdk::entity2::GameTime_t m_flDieTime; // 0x800            
            uint8_t _pad0804[0xc]; // 0x804
            // metadata: MNetworkEnable
            std::uint32_t m_nBrightness; // 0x810            
            // metadata: MNetworkEnable
            float m_flBrightnessDuration; // 0x814            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnSpriteScaleChanged"
            float m_flSpriteScale; // 0x818            
            // metadata: MNetworkEnable
            float m_flScaleDuration; // 0x81c            
            // metadata: MNetworkEnable
            bool m_bWorldSpaceScale; // 0x820            
            uint8_t _pad0821[0x3]; // 0x821
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "6"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flGlowProxySize; // 0x824            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0x828            
            source2sdk::entity2::GameTime_t m_flLastTime; // 0x82c            
            float m_flMaxFrame; // 0x830            
            float m_flStartScale; // 0x834            
            float m_flDestScale; // 0x838            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart; // 0x83c            
            std::int32_t m_nStartBrightness; // 0x840            
            std::int32_t m_nDestBrightness; // 0x844            
            source2sdk::entity2::GameTime_t m_flBrightnessTimeStart; // 0x848            
            std::int32_t m_nSpriteWidth; // 0x84c            
            std::int32_t m_nSpriteHeight; // 0x850            
            uint8_t _pad0854[0x4];
            
            // Datamap fields:
            // void CSpriteAnimateThink; // 0x0
            // void CSpriteExpandThink; // 0x0
            // void CSpriteAnimateUntilDead; // 0x0
            // void CSpriteBeginFadeOutThink; // 0x0
            // void InputHideSprite; // 0x0
            // void InputShowSprite; // 0x0
            // void InputToggleSprite; // 0x0
            // float InputColorRedValue; // 0x0
            // float InputColorGreenValue; // 0x0
            // float InputColorBlueValue; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSprite because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSprite) == 0x858);
    };
};
