/* sub_608A5304
 * address: 0x608A5304   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A5304(int *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r0
  int v5; // t1
  int v6; // r7
  float *v7; // r0
  float *v8; // r5
  unsigned int v9; // s2
  unsigned int v10; // s2
  unsigned int v11; // s2
  unsigned int v12; // s2
  int v13; // r0
  int v14; // r2
  int v15; // r4

  v2 = 0;
  v3 = *a1;
  if ( !*(_BYTE *)(FIELD_U32(v3, 136) + 1874) )
  {
    v5 = FIELD_U32(v3, 1464);
    v4 = v3 + 1464;
    v6 = *(_DWORD *)(*(_DWORD *)(v4 - 1116) + 580);
    v7 = (float *)(*(int (__fastcall **)(int, int, int))(v5 + 8))(v4, 44, 128);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x2Cu);
      *(_DWORD *)(*a1 + 732) = v8;
      *v8 = FIELD_F32(v6, 24);
      v8[1] = FIELD_F32(v6, 28);
      v9 = *(_DWORD *)(*a1 + 144);
      *(_DWORD *)(*a1 + 144) = 1103515245 * v9 + 12345;
      v8[4] = (float)v9 * 2.3283e-10;
      v10 = *(_DWORD *)(*a1 + 144);
      *(_DWORD *)(*a1 + 144) = 1103515245 * v10 + 12345;
      v8[5] = (float)v10 * 2.3283e-10;
      v11 = *(_DWORD *)(*a1 + 144);
      *(_DWORD *)(*a1 + 144) = 1103515245 * v11 + 12345;
      v8[6] = (float)v11 * 2.3283e-10;
      v12 = *(_DWORD *)(*a1 + 144);
      *(_DWORD *)(*a1 + 144) = 1103515245 * v12 + 12345;
      v8[7] = (float)v12 * 2.3283e-10;
      sub_6088005C(*a1, 4, 96);
      v13 = *a1;
      v2 = 1;
      v14 = 160
          * (*(_DWORD *)(*a1 + 340)
           + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a1 + 348) + 580) + 16) * *(_DWORD *)(*a1 + 340))
          + 160;
      if ( 160
         * (*(_DWORD *)(*a1 + 340) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a1 + 348) + 580) + 16)
                                   * *(_DWORD *)(*a1 + 340)) != -160 )
      {
        v15 = FIELD_U32(v13, 732);
        if ( sub_6088008C(v13, FIELD_U32(dword_60CC8294, 24), v14) == 1 )
        {
          v2 = 1;
          FIELD_U8(v15, 32) = 1;
        }
      }
    }
  }
  return v2;
}
