#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1430
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class C_DynamicProp : public source2sdk::client::C_BreakableProp
        {
        public:
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0x1310            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0x1311            
            uint8_t _pad1312[0x6]; // 0x1312
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x1318            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0x1340            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1368            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x1390            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0x13b8            
            CUtlSymbolLarge m_iszIdleAnim; // 0x13e0            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0x13e8            
            bool m_bRandomizeCycle; // 0x13ec            
            bool m_bStartDisabled; // 0x13ed            
            bool m_bFiredStartEndOutput; // 0x13ee            
            bool m_bForceNpcExclude; // 0x13ef            
            bool m_bCreateNonSolid; // 0x13f0            
            bool m_bIsOverrideProp; // 0x13f1            
            uint8_t _pad13f2[0x2]; // 0x13f2
            std::int32_t m_iInitialGlowState; // 0x13f4            
            std::int32_t m_nGlowRange; // 0x13f8            
            std::int32_t m_nGlowRangeMin; // 0x13fc            
            Color m_glowColor; // 0x1400            
            std::int32_t m_nGlowTeam; // 0x1404            
            std::int32_t m_iCachedFrameCount; // 0x1408            
            Vector m_vecCachedRenderMins; // 0x140c            
            Vector m_vecCachedRenderMaxs; // 0x1418            
            uint8_t _pad1424[0xc];
            
            // Datamap fields:
            // CUtlSymbolLarge StartingAnim; // 0x7fffffff
            // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
            // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // CUtlSymbolLarge InputSetAnimation; // 0x0
            // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnableCollision; // 0x0
            // void InputDisableCollision; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // void InputStartGlowing; // 0x0
            // void InputStopGlowing; // 0x0
            // Vector InputSetGlowOverride; // 0x0
            // int32_t InputSetGlowRange; // 0x0
            // void C_DynamicPropAnimThink; // 0x0
            // int32_t health; // 0x7fffffff
            // bool HoldAnimation; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DynamicProp) == 0x1430);
    };
};
