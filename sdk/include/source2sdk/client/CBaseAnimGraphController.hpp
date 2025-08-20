#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CAnimGraphNetworkedVariables.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18e0
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
            source2sdk::client::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18            
            bool m_bSequenceFinished; // 0x14a8            
            uint8_t _pad14a9[0x3]; // 0x14a9
            float m_flSoundSyncTime; // 0x14ac            
            std::uint32_t m_nActiveIKChainMask; // 0x14b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "minusone"
            // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::animationsystem::HSequence m_hSequence; // 0x14b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flSeqStartTime; // 0x14b8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            float m_flSeqFixedCycle; // 0x14bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            // metadata: MNetworkPriority "32"
            source2sdk::client::AnimLoopMode_t m_nAnimLoopMode; // 0x14c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "-4,000000"
            // metadata: MNetworkMaxValue "12,000000"
            // metadata: MNetworkEncodeFlags "5"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
            CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14c4            
            uint8_t _pad14cc[0x4]; // 0x14cc
            source2sdk::client::SequenceFinishNotifyState_t m_nNotifyState; // 0x14d0            
            uint8_t _pad14d1[0x1]; // 0x14d1
            bool m_bNetworkedAnimationInputsChanged; // 0x14d2            
            bool m_bNetworkedSequenceChanged; // 0x14d3            
            bool m_bLastUpdateSkipped; // 0x14d4            
            uint8_t _pad14d5[0x3]; // 0x14d5
            source2sdk::entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x14d8            
            uint8_t _pad14dc[0x384]; // 0x14dc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            // m_hGraphDefinitionAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinitionAG2;
            char m_hGraphDefinitionAG2[0x8]; // 0x1860            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "AG2_OnAnimGraphDefinitionOrModeChanged"
            bool m_bIsUsingAG2; // 0x1868            
            uint8_t _pad1869[0x7]; // 0x1869
            // metadata: MNetworkEnable
            // m_serializedPoseRecipeAG2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_serializedPoseRecipeAG2;
            char m_serializedPoseRecipeAG2[0x18]; // 0x1870            
            // metadata: MNetworkEnable
            std::int32_t m_nSerializePoseRecipeSizeAG2; // 0x1888            
            // metadata: MNetworkEnable
            std::uint8_t m_nGraphCreationFlagsAG2; // 0x188c            
            uint8_t _pad188d[0x47]; // 0x188d
            // metadata: MNetworkEnable
            std::int32_t m_nServerGraphDefReloadCountAG2; // 0x18d4            
            uint8_t _pad18d8[0x8];
            
            // Datamap fields:
            // void m_pAnimGraphInstance; // 0x1778
            // float m_flCachedSequenceCycleRate; // 0x14cc
            // void m_iv_AnimOpHistory; // 0x1810
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraphController) == 0x18e0);
    };
};
