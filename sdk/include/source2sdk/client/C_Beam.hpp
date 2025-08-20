#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BeamClipStyle_t.hpp"
#include "source2sdk/client/BeamType_t.hpp"
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
        // Size: 0xf80
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "m_nModelIndex"
        // static metadata: MNetworkIncludeByName "m_nRenderFX"
        // static metadata: MNetworkIncludeByName "m_nRenderMode"
        // static metadata: MNetworkIncludeByName "m_clrRender"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkOverride "m_clrRender"
        // static metadata: MNetworkVarNames "float32 m_flFrameRate"
        // static metadata: MNetworkVarNames "float32 m_flHDRColorScale"
        // static metadata: MNetworkVarNames "uint8 m_nNumBeamEnts"
        // static metadata: MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
        // static metadata: MNetworkVarNames "HMaterialStrong m_nHaloIndex"
        // static metadata: MNetworkVarNames "BeamType_t m_nBeamType"
        // static metadata: MNetworkVarNames "uint32 m_nBeamFlags"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
        // static metadata: MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
        // static metadata: MNetworkVarNames "float32 m_fWidth"
        // static metadata: MNetworkVarNames "float32 m_fEndWidth"
        // static metadata: MNetworkVarNames "float32 m_fFadeLength"
        // static metadata: MNetworkVarNames "float32 m_fHaloScale"
        // static metadata: MNetworkVarNames "float32 m_fAmplitude"
        // static metadata: MNetworkVarNames "float32 m_fStartFrame"
        // static metadata: MNetworkVarNames "float32 m_fSpeed"
        // static metadata: MNetworkVarNames "float32 m_flFrame"
        // static metadata: MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
        // static metadata: MNetworkVarNames "bool m_bTurnedOff"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        #pragma pack(push, 1)
        class C_Beam : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "-25,000000"
            // metadata: MNetworkMaxValue "25,000000"
            // metadata: MNetworkEncodeFlags "2"
            float m_flFrameRate; // 0xec0            
            // metadata: MNetworkEnable
            float m_flHDRColorScale; // 0xec4            
            source2sdk::entity2::GameTime_t m_flFireTime; // 0xec8            
            float m_flDamage; // 0xecc            
            // metadata: MNetworkEnable
            std::uint8_t m_nNumBeamEnts; // 0xed0            
            uint8_t _pad0ed1[0x3]; // 0xed1
            std::int32_t m_queryHandleHalo; // 0xed4            
            uint8_t _pad0ed8[0x20]; // 0xed8
            // metadata: MNetworkEnable
            // m_hBaseMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial;
            char m_hBaseMaterial[0x8]; // 0xef8            
            // metadata: MNetworkEnable
            // m_nHaloIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex;
            char m_nHaloIndex[0x8]; // 0xf00            
            // metadata: MNetworkEnable
            source2sdk::client::BeamType_t m_nBeamType; // 0xf08            
            // metadata: MNetworkEnable
            std::uint32_t m_nBeamFlags; // 0xf0c            
            // metadata: MNetworkEnable
            // m_hAttachEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachEntity[10];
            char m_hAttachEntity[0x28]; // 0xf10            
            // metadata: MNetworkEnable
            source2sdk::modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0xf38            
            uint8_t _pad0f42[0x2]; // 0xf42
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "102,300003"
            // metadata: MNetworkEncodeFlags "2"
            float m_fWidth; // 0xf44            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "10"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "102,300003"
            // metadata: MNetworkEncodeFlags "2"
            float m_fEndWidth; // 0xf48            
            // metadata: MNetworkEnable
            float m_fFadeLength; // 0xf4c            
            // metadata: MNetworkEnable
            float m_fHaloScale; // 0xf50            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "64,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_fAmplitude; // 0xf54            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_fStartFrame; // 0xf58            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "100,000000"
            float m_fSpeed; // 0xf5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "20"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "256,000000"
            // metadata: MNetworkEncodeFlags "1"
            // metadata: MNetworkPriority "32"
            float m_flFrame; // 0xf60            
            // metadata: MNetworkEnable
            source2sdk::client::BeamClipStyle_t m_nClipStyle; // 0xf64            
            // metadata: MNetworkEnable
            bool m_bTurnedOff; // 0xf68            
            uint8_t _pad0f69[0x3]; // 0xf69
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecEndPos; // 0xf6c            
            // m_hEndEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEndEntity;
            char m_hEndEntity[0x4]; // 0xf78            
            uint8_t _pad0f7c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Beam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Beam) == 0xf80);
    };
};
