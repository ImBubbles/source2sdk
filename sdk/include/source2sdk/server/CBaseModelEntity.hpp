#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/DecalMode_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCollisionProperty.hpp"
#include "source2sdk/server/CGlowProperty.hpp"
#include "source2sdk/server/CHitboxComponent.hpp"
#include "source2sdk/server/EntityRenderAttribute_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDestructiblePartsSystemComponent;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CRenderComponent;
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
        // Size: 0x7e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
        // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
        // static metadata: MNetworkVarNames "CDestructiblePartsSystemComponent * m_pDestructiblePartsSystemComponent"
        // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
        // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
        // static metadata: MNetworkVarNames "Color m_clrRender"
        // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
        // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
        // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
        // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
        // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
        // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
        // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
        // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
        // static metadata: MNetworkVarNames "float32 m_flFadeScale"
        // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
        // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
        // static metadata: MNetworkVarNames "int m_nAddDecal"
        // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
        // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
        // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
        // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
        // static metadata: MNetworkVarNames "DecalMode_t m_nDecalMode"
        // static metadata: MNetworkVarNames "DecalMode_t m_nRequiredDecalMode"
        // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
        // static metadata: MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
        #pragma pack(push, 1)
        class CBaseModelEntity : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CRenderComponent"
            // metadata: MNetworkAlias "CRenderComponent"
            // metadata: MNetworkTypeAlias "CRenderComponent"
            source2sdk::server::CRenderComponent* m_CRenderComponent; // 0x4f0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::server::CHitboxComponent m_CHitboxComponent; // 0x4f8            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0x520            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0x524            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0x528            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0x52c            
            source2sdk::client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0x530            
            std::int32_t m_nDestructiblePartInitialStateDestructed0_PartIndex; // 0x534            
            std::int32_t m_nDestructiblePartInitialStateDestructed1_PartIndex; // 0x538            
            std::int32_t m_nDestructiblePartInitialStateDestructed2_PartIndex; // 0x53c            
            std::int32_t m_nDestructiblePartInitialStateDestructed3_PartIndex; // 0x540            
            std::int32_t m_nDestructiblePartInitialStateDestructed4_PartIndex; // 0x544            
            // metadata: MNetworkEnable
            source2sdk::server::CDestructiblePartsSystemComponent* m_pDestructiblePartsSystemComponent; // 0x548            
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0x550            
            uint8_t _pad0554[0x4]; // 0x554
            CGlobalSymbol m_sLastDamageSourceName; // 0x558            
            Vector m_vLastDamagePosition; // 0x560            
            source2sdk::entity2::GameTime_t m_flDissolveStartTime; // 0x56c            
            source2sdk::entity2::CEntityIOOutput m_OnIgnite; // 0x570            
            // metadata: MNetworkEnable
            source2sdk::client::RenderMode_t m_nRenderMode; // 0x598            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0x599            
            bool m_bAllowFadeInView; // 0x59a            
            uint8_t _pad059b[0x1d]; // 0x59b
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0x5c0            
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0x628            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0x629            
            uint8_t _pad062a[0x6]; // 0x62a
            // metadata: MNetworkEnable
            source2sdk::server::CCollisionProperty m_Collision; // 0x630            
            // metadata: MNetworkEnable
            source2sdk::server::CGlowProperty m_Glow; // 0x6e0            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0x738            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0x73c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0x740            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0x744            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0x748            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0x74c            
            uint8_t _pad074d[0x3]; // 0x74d
            // metadata: MNetworkEnable
            std::int32_t m_nAddDecal; // 0x750            
            // metadata: MNetworkEnable
            Vector m_vDecalPosition; // 0x754            
            // metadata: MNetworkEnable
            Vector m_vDecalForwardAxis; // 0x760            
            // metadata: MNetworkEnable
            float m_flDecalHealBloodRate; // 0x76c            
            // metadata: MNetworkEnable
            float m_flDecalHealHeightRate; // 0x770            
            // metadata: MNetworkEnable
            source2sdk::client::DecalMode_t m_nDecalMode; // 0x774            
            // metadata: MNetworkEnable
            source2sdk::client::DecalMode_t m_nRequiredDecalMode; // 0x775            
            uint8_t _pad0776[0x2]; // 0x776
            // metadata: MNetworkEnable
            // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
            char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x778            
            uint8_t _pad0790[0x28]; // 0x790
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0x7b8            
            uint8_t _pad07e0[0x8];
            
            // Datamap fields:
            // void m_bodyGroupChoices; // 0x790
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
            // void InputIgnite; // 0x0
            // float InputIgniteLifetime; // 0x0
            // int32_t InputIgnite; // 0x0
            // float InputIgnite; // 0x0
            // void InputExtinguish; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void CBaseModelEntitySUB_StartFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
            // void CBaseModelEntitySUB_FadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
            // void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
            // void CBaseModelEntitySUB_StopShadowFade; // 0x0
            // Color rendercolor32; // 0x7fffffff
            // Color rendercolor; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseModelEntity) == 0x7e8);
    };
};
