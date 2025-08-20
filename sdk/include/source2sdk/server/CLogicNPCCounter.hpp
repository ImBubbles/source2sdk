#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x830
        // Has VTable
        #pragma pack(push, 1)
        class CLogicNPCCounter : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMinCountAll; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCountAll; // 0x518            
            // m_OnFactorAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactorAll;
            char m_OnFactorAll[0x28]; // 0x540            
            // m_OnMinPlayerDistAll has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDistAll;
            char m_OnMinPlayerDistAll[0x28]; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_1; // 0x590            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_1; // 0x5b8            
            // m_OnFactor_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_1;
            char m_OnFactor_1[0x28]; // 0x5e0            
            // m_OnMinPlayerDist_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_1;
            char m_OnMinPlayerDist_1[0x28]; // 0x608            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_2; // 0x630            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_2; // 0x658            
            // m_OnFactor_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_2;
            char m_OnFactor_2[0x28]; // 0x680            
            // m_OnMinPlayerDist_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_2;
            char m_OnMinPlayerDist_2[0x28]; // 0x6a8            
            source2sdk::entity2::CEntityIOOutput m_OnMinCount_3; // 0x6d0            
            source2sdk::entity2::CEntityIOOutput m_OnMaxCount_3; // 0x6f8            
            // m_OnFactor_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnFactor_3;
            char m_OnFactor_3[0x28]; // 0x720            
            // m_OnMinPlayerDist_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnMinPlayerDist_3;
            char m_OnMinPlayerDist_3[0x28]; // 0x748            
            CEntityHandle m_hSource; // 0x770            
            uint8_t _pad0774[0x4]; // 0x774
            CUtlSymbolLarge m_iszSourceEntityName; // 0x778            
            float m_flDistanceMax; // 0x780            
            bool m_bDisabled; // 0x784            
            uint8_t _pad0785[0x3]; // 0x785
            std::int32_t m_nMinCountAll; // 0x788            
            std::int32_t m_nMaxCountAll; // 0x78c            
            std::int32_t m_nMinFactorAll; // 0x790            
            std::int32_t m_nMaxFactorAll; // 0x794            
            uint8_t _pad0798[0x8]; // 0x798
            CUtlSymbolLarge m_iszNPCClassname_1; // 0x7a0            
            std::int32_t m_nNPCState_1; // 0x7a8            
            bool m_bInvertState_1; // 0x7ac            
            uint8_t _pad07ad[0x3]; // 0x7ad
            std::int32_t m_nMinCount_1; // 0x7b0            
            std::int32_t m_nMaxCount_1; // 0x7b4            
            std::int32_t m_nMinFactor_1; // 0x7b8            
            std::int32_t m_nMaxFactor_1; // 0x7bc            
            uint8_t _pad07c0[0x4]; // 0x7c0
            float m_flDefaultDist_1; // 0x7c4            
            CUtlSymbolLarge m_iszNPCClassname_2; // 0x7c8            
            std::int32_t m_nNPCState_2; // 0x7d0            
            bool m_bInvertState_2; // 0x7d4            
            uint8_t _pad07d5[0x3]; // 0x7d5
            std::int32_t m_nMinCount_2; // 0x7d8            
            std::int32_t m_nMaxCount_2; // 0x7dc            
            std::int32_t m_nMinFactor_2; // 0x7e0            
            std::int32_t m_nMaxFactor_2; // 0x7e4            
            uint8_t _pad07e8[0x4]; // 0x7e8
            float m_flDefaultDist_2; // 0x7ec            
            CUtlSymbolLarge m_iszNPCClassname_3; // 0x7f0            
            std::int32_t m_nNPCState_3; // 0x7f8            
            bool m_bInvertState_3; // 0x7fc            
            uint8_t _pad07fd[0x3]; // 0x7fd
            std::int32_t m_nMinCount_3; // 0x800            
            std::int32_t m_nMaxCount_3; // 0x804            
            std::int32_t m_nMinFactor_3; // 0x808            
            std::int32_t m_nMaxFactor_3; // 0x80c            
            uint8_t _pad0810[0x4]; // 0x810
            float m_flDefaultDist_3; // 0x814            
            uint8_t _pad0818[0x18];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void CLogicNPCCounterSetNPCCounterThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicNPCCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicNPCCounter) == 0x830);
    };
};
