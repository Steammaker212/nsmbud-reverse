/* sub_6089C0A4
 * address: 0x6089C0A4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089C0A4(int *a1, int a2, float32x4_t *a3, int a4, int a5, int *a6)
{
  int v6; // r6
  int v9; // r0
  int v10; // r7
  unsigned __int32 v11; // r2
  int v12; // r3
  unsigned __int32 v13; // r5
  float v14; // s0
  int v15; // r6
  unsigned __int32 v16; // r3
  int v17; // r1
  unsigned __int32 v18; // r7
  float v19; // s0
  unsigned int v21; // [sp+8h] [bp-28h] BYREF
  int v22[9]; // [sp+Ch] [bp-24h] BYREF

  v6 = 0;
  v22[0] = 0;
  v21 = 0;
  sub_6089098C(*a1, &v21, v22, a3, *(unsigned __int8 *)(*(_DWORD *)(a3[21].n128_u32[3] + 12) + 1873), *a6);
  v9 = v22[0];
  if ( v22[0] )
  {
    if ( v22[0] >= 1 )
    {
      if ( a5 )
      {
        v10 = 0;
        do
        {
          v11 = a3[9].n128_u32[1];
          v12 = *(_DWORD *)(v21 + 8 * v10 + 4);
          v13 = v11 + 24 * v12;
          v14 = FIELD_F32(v13, 12);
          if ( (float)(a3[4].n128_f32[1] - FIELD_F32(v13, 8)) <= v14 && *(_DWORD *)(v11 + 24 * v12) && v14 > 0.0 )
          {
            (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a5 + 48))(a5, a2, 1);
            v9 = v22[0];
          }
          ++v10;
        }
        while ( v10 < v9 );
      }
      else
      {
        v15 = 0;
        do
        {
          v16 = a3[9].n128_u32[1];
          v17 = *(_DWORD *)(v21 + 8 * v15 + 4);
          v18 = v16 + 24 * v17;
          v19 = FIELD_F32(v18, 12);
          if ( (float)(a3[4].n128_f32[1] - FIELD_F32(v18, 8)) <= v19 && *(_DWORD *)(v16 + 24 * v17) && v19 > 0.0 )
          {
            sub_608355CC(a2, 4, 4, 0, 1, v17);
            v9 = v22[0];
          }
          ++v15;
        }
        while ( v15 < v9 );
      }
    }
    return 1;
  }
  return v6;
}
