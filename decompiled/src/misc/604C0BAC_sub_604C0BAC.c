/* sub_604C0BAC
 * address: 0x604C0BAC   size: 808   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C0BAC(int a1, int a2)
{
  char v2; // r12
  int result; // r0
  _BYTE *v6; // r5
  int v7; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r6
  int v9; // r10
  int v10; // r8
  int v11; // r2
  int v12; // r6
  int *v13; // r11
  int v14; // r3
  float *v15; // r9
  float *v16; // r2
  float v17; // s0
  float v18; // s2
  float v19; // s18
  int v20; // r7
  int v21; // r10
  int v22; // r6
  int v23; // r2
  int v24; // r1
  float *v25; // r2
  int v26; // r3
  float v27; // s0
  float v28; // s2
  float v29; // s18
  int v30; // r10
  int v31; // r7
  int v32; // r6
  int v33; // r2
  float *v34; // r2
  int v35; // r3
  float v36; // s0
  float v37; // s2
  float v38; // s16
  int v39; // r4
  int v40; // r6
  int v41; // r0

  v6 = (_BYTE *)(a1 + 25652);
  result = FIELD_U8(a1, 25652);
  if ( !result )
  {
    v7 = FIELD_U32(dword_60CD0B40, 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
      v7 += 24;
    v8 = *(int (__fastcall ****)(_DWORD, int *))(*(_DWORD *)v7 + 76);
    if ( ((unsigned int)&dword_60C8D9F4 & ~(1615596552 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
    {
      dword_60C8D9F0 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9F4);
    }
    v9 = 0;
    v10 = 0;
    if ( v8 )
    {
      v10 = (**v8)(v8, &dword_60C8D9F0);
      if ( v10 )
        v10 = (int)v8;
    }
    v11 = a2;
    if ( a2 )
      v11 = 2;
    v12 = FIELD_U32(a1, 11280);
    v13 = (int *)(a1 + 11280 + 4 * v11);
    result = 3756 * (__int16)v11 + a1 + 12;
    v14 = 2;
    if ( a2 )
      v14 = 0;
    v15 = (float *)(a1 + 4 * v14 + 11292);
    if ( !*v6 )
    {
      v16 = *(float **)(a1 + 11304);
      v17 = FIELD_F32(v12, 92) + v16[6];
      v18 = (float)((float)(v16[14] * v16[12]) * *(float *)(FIELD_U32(a1, 11308) + 48)) * 0.5;
      if ( (float)(v18 + v17) < FIELD_F32(v10, 164) || (v9 = 1, (float)(v17 - v18) > FIELD_F32(v10, 168)) )
      {
        v19 = *v15;
        v20 = FIELD_U32(v12, 28);
        v21 = FIELD_U32(v12, 32);
        v22 = result;
        ((void (*)(void))sub_60509920)();
        v23 = *v13;
        result = v22;
        FIELD_F32(v23, 24) = v19 + v19;
        FIELD_U32(v23, 28) = v20;
        FIELD_U32(v23, 32) = v21;
        v9 = 0;
        FIELD_U8(v23, 64) |= 0x10u;
        *v6 = 1;
      }
    }
    v24 = 0;
    if ( v9 )
    {
      v25 = *(float **)(a1 + 11312);
      v26 = FIELD_U32(a1, 11284);
      v27 = FIELD_F32(v26, 92) + v25[6];
      v28 = (float)((float)(v25[14] * v25[12]) * *(float *)(FIELD_U32(a1, 11316) + 48)) * 0.5;
      if ( (float)(v28 + v27) < FIELD_F32(v10, 164) || (v24 = 1, (float)(v27 - v28) > FIELD_F32(v10, 168)) )
      {
        v29 = *v15;
        v30 = FIELD_U32(v26, 28);
        v31 = FIELD_U32(v26, 32);
        v32 = result;
        ((void (*)(void))sub_60509920)();
        v33 = *v13;
        result = v32;
        FIELD_F32(v33, 24) = v29 + v29;
        FIELD_U32(v33, 28) = v30;
        FIELD_U32(v33, 32) = v31;
        FIELD_U8(v33, 64) |= 0x10u;
        *v6 = 1;
        v24 = 0;
      }
    }
    if ( v24 == 1 )
    {
      v34 = *(float **)(a1 + 11320);
      v35 = FIELD_U32(a1, 11288);
      v36 = FIELD_F32(v35, 92) + v34[6];
      v37 = (float)((float)(v34[14] * v34[12]) * *(float *)(FIELD_U32(a1, 11324) + 48)) * 0.5;
      if ( (float)(v37 + v36) < FIELD_F32(v10, 164) || (float)(v36 - v37) > FIELD_F32(v10, 168) )
      {
        v38 = *v15;
        v39 = FIELD_U32(v35, 28);
        v40 = FIELD_U32(v35, 32);
        sub_60509920(result);
        v41 = *v13;
        FIELD_F32(v41, 24) = v38 + v38;
        FIELD_U32(v41, 28) = v39;
        FIELD_U32(v41, 32) = v40;
        FIELD_U8(v41, 64) |= 0x10u;
        *v6 = 1;
        return 1;
      }
    }
  }
  return result;
}
