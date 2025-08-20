#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/DecalMode_t.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CClientAlphaProperty;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CDestructiblePartsSystemComponent;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct CRenderComponent;
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
        // Size: 0xec0
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
        // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
        #pragma pack(push, 1)
        class C_BaseModelEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05f8[0x4e8]; // 0x5f8
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CRenderComponent"
            // metadata: MNetworkAlias "CRenderComponent"
            // metadata: MNetworkTypeAlias "CRenderComponent"
            source2sdk::client::CRenderComponent* m_CRenderComponent; // 0xae0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CHitboxComponent"
            // metadata: MNetworkAlias "CHitboxComponent"
            // metadata: MNetworkTypeAlias "CHitboxComponent"
            source2sdk::client::CHitboxComponent m_CHitboxComponent; // 0xae8            
            // metadata: MNetworkEnable
            source2sdk::client::CDestructiblePartsSystemComponent* m_pDestructiblePartsSystemComponent; // 0xb10            
            source2sdk::client::HitGroup_t m_LastHitGroup; // 0xb18            
            uint8_t _pad0b1c[0x4]; // 0xb1c
            CGlobalSymbol m_sLastDamageSourceName; // 0xb20            
            Vector m_vLastDamagePosition; // 0xb28            
            uint8_t _pad0b34[0x1c]; // 0xb34
            bool m_bInitModelEffects; // 0xb50            
            bool m_bIsStaticProp; // 0xb51            
            uint8_t _pad0b52[0x2]; // 0xb52
            std::int32_t m_nLastAddDecal; // 0xb54            
            std::int32_t m_nDecalsAdded; // 0xb58            
            std::int32_t m_iOldHealth; // 0xb5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderModeChanged"
            source2sdk::client::RenderMode_t m_nRenderMode; // 0xb60            
            // metadata: MNetworkEnable
            source2sdk::client::RenderFx_t m_nRenderFX; // 0xb61            
            bool m_bAllowFadeInView; // 0xb62            
            uint8_t _pad0b63[0x1d]; // 0xb63
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnColorChanged"
            Color m_clrRender; // 0xb80            
            uint8_t _pad0b84[0x4]; // 0xb84
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
            // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::EntityRenderAttribute_t> m_vecRenderAttributes;
            char m_vecRenderAttributes[0x68]; // 0xb88            
            uint8_t _pad0bf0[0x18]; // 0xbf0
            // metadata: MNetworkEnable
            bool m_bRenderToCubemaps; // 0xc08            
            // metadata: MNetworkEnable
            bool m_bNoInterpolate; // 0xc09            
            uint8_t _pad0c0a[0x6]; // 0xc0a
            // metadata: MNetworkEnable
            source2sdk::client::CCollisionProperty m_Collision; // 0xc10            
            // metadata: MNetworkEnable
            source2sdk::client::CGlowProperty m_Glow; // 0xcc0            
            // metadata: MNetworkEnable
            float m_flGlowBackfaceMult; // 0xd18            
            // metadata: MNetworkEnable
            float m_fadeMinDist; // 0xd1c            
            // metadata: MNetworkEnable
            float m_fadeMaxDist; // 0xd20            
            // metadata: MNetworkEnable
            float m_flFadeScale; // 0xd24            
            // metadata: MNetworkEnable
            float m_flShadowStrength; // 0xd28            
            // metadata: MNetworkEnable
            std::uint8_t m_nObjectCulling; // 0xd2c            
            uint8_t _pad0d2d[0x3]; // 0xd2d
            // metadata: MNetworkEnable
            std::int32_t m_nAddDecal; // 0xd30            
            // metadata: MNetworkEnable
            Vector m_vDecalPosition; // 0xd34            
            // metadata: MNetworkEnable
            Vector m_vDecalForwardAxis; // 0xd40            
            // metadata: MNetworkEnable
            float m_flDecalHealBloodRate; // 0xd4c            
            // metadata: MNetworkEnable
            float m_flDecalHealHeightRate; // 0xd50            
            // metadata: MNetworkEnable
            source2sdk::client::DecalMode_t m_nDecalMode; // 0xd54            
            // metadata: MNetworkEnable
            source2sdk::client::DecalMode_t m_nRequiredDecalMode; // 0xd55            
            uint8_t _pad0d56[0x2]; // 0xd56
            // metadata: MNetworkEnable
            // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
            char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0xd58            
            uint8_t _pad0d70[0x28]; // 0xd70
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            // metadata: MNetworkUserGroup "Player"
            // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
            source2sdk::client::CNetworkViewOffsetVector m_vecViewOffset; // 0xd98            
            uint8_t _pad0dc0[0xb8]; // 0xdc0
            source2sdk::client::CClientAlphaProperty* m_pClientAlphaProperty; // 0xe78            
            Color m_ClientOverrideTint; // 0xe80            
            bool m_bUseClientOverrideTint; // 0xe84            
            uint8_t _pad0e85[0x3b];
            
            // Datamap fields:
            // void m_bodyGroupChoices; // 0xd70
            // int32_t InputAlpha; // 0x0
            // Color InputColor; // 0x0
            // int32_t InputSkin; // 0x0
            // CUtlString add_attribute; // 0x7fffffff
            // void m_Ropes; // 0xb38
            // Color rendercolor32; // 0x7fffffff
            // Color rendercolor; // 0x7fffffff
            // int32_t renderamt; // 0x7fffffff
            // Vector mins; // 0x7fffffff
            // Vector maxs; // 0x7fffffff
            // const char * skin; // 0x7fffffff
            // CUtlString bodygroups; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseModelEntity) == 0xec0);
    };
};
