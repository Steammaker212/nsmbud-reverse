/* sub_60800F08
 * address: 0x60800F08   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60800F08(float *a1, int **a2)
{
  int *v3; // r0
  int *v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r5
  bool v9; // r8
  bool v10; // r10
  float v11; // s16
  float v12; // s0
  float v13; // s0
  bool v14; // zf
  bool v15; // r7
  bool v16; // r5
  float v17; // s16
  _BYTE *result; // r0
  float v19; // [sp+4h] [bp-44h] BYREF
  _DWORD v20[16]; // [sp+8h] [bp-40h] BYREF

  v3 = *a2;
  v4 = a2[1];
  v5 = **a2;
  v6 = v3[1];
  v7 = v3[2];
  v20[3] = v3[3];
  v20[0] = v5;
  v20[1] = v6;
  v20[2] = v7;
  nullsub_60(v4, v20, a1[4]);
  v8 = *(_DWORD *)sub_60804418(v4);
  v9 = 1;
  if ( v8 == 1 )
  {
    v10 = 1;
LABEL_10:
    v17 = a1[6] * 0.5;
    v19 = (float)(a1[8] - v17) + -8.0;
    v15 = ((float (__fastcall *)(float *, _DWORD *, float))loc_6080243C)(&v19, v20, v17) != 0.0;
    v19 = (float)(a1[8] - v17) + 8.0;
    v16 = ((float (__fastcall *)(float *, _DWORD *, float))loc_6080243C)(&v19, v20, v17) != 0.0;
    goto LABEL_11;
  }
  v10 = 1;
  if ( v8 == 4 )
    goto LABEL_10;
  v11 = a1[5] * 0.5;
  v19 = (float)(v11 + a1[7]) + -8.0;
  v9 = ((float (__fastcall *)(float *, _DWORD *, float))loc_608023F0)(&v19, v20, v11) != 0.0;
  v19 = (float)(v11 + a1[7]) + 8.0;
  v10 = ((float (__fastcall *)(float *, _DWORD *, float))loc_608023F0)(&v19, v20, v11) != 0.0;
  v12 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  if ( v12 >= 0.0 )
  {
    v13 = (float)(v12 + 32.0) - v11;
    if ( v19 > v13 )
    {
      v10 = 1;
      v19 = v13;
    }
  }
  v14 = v8 == 6;
  v15 = 1;
  v16 = 1;
  if ( !v14 )
    goto LABEL_10;
LABEL_11:
  result = (_BYTE *)dword_60C9CF0C;
  FIELD_U8(dword_60C9CF0C, 5126) = v9;
  result[5127] = v10;
  result[5128] = v16;
  result[5129] = v15;
  return result;
}
