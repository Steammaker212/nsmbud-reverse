/* sub_6037BB10
 * address: 0x6037BB10   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037BB10(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r0
  int v5; // r7
  float *v6; // r1
  float v7; // s4
  int v8; // r8
  float v9; // s18
  float v10; // s16
  int v11; // r6
  float v12; // s24

  v2 = 1;
  v3 = FIELD_U32(a1, 164);
  if ( (unsigned int)(v3 + 805306368) <= 0x60000000 )
  {
    v4 = -v3;
    v5 = 0;
    v2 = 0;
    v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
    v7 = (float)(v4 & 0xFFFFFF);
    v8 = PlayerMgr_instance;
    v9 = v6[2] + (float)((float)(v7 * v6[3]) * 0.000000059605);
    v10 = *v6 + (float)((float)(v7 * v6[1]) * 0.000000059605);
    while ( 1 )
    {
      if ( (FIELD_U16(v8, 66) & (unsigned __int16)(1 << v5)) != 0 )
      {
        v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
        if ( v11 )
        {
          if ( fabsf(
                 (float)(v9 * (float)(FIELD_F32(v11, 108) - FIELD_F32(a1, 108)))
               - (float)(v10 * (float)(FIELD_F32(v11, 112) - FIELD_F32(a1, 112)))) <= 28.0 )
            break;
          v12 = *(float *)sub_6075F950(*(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32));
          if ( fabsf(
                 (float)(v9 * (float)(v12 - FIELD_F32(a1, 108)))
               - (float)(v10 * (float)(*(float *)(sub_6075F950(v11) + 4) - FIELD_F32(a1, 112)))) <= 28.0 )
            break;
        }
      }
      if ( ++v5 >= 4 )
        return 1;
    }
  }
  return v2;
}
