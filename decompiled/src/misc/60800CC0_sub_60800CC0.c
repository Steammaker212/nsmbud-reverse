/* sub_60800CC0
 * address: 0x60800CC0   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60800CC0(int a1, int a2)
{
  float *v4; // r0
  int v5; // r7
  int v6; // r9
  float v7; // r1
  float v8; // r2
  int v9; // r3
  int v10; // r10
  float *v11; // r8
  unsigned int v12; // r7
  char v13; // r0
  int v14; // r6
  float v15; // s0
  bool v16; // zf
  float v17; // s16
  float v18; // s0
  float v19; // s2
  float v20; // s2
  float v21; // s0
  float v22; // s16
  float v24; // [sp+4h] [bp-3Ch] BYREF
  float v25; // [sp+8h] [bp-38h] BYREF
  float v26; // [sp+Ch] [bp-34h]
  int v27; // [sp+10h] [bp-30h]
  int v28; // [sp+14h] [bp-2Ch]

  *(_DWORD *)(FIELD_U32(a1, 36) + 12) = 0;
  *(_DWORD *)(FIELD_U32(a1, 36) + 16) = 0;
  v4 = *(float **)a2;
  v5 = FIELD_U32(a2, 4);
  v6 = FIELD_U32(a2, 12);
  v7 = **(float **)a2;
  v8 = v4[1];
  v9 = *((_DWORD *)v4 + 2);
  v28 = *((_DWORD *)v4 + 3);
  v25 = v7;
  v26 = v8;
  v27 = v9;
  nullsub_60(v5, &v25, FIELD_F32(a1, 16));
  sub_608009AC((float *)a1);
  v10 = *(_DWORD *)sub_60804418(v5);
  if ( FIELD_U8(v6, 30) )
  {
    v11 = *(float **)(a1 + 36);
    v12 = FIELD_U8(v6, 20);
    sub_60800F08(a1, a2);
    v13 = v12;
    if ( v12 )
      v13 = 1;
    if ( v12 < 2 )
    {
      if ( v12 )
        goto LABEL_20;
      goto LABEL_23;
    }
    v14 = (v12 != 2) & (unsigned __int8)v13;
  }
  else
  {
    v11 = *(float **)(a1 + 36);
    sub_60800F08(a1, a2);
    v14 = 1;
  }
  v15 = FIELD_F32(a1, 20);
  v16 = v10 == 4;
  if ( v10 != 4 )
    v16 = v10 == 1;
  v17 = v15 * 0.5;
  if ( v16 )
  {
    FIELD_F32(a1, 28) = sub_60802488(v15) - v17;
    *(_DWORD *)(FIELD_U32(a1, 36) + 12) = 1090519040;
    if ( v14 )
    {
LABEL_22:
      v22 = FIELD_F32(a1, 24) * 0.5;
      v24 = (float)(FIELD_F32(a1, 32) - v22) + v11[1];
      *(float *)(FIELD_U32(a1, 36) + 16) = ((float (__fastcall *)(float *, float *, float))loc_6080243C)(
                                                &v24,
                                                &v25,
                                                v22);
      FIELD_F32(a1, 32) = v22 + v24;
    }
  }
  else
  {
    v18 = (float)(v17 + FIELD_F32(a1, 28)) + *v11;
    v24 = v18;
    v19 = FIELD_F32(EnemyCounterMaybe_instance, 16);
    if ( v19 < 0.0 || (v20 = (float)(v19 + 32.0) - v17, v18 <= v20) )
    {
      ((void (__fastcall *)(float *, float *, float))loc_608023F0)(&v24, &v25, v17);
      v20 = v24;
    }
    else
    {
      v21 = 8.0;
      v24 = v20;
    }
    *(float *)(FIELD_U32(a1, 36) + 12) = v21;
    FIELD_F32(a1, 28) = v20 - v17;
    if ( v14 )
    {
LABEL_20:
      if ( v10 == 6 )
      {
        sub_60800A14(a1, v26);
        *(_DWORD *)(FIELD_U32(a1, 36) + 16) = 1090519040;
        goto LABEL_23;
      }
      goto LABEL_22;
    }
  }
LABEL_23:
  if ( FIELD_U8(v6, 30) )
    sub_60800A94((float *)a1, v6, 1.0);
  sub_60800A24(a1, &v25);
  return sub_60800A5C(a1, (int)&v25);
}
