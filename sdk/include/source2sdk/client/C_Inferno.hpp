#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"

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
        // Size: 0x84d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_firePositions"
        // static metadata: MNetworkVarNames "Vector m_fireParentPositions"
        // static metadata: MNetworkVarNames "bool m_bFireIsBurning"
        // static metadata: MNetworkVarNames "Vector m_BurnNormal"
        // static metadata: MNetworkVarNames "int m_fireCount"
        // static metadata: MNetworkVarNames "int m_nInfernoType"
        // static metadata: MNetworkVarNames "float m_nFireLifetime"
        // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
        // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
        #pragma pack(push, 1)
        class C_Inferno : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0ec0[0x40]; // 0xec0
            source2sdk::client::ParticleIndex_t m_nfxFireDamageEffect; // 0xf00            
            uint8_t _pad0f04[0x4]; // 0xf04
            // m_hInfernoPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoPointsSnapshot;
            char m_hInfernoPointsSnapshot[0x8]; // 0xf08            
            // m_hInfernoFillerPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoFillerPointsSnapshot;
            char m_hInfernoFillerPointsSnapshot[0x8]; // 0xf10            
            // m_hInfernoOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoOutlinePointsSnapshot;
            char m_hInfernoOutlinePointsSnapshot[0x8]; // 0xf18            
            // m_hInfernoClimbingOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoClimbingOutlinePointsSnapshot;
            char m_hInfernoClimbingOutlinePointsSnapshot[0x8]; // 0xf20            
            // m_hInfernoDecalsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoDecalsSnapshot;
            char m_hInfernoDecalsSnapshot[0x8]; // 0xf28            
            // metadata: MNetworkEnable
            Vector m_firePositions[64]; // 0xf30            
            // metadata: MNetworkEnable
            Vector m_fireParentPositions[64]; // 0x1230            
            // metadata: MNetworkEnable
            bool m_bFireIsBurning[64]; // 0x1530            
            // metadata: MNetworkEnable
            Vector m_BurnNormal[64]; // 0x1570            
            // metadata: MNetworkEnable
            std::int32_t m_fireCount; // 0x1870            
            // metadata: MNetworkEnable
            std::int32_t m_nInfernoType; // 0x1874            
            // metadata: MNetworkEnable
            float m_nFireLifetime; // 0x1878            
            // metadata: MNetworkEnable
            bool m_bInPostEffectTime; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            std::int32_t m_lastFireCount; // 0x1880            
            // metadata: MNetworkEnable
            std::int32_t m_nFireEffectTickBegin; // 0x1884            
            uint8_t _pad1888[0x6c08]; // 0x1888
            std::int32_t m_drawableCount; // 0x8490            
            bool m_blosCheck; // 0x8494            
            uint8_t _pad8495[0x3]; // 0x8495
            std::int32_t m_nlosperiod; // 0x8498            
            float m_maxFireHalfWidth; // 0x849c            
            float m_maxFireHeight; // 0x84a0            
            Vector m_minBounds; // 0x84a4            
            Vector m_maxBounds; // 0x84b0            
            float m_flLastGrassBurnThink; // 0x84bc            
            uint8_t _pad84c0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Inferno because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Inferno) == 0x84d0);
    };
};
