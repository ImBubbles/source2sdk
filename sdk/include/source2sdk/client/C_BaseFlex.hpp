#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Size: 0x1378
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad1168[0x10]; // 0x1168
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0x1178            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0x1190            
            uint8_t _pad119c[0x84]; // 0x119c
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0x1220            
            uint8_t _pad1221[0x5f]; // 0x1221
            std::int32_t m_nLastFlexUpdateFrameCount; // 0x1280            
            Vector m_CachedViewTarget; // 0x1284            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0x1290            
            std::int32_t m_iBlink; // 0x1294            
            float m_blinktime; // 0x1298            
            bool m_prevblinktoggle; // 0x129c            
            uint8_t _pad129d[0x3]; // 0x129d
            std::int32_t m_iJawOpen; // 0x12a0            
            float m_flJawOpenAmount; // 0x12a4            
            float m_flBlinkAmount; // 0x12a8            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0x12ac            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x12ad            
            bool m_bResetFlexWeightsOnModelChange; // 0x12ae            
            uint8_t _pad12af[0x19]; // 0x12af
            std::int32_t m_nEyeOcclusionRendererBone; // 0x12c8            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0x12cc            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0x12fc            
            uint8_t _pad1308[0x10]; // 0x1308
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0x1318            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0x1378);
    };
};
