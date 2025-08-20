#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity_AttachedModelData_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
    };
};
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
        // Size: 0x18f0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidLow"
        // static metadata: MNetworkVarNames "uint32 m_OriginalOwnerXuidHigh"
        // static metadata: MNetworkVarNames "int m_nFallbackPaintKit"
        // static metadata: MNetworkVarNames "int m_nFallbackSeed"
        // static metadata: MNetworkVarNames "float m_flFallbackWear"
        // static metadata: MNetworkVarNames "int m_nFallbackStatTrak"
        #pragma pack(push, 1)
        class C_EconEntity : public source2sdk::client::C_BaseFlex
        {
        public:
            uint8_t _pad1378[0x10]; // 0x1378
            float m_flFlexDelayTime; // 0x1388            
            uint8_t _pad138c[0x4]; // 0x138c
            float* m_flFlexDelayedWeight; // 0x1390            
            bool m_bAttributesInitialized; // 0x1398            
            uint8_t _pad1399[0x7]; // 0x1399
            // metadata: MNetworkEnable
            source2sdk::client::C_AttributeContainer m_AttributeManager; // 0x13a0            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidLow; // 0x1878            
            // metadata: MNetworkEnable
            std::uint32_t m_OriginalOwnerXuidHigh; // 0x187c            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackPaintKit; // 0x1880            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackSeed; // 0x1884            
            // metadata: MNetworkEnable
            float m_flFallbackWear; // 0x1888            
            // metadata: MNetworkEnable
            std::int32_t m_nFallbackStatTrak; // 0x188c            
            bool m_bClientside; // 0x1890            
            bool m_bParticleSystemsCreated; // 0x1891            
            uint8_t _pad1892[0x6]; // 0x1892
            // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecAttachedParticles;
            char m_vecAttachedParticles[0x18]; // 0x1898            
            // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hViewmodelAttachment;
            char m_hViewmodelAttachment[0x4]; // 0x18b0            
            std::int32_t m_iOldTeam; // 0x18b4            
            bool m_bAttachmentDirty; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            std::int32_t m_nUnloadedModelIndex; // 0x18bc            
            std::int32_t m_iNumOwnerValidationRetries; // 0x18c0            
            uint8_t _pad18c4[0xc]; // 0x18c4
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0x18d0            
            uint8_t _pad18d4[0x4]; // 0x18d4
            // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::C_EconEntity_AttachedModelData_t> m_vecAttachedModels;
            char m_vecAttachedModels[0x18]; // 0x18d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EconEntity) == 0x18f0);
    };
};
