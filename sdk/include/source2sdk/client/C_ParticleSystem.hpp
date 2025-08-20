#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x1470
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByUserGroup "Origin"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
        // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
        // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
        // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFrozen"
        // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
        // static metadata: MNetworkVarNames "int m_nStopType"
        // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
        // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
        // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
        // static metadata: MNetworkVarNames "bool m_bNoSave"
        // static metadata: MNetworkVarNames "bool m_bNoFreeze"
        // static metadata: MNetworkVarNames "bool m_bNoRamp"
        #pragma pack(push, 1)
        class C_ParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_szSnapshotFileName[512]; // 0xec0            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x10c0            
            // metadata: MNetworkEnable
            bool m_bFrozen; // 0x10c1            
            uint8_t _pad10c2[0x2]; // 0x10c2
            // metadata: MNetworkEnable
            float m_flFreezeTransitionDuration; // 0x10c4            
            // metadata: MNetworkEnable
            std::int32_t m_nStopType; // 0x10c8            
            // metadata: MNetworkEnable
            bool m_bAnimateDuringGameplayPause; // 0x10cc            
            uint8_t _pad10cd[0x3]; // 0x10cd
            // metadata: MNetworkEnable
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x8]; // 0x10d0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x10d8            
            // metadata: MNetworkEnable
            float m_flPreSimTime; // 0x10dc            
            // metadata: MNetworkEnable
            Vector m_vServerControlPoints[4]; // 0x10e0            
            // metadata: MNetworkEnable
            std::uint8_t m_iServerControlPointAssignments[4]; // 0x1110            
            // metadata: MNetworkEnable
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x100]; // 0x1114            
            // metadata: MNetworkEnable
            bool m_bNoSave; // 0x1214            
            // metadata: MNetworkEnable
            bool m_bNoFreeze; // 0x1215            
            // metadata: MNetworkEnable
            bool m_bNoRamp; // 0x1216            
            bool m_bStartActive; // 0x1217            
            CUtlSymbolLarge m_iszEffectName; // 0x1218            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1220            
            std::int32_t m_nDataCP; // 0x1420            
            Vector m_vecDataCPValue; // 0x1424            
            std::int32_t m_nTintCP; // 0x1430            
            Color m_clrTint; // 0x1434            
            uint8_t _pad1438[0x20]; // 0x1438
            bool m_bOldActive; // 0x1458            
            bool m_bOldFrozen; // 0x1459            
            uint8_t _pad145a[0x16];
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // float InputFreeze; // 0x0
            // float InputThaw; // 0x0
            // void InputStopEndCap; // 0x0
            // void InputDestroy; // 0x0
            // CUtlSymbolLarge InputSetControlPoint; // 0x0
            // float InputSetDataControlPointX; // 0x0
            // float InputSetDataControlPointY; // 0x0
            // float InputSetDataControlPointZ; // 0x0
            // void C_ParticleSystemStartParticleSystemThink; // 0x0
            // CUtlString cpoint%d_value[64]; // 0x7fffffff
            // void m_pEffect; // 0x1438
            // void m_iOldEffectIndex; // 0x1460
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0x1470);
    };
};
