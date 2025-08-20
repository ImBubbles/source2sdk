#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_FuncBrush.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1380
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_targetCamera"
        // static metadata: MNetworkVarNames "int m_nResolutionEnum"
        // static metadata: MNetworkVarNames "bool m_bRenderShadows"
        // static metadata: MNetworkVarNames "bool m_bUseUniqueColorTarget"
        // static metadata: MNetworkVarNames "CUtlString m_brushModelName"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetCamera"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "bool m_bDraw3DSkybox"
        #pragma pack(push, 1)
        class C_FuncMonitor : public source2sdk::client::C_FuncBrush
        {
        public:
            // metadata: MNetworkEnable
            CUtlString m_targetCamera; // 0xec0            
            // metadata: MNetworkEnable
            std::int32_t m_nResolutionEnum; // 0xec8            
            // metadata: MNetworkEnable
            bool m_bRenderShadows; // 0xecc            
            // metadata: MNetworkEnable
            bool m_bUseUniqueColorTarget; // 0xecd            
            uint8_t _pad0ece[0x2]; // 0xece
            // metadata: MNetworkEnable
            CUtlString m_brushModelName; // 0xed0            
            // metadata: MNetworkEnable
            // m_hTargetCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetCamera;
            char m_hTargetCamera[0x4]; // 0xed8            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xedc            
            // metadata: MNetworkEnable
            bool m_bDraw3DSkybox; // 0xedd            
            uint8_t _pad0ede[0x4a2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncMonitor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncMonitor) == 0x1380);
    };
};
