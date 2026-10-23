/* SE_SYS_CE_ref_3_helper_6EB2D4
 * address: 0x606EB2D4   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall SE_SYS_CE_ref_3_helper_6EB2D4(int a1)
{
  int v2; // r5
  float v3; // s17
  float v4; // s24
  float v5; // s16
  float v6; // s22
  float v7; // s30
  float v8; // s20
  float v9; // s28
  float v10; // s16
  float v11; // s28
  float v12; // s24
  float v13; // s0
  float *v14; // r0
  float v15; // s2
  float *v16; // r1
  float v17; // s4
  float result; // s0

  v2 = dword_60CC6484;
  v3 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  v4 = FIELD_F32(dword_60CC6484, 108);
  v5 = FIELD_F32(dword_60CC6484, 24);
  v6 = FIELD_F32(dword_60CC6484, 28);
  v7 = FIELD_F32(dword_60CC6484, 32);
  v8 = FIELD_F32(dword_60CC6484, 36);
  v9 = FIELD_F32(dword_60CC6484, 104) * 0.5;
  if ( sub_607FCA88(dword_60CC6484) == 1 || sub_607FCA88(v2) == 4 )
  {
    v10 = ((float (*)(void))sub_60802488)();
    v11 = v9 + (float)(v9 + sub_60802488(v10));
  }
  else
  {
    v10 = (float)(v5 + v9) + 12.0;
    if ( v3 >= 0.0 )
      v11 = (float)(v9 + v3) + 28.0;
    else
      v11 = (float)(v9 + v7) + -8.0;
  }
  v12 = v4 * 0.5;
  if ( sub_607FCA88(v2) == 6 )
    v13 = (float)(FIELD_F32(v2, 28) - v12) + 16.0;
  else
    v13 = v6 - v12;
  v14 = (float *)(a1 + 2672);
  v15 = FIELD_F32(a1, 2672);
  if ( v15 < v10 || (v10 = v11, v15 > v11) )
  {
    v15 = v10;
    *v14 = v10;
  }
  v16 = (float *)(a1 + 2676);
  v17 = FIELD_F32(a1, 2676);
  if ( v17 < v13 || (v13 = (float)(v8 - v12) + 4.0, v17 > v13) )
  {
    v17 = v13;
    *v16 = v13;
  }
  result = (float)(int)(float)(v17 * -0.0625);
  *v14 = (float)((float)(int)(float)(v15 * 0.0625) * 16.0) + 8.0;
  *v16 = -8.0 - (float)(result * 16.0);
  return result;
}
