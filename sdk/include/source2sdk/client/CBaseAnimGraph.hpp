#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"

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
        // Size: 0x1168
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0ec0[0x80]; // 0xec0
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0xf40            
            uint8_t _pad0f41[0x1]; // 0xf41
            bool m_bSuppressAnimEventSounds; // 0xf42            
            uint8_t _pad0f43[0xd]; // 0xf43
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xf50            
            uint8_t _pad0f51[0x3]; // 0xf51
            float m_flMaxSlopeDistance; // 0xf54            
            Vector m_vLastSlopeCheckPos; // 0xf58            
            bool m_bAnimationUpdateScheduled; // 0xf64            
            uint8_t _pad0f65[0x3]; // 0xf65
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0xf68            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0xf74            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xf78            
            bool m_bBuiltRagdoll; // 0xf80            
            uint8_t _pad0f81[0x17]; // 0xf81
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xf98            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xfe0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0xfe1            
            uint8_t _pad0fe2[0xe]; // 0xfe2
            bool m_bHasAnimatedMaterialAttributes; // 0xff0            
            uint8_t _pad0ff1[0x177];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0xf38
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0x1168);
    };
};
