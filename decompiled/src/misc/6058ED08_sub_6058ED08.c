/* sub_6058ED08
 * address: 0x6058ED08   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058ED08(int a1)
{
  int result; // r0
  float v3; // s2
  float *v4; // r0
  int v5; // s0
  float v6; // s6
  float v7; // s2
  int v8; // r1
  char v9; // r2
  float v10; // [sp+0h] [bp-18h] BYREF
  float v11; // [sp+4h] [bp-14h]

  if ( (FIELD_U8(dword_60C9CF0C, 1364) & 2) != 0 )
  {
    sub_603F4BF4(AreaTask_intance, &v10, (int *)(dword_60C9CF0C + 1368));
    v3 = v10 * 0.0625;
    v4 = (float *)dword_60CBC000;
    FIELD_F32(dword_60CBC000, 32) = v10;
    v5 = (int)(float)(v11 * 0.0625);
    v4[9] = v11;
    v6 = (float)((float)(int)v3 * 16.0) + 8.0;
    v7 = (float)((float)v5 * 16.0) + -8.0;
    v10 = v6;
    v11 = v7;
    FIELD_F32(a1, 108) = v6;
    FIELD_F32(a1, 112) = v7;
    v4[6] = v6;
    v4[7] = v7;
    result = sub_6058F1F0(a1);
    v8 = dword_60CBC000;
    v9 = 1;
    if ( !result )
    {
      result = 1;
      v9 = 0;
      FIELD_U8(dword_60CBC000, 153) = 1;
      FIELD_U32(v8, 112) = 1;
    }
    FIELD_U8(v8, 157) = v9;
  }
  else
  {
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}
