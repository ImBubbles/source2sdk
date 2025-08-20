#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CGameSceneNodeHandle.hpp"
#include "source2sdk/client/CNetworkOriginCellCoordQuantizedVector.hpp"
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityInstance;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: true
        // Size: 0x180
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CGameSceneNodeHandle m_hParent"
        // static metadata: MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
        // static metadata: MNetworkVarNames "QAngle m_angRotation"
        // static metadata: MNetworkVarNames "float m_flScale"
        // static metadata: MNetworkVarNames "CUtlStringToken m_name"
        // static metadata: MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
        #pragma pack(push, 1)
        class CGameSceneNode
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            CTransform m_nodeToWorld; // 0x10            
            source2sdk::entity2::CEntityInstance* m_pOwner; // 0x30            
            source2sdk::client::CGameSceneNode* m_pParent; // 0x38            
            source2sdk::client::CGameSceneNode* m_pChild; // 0x40            
            source2sdk::client::CGameSceneNode* m_pNextSibling; // 0x48            
            uint8_t _pad0050[0x28]; // 0x50
            // metadata: MNetworkEnable
            // metadata: MNetworkSerializer "gameSceneNode"
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkVarEmbeddedFieldOffsetDelta "8"
            source2sdk::client::CGameSceneNodeHandle m_hParent; // 0x78            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Origin"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
            source2sdk::client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88            
            uint8_t _pad00b8[0x8]; // 0xb8
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
            QAngle m_angRotation; // 0xc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
            // metadata: MNetworkPriority "32"
            float m_flScale; // 0xcc            
            Vector m_vecAbsOrigin; // 0xd0            
            QAngle m_angAbsRotation; // 0xdc            
            float m_flAbsScale; // 0xe8            
            Vector m_vecWrappedLocalOrigin; // 0xec            
            QAngle m_angWrappedLocalRotation; // 0xf8            
            float m_flWrappedScale; // 0x104            
            std::int16_t m_nParentAttachmentOrBone; // 0x108            
            bool m_bDebugAbsOriginChanges; // 0x10a            
            bool m_bDormant; // 0x10b            
            bool m_bForceParentToBeNetworked; // 0x10c            
            // start of bitfield block
            uint16_t m_bDirtyHierarchy: 1;
            uint16_t m_bDirtyBoneMergeInfo: 1;
            uint16_t m_bNetworkedPositionChanged: 1;
            uint16_t m_bNetworkedAnglesChanged: 1;
            uint16_t m_bNetworkedScaleChanged: 1;
            uint16_t m_bWillBeCallingPostDataUpdate: 1;
            uint16_t m_bBoneMergeFlex: 1;
            uint16_t m_nLatchAbsOrigin: 2;
            uint16_t m_bDirtyBoneMergeBoneToRoot: 1;
            // end of bitfield block// 10 bits
            std::uint8_t m_nHierarchicalDepth; // 0x10f            
            std::uint8_t m_nHierarchyType; // 0x110            
            std::uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0x111            
            uint8_t _pad0112[0x2]; // 0x112
            // metadata: MNetworkEnable
            CUtlStringToken m_name; // 0x114            
            uint8_t _pad0118[0x40]; // 0x118
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
            CUtlStringToken m_hierarchyAttachName; // 0x158            
            float m_flZOffset; // 0x15c            
            float m_flClientLocalScale; // 0x160            
            Vector m_vRenderOrigin; // 0x164            
            uint8_t _pad0170[0x10];
            
            // Datamap fields:
            // void m_bDirtyHierarchy; // -0x1
            // void m_bDirtyBoneMergeInfo; // -0x1
            // void m_bNetworkedPositionChanged; // -0x1
            // void m_bNetworkedAnglesChanged; // -0x1
            // void m_bNetworkedScaleChanged; // -0x1
            // void m_bWillBeCallingPostDataUpdate; // -0x1
            // void m_nLatchAbsOrigin; // -0x1
            // void m_bDirtyBoneMergeBoneToRoot; // -0x1
            // CHandle< CBaseEntity > parentname; // 0x7fffffff
            // bool useLocalOffset; // 0x7fffffff
            // bool useParentRenderBounds; // 0x7fffffff
            // bool positionInLocalSpace; // 0x7fffffff
            // Vector scales; // 0x7fffffff
            // Vector local.scales; // 0x7fffffff
            // float scale; // 0x7fffffff
            // float ModelScale; // 0x7fffffff
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nodeToWorld) == 0x10);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pOwner) == 0x30);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pParent) == 0x38);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pChild) == 0x40);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_pNextSibling) == 0x48);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_hParent) == 0x78);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecOrigin) == 0x88);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angRotation) == 0xc0);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flScale) == 0xcc);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecAbsOrigin) == 0xd0);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angAbsRotation) == 0xdc);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flAbsScale) == 0xe8);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vecWrappedLocalOrigin) == 0xec);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_angWrappedLocalRotation) == 0xf8);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flWrappedScale) == 0x104);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nParentAttachmentOrBone) == 0x108);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bDebugAbsOriginChanges) == 0x10a);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bDormant) == 0x10b);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_bForceParentToBeNetworked) == 0x10c);
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyHierarchy
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeInfo
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedPositionChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedAnglesChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bNetworkedScaleChanged
        // Cannot assert offset of bitfield CGameSceneNode::m_bWillBeCallingPostDataUpdate
        // Cannot assert offset of bitfield CGameSceneNode::m_bBoneMergeFlex
        // Cannot assert offset of bitfield CGameSceneNode::m_nLatchAbsOrigin
        // Cannot assert offset of bitfield CGameSceneNode::m_bDirtyBoneMergeBoneToRoot
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nHierarchicalDepth) == 0x10f);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nHierarchyType) == 0x110);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_nDoNotSetAnimTimeInInvalidatePhysicsCount) == 0x111);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_name) == 0x114);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_hierarchyAttachName) == 0x158);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flZOffset) == 0x15c);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_flClientLocalScale) == 0x160);
        static_assert(offsetof(source2sdk::client::CGameSceneNode, m_vRenderOrigin) == 0x164);
        
        static_assert(sizeof(source2sdk::client::CGameSceneNode) == 0x180);
    };
};
