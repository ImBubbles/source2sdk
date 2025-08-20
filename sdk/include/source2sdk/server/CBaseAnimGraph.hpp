#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct IChoreoServices;
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
        // Size: 0xa78
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
        class CBaseAnimGraph : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07e8[0x80]; // 0x7e8
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x868            
            uint8_t _pad0869[0x7]; // 0x869
            source2sdk::client::IChoreoServices* m_pChoreoServices; // 0x870            
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0x878            
            uint8_t _pad0879[0x3]; // 0x879
            float m_flMaxSlopeDistance; // 0x87c            
            Vector m_vLastSlopeCheckPos; // 0x880            
            bool m_bAnimationUpdateScheduled; // 0x88c            
            uint8_t _pad088d[0x3]; // 0x88d
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0x890            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0x89c            
            uint8_t _pad08a0[0x10]; // 0x8a0
            // metadata: MNetworkEnable
            source2sdk::server::PhysicsRagdollPose_t m_RagdollPose; // 0x8b0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0x8d8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0x8d9            
            uint8_t _pad08da[0x19e];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x860
            // void CBaseAnimGraphChoreoServicesThink; // 0x0
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // void InputBecomeRagdoll; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseAnimGraph) == 0xa78);
    };
};
