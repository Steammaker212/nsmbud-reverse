/* SE_SYS_CB_RESULT_ref_2_helper
 * address: 0x6052C150   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CB_RESULT_ref_2_helper(int a1)
{
  char v1; // r12
  int v3; // r5
  float v4; // s0
  int v5; // r1
  float v6; // r2
  float v7; // r3
  unsigned int v8; // r0
  int v9; // r0
  int v10; // r2
  unsigned int v11; // r0
  int v12; // s4
  float *v13; // r0
  float v14; // s10
  float v15; // s6
  float v16; // s0
  float v17; // s14
  float v18; // s3
  Vec3 v20; // [sp+0h] [bp-40h] BYREF
  int v21; // [sp+Ch] [bp-34h]
  float v22; // [sp+10h] [bp-30h]
  float v23; // [sp+14h] [bp-2Ch]
  float v24; // [sp+18h] [bp-28h]
  int v25; // [sp+1Ch] [bp-24h]
  float v26; // [sp+20h] [bp-20h]
  float v27; // [sp+24h] [bp-1Ch]
  float v28; // [sp+28h] [bp-18h]
  int v29; // [sp+2Ch] [bp-14h]

  v3 = 0;
  if ( *(_BYTE *)a1 )
  {
    v4 = FIELD_F32(a1, 12) + -10.0;
    FIELD_F32(a1, 12) = v4;
    if ( v4 >= FIELD_F32(a1, 44) )
    {
      FIELD_U32(a1, 20) += FIELD_U32(a1, 24);
      if ( ((unsigned int)&dword_60CAA4C0[4] & ~(1616036404 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAA4C0[4]) )
      {
        dword_60CAA4F4 = 1077936128;
        dword_60CAA4F8 = 1077936128;
        dword_60CAA4FC = 1077936128;
        _cxa_guard_release(&dword_60CAA4C0[4]);
      }
      v11 = FIELD_U32(a1, 20);
      v12 = v11 & 0xFFFFFF;
      v13 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
      v14 = (float)(-0.00030118 * 0.0) + 1.0;
      v15 = (float)(0.024541 * 0.0) + 0.0;
      v16 = (float)(unsigned int)v12 * 0.000000059605;
      v17 = *v13 + (float)(v16 * v13[1]);
      v18 = v13[2] + (float)(v16 * v13[3]);
      v20.x = v14 * v18;
      v22 = v15 * v18;
      v26 = -v17;
      v20.y = (float)(v14 * (float)(v15 * v17)) - (float)(v15 * v14);
      v23 = (float)(v14 * v14) + (float)(v15 * (float)(v15 * v17));
      v27 = v15 * v18;
      v20.z = (float)((float)(v14 * v14) * v17) + (float)(v15 * v15);
      v24 = (float)((float)(v15 * v14) * v17) - (float)(v15 * v14);
      v28 = v14 * v18;
      v21 = FIELD_U32(a1, 8);
      v25 = FIELD_U32(a1, 12);
      v29 = FIELD_U32(a1, 16);
      (*(void (__fastcall **)(_DWORD, Vec3 *))(***(_DWORD ***)(a1 + 4) + 60))(**(_DWORD **)(a1 + 4), &v20);
      (*(void (__fastcall **)(_DWORD, int *))(***(_DWORD ***)(a1 + 4) + 68))(**(_DWORD **)(a1 + 4), &dword_60CAA4F4);
      ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 4));
    }
    else
    {
      v5 = FIELD_U8(a1, 32);
      v6 = FIELD_F32(a1, 8);
      v7 = FIELD_F32(a1, 12);
      v20.z = FIELD_F32(a1, 16);
      v20.x = v6;
      v20.y = v7;
      EffectData_create(dword_60AF2178[v5], &v20, 0, 0);
      v8 = FIELD_U32(a1, 28);
      if ( v8 >= 4 )
        v8 = 0;
      v9 = *(_DWORD *)(dword_60C99E60 + 4 * v8 + 4172);
      v10 = 9999;
      if ( FIELD_U32(v9, 3132) + FIELD_U32(a1, 36) < 9999 )
        v10 = FIELD_U32(v9, 3132) + FIELD_U32(a1, 36);
      FIELD_U32(v9, 3132) = v10;
      *(_BYTE *)a1 = 0;
      return 1;
    }
  }
  return v3;
}
