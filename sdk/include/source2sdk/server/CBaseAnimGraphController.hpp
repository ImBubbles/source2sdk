#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
#include "source2sdk/server/CAnimGraphNetworkedVariables.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x600
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
        // static metadata: MNetworkVarNames "HSequence m_hSequence"
        // static metadata: MNetworkVarNames "GameTime_t m_flSeqStartTime"
        // static metadata: MNetworkVarNames "float m_flSeqFixedCycle"
        // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hGraphDefinitionAG2"
        // static metadata: MNetworkVarNames "bool m_bIsUsingAG2"
        // static metadata: MNetworkVarNames "uint8 m_serializedPoseRecipeAG2"
        // static metadata: MNetworkVarNames "int m_nSerializePoseRecipeSizeAG2"
        // static metadata: MNetworkVarNames "uint8 m_nGraphCreationFlagsAG2"
        // static metadata: MNetworkVarNames "int m_nServerGraphDefReloadCountAG2"
        #pragma pack(push, 1)
        class CBaseAnimGraphController : public source2sdk::client::CSkeletonAnimationController
        {
        public:
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MNetworkEnable
            source2sdk::server::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18            
            bool m_bSequenceFinished; // 0x220            
            uint8_t _pad0221[0x3]; // 0x221
            float m_flSoundSyncTime; // 0x224            
            std::uint32_t m_nActiveIKChainMask; // 0x228            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x22c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x230            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x234            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x238            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "-4,000000"
            // metadata: MNetworkMaxValue "12,000000"
            // metadata: MNetworkEncodeFlags "5"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x23c            
            uint8_t _pad0244[0x4]; // 0x244
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x248            
            uint8_t _pad0249[0x1]; // 0x249
            bool m_bNetworkedAnimationInputsChanged; // 0x24a            
            bool m_bNetworkedSequenceChanged; // 0x24b            
            bool m_bLastUpdateSkipped; // 0x24c            
            uint8_t _pad024d[0x3]; // 0x24d
            source2sdk::entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x250            
            uint8_t _pad0254[0x334]; // 0x254
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x588            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            bool m_bIsUsingAG2; // 0x590            
            uint8_t _pad0591[0x7]; // 0x591
            // metadata: MNetworkEnable
            // m_serializedPoseRecipeAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_serializedPoseRecipeAG2;
            char m_serializedPoseRecipeAG2[0x18]; // 0x598            
            // metadata: MNetworkEnable
            std::int32_t m_nSerializePoseRecipeSizeAG2; // 0x5b0            
            // metadata: MNetworkEnable
            std::uint8_t m_nGraphCreationFlagsAG2; // 0x5b4            
            uint8_t _pad05b5[0x43]; // 0x5b5
            // metadata: MNetworkEnable
            std::int32_t m_nServerGraphDefReloadCountAG2; // 0x5f8            
            uint8_t _pad05fc[0x4];
            
            // Datamap fields:
            // void m_pAnimGraphInstance; // 0x4f0
            // float m_flCachedSequenceCycleRate; // 0x244
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraphController) == 0x600);
    };
};
