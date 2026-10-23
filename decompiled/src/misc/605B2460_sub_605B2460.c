/* sub_605B2460
 * address: 0x605B2460   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B2460(float *a1)
{
  int v2; // r11
  int v3; // r7
  int result; // r0
  float *v5; // r9
  float v6; // s20
  float v7; // s22
  float v8; // s24
  float v9; // s26
  unsigned int v10; // r0
  float *v11; // r1
  float v12; // s4
  float v13; // s2
  float v14; // s0
  float v15; // s4
  float v16; // s0

  v2 = *(_DWORD *)(ActorMgr__instance + 27180);
  v3 = sub_60008598(ActorMgr__instance, 187, *(_DWORD *)(ActorMgr__instance + 27172));
  result = 0;
  if ( v3 != v2 )
  {
    v5 = a1 + 1690;
    while ( 1 )
    {
      v6 = a1[27];
      v7 = a1[28];
      v8 = *(float *)(*(_DWORD *)v3 + 108);
      v9 = *(float *)(*(_DWORD *)v3 + 112);
      v10 = sub_60619FB4();
      v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
      v12 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
      v13 = v11[2] + (float)(v12 * v11[3]);
      v14 = *v11 + (float)(v11[1] * v12);
      v15 = (float)((float)((float)(v6 - v8) * v13) - (float)((float)(v7 - v9) * v14)) - unk_60CB03C0;
      if ( v15 >= 0.0 && v15 <= 270.0 )
      {
        v16 = (float)((float)((float)(v7 - v9) * v13) + (float)((float)(v6 - v8) * v14)) - unk_60CB03C4;
        if ( v16 <= (float)(v15 * *v5) && v16 >= (float)-(float)(v15 * *v5) )
          break;
      }
      v3 = sub_60008598(ActorMgr__instance, 187, v3 + 4);
      if ( v3 == v2 )
        return 0;
    }
    return 1;
  }
  return result;
}
