/* sub_606CD038
 * address: 0x606CD038   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CD038(int result)
{
  unsigned int v1; // r1
  float *v2; // r2
  float v3; // s6
  float v4; // s4
  float v5; // s8
  float v6; // s10
  float v7; // s2
  float v8; // r12
  float v9; // s0
  float v10; // r3
  float v11; // s12
  float v12; // s8
  float v13; // s6
  float v14; // s4
  float v15; // s2
  _BYTE *v16; // r1
  float v17; // s8
  float v18; // s2
  int v19; // r2
  float v20; // s10
  _BOOL4 v21; // r3
  float v22; // s0
  bool v23; // fcf
  bool v24; // fzf
  float v25; // s2
  float v26; // s8
  float v27; // s0
  int v28; // r2
  float v29; // [sp+0h] [bp-18h] BYREF
  float v30; // [sp+4h] [bp-14h]
  int v31; // [sp+8h] [bp-10h]

  v1 = FIELD_U32(result, 164);
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v7 = FIELD_F32(result, 8016);
  v8 = FIELD_F32(result, 108);
  v9 = FIELD_F32(result, 8020);
  v10 = FIELD_F32(result, 112);
  v31 = FIELD_U32(result, 116);
  v30 = v10;
  v29 = v8;
  v11 = (float)(v1 & 0xFFFFFF) * 0.000000059605;
  v12 = v5 + (float)(v11 * v6);
  v13 = v3 + (float)(v4 * v11);
  v14 = FIELD_F32(result, 6900) + (float)((float)((float)(v7 * v12) - (float)(v13 * v9)) + v8);
  v29 = v14;
  v15 = FIELD_F32(result, 6904) + (float)((float)((float)(v9 * v12) + (float)(v13 * v7)) + v10);
  v30 = v15;
  v16 = (_BYTE *)(result + 8024);
  v17 = (float)(((FIELD_U32(result, 24) >> 8) & 0x1Fu) + 3) * 16.0;
  if ( !FIELD_U8(result, 8024) )
  {
    if ( FIELD_F32(dword_60CC6484, 40) <= (float)((float)(v17 + 16.0) + (float)(v14 + -8.0)) )
    {
      v25 = v15 + 8.0;
      v19 = 0;
      v26 = FIELD_F32(dword_60CC6484, 52);
      v21 = FIELD_F32(dword_60CC6484, 44) <= v25;
      v27 = v25 - (float)((float)((float)((FIELD_U32(result, 24) & 0xFu) + 3) * 16.0) + 16.0);
      v24 = v27 == v26;
      v23 = v27 >= v26;
      goto LABEL_8;
    }
LABEL_13:
    *v16 = 0;
    return 0;
  }
  if ( FIELD_F32(dword_60CC6484, 40) > (float)((float)(v17 + 32.0) + (float)(v14 + -16.0)) )
    goto LABEL_13;
  v18 = v15 + 16.0;
  v19 = 0;
  v20 = FIELD_F32(dword_60CC6484, 52);
  v21 = FIELD_F32(dword_60CC6484, 44) <= v18;
  v22 = v18 - (float)((float)((float)((FIELD_U32(result, 24) & 0xFu) + 3) * 16.0) + 32.0);
  v24 = v22 == v20;
  v23 = v22 >= v20;
LABEL_8:
  if ( v24 || !v23 )
    v19 = 1;
  v28 = v19 & v21;
  *v16 = v28;
  if ( v28 )
    return sub_606361F8(result + 6916, &v29, (_DWORD *)(result + 156));
  return result;
}
