/* sub_60763CF8
 * address: 0x60763CF8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60763CF8(int a1)
{
  float v2; // s4
  int result; // r0
  float v4; // s16
  float v5; // s2
  float v6; // r1
  float v7; // s0
  int v8; // r0
  int v9; // r1
  float v10; // [sp+0h] [bp-20h] BYREF
  float v11[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_F32(a1, 112);
  result = dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 124) + 96.0;
  if ( v2 > v4 )
  {
    if ( (sub_607FCAA8(dword_60CC6484) == 3 || sub_607FCABC(dword_60CC6484) == 3)
      && (FIELD_U8(a1, 6900) & 1) != 0
      && (v5 = FIELD_F32(a1, 112),
          v6 = FIELD_F32(a1, 116),
          v11[0] = FIELD_F32(a1, 108),
          v11[1] = v5 + -32.0,
          v11[2] = v6,
          sub_60155C38(a1 + 1328, v11, &v10, 0, 32.0) == 1) )
    {
      v7 = v4 + -20.0;
      if ( v10 < (float)(v4 + -20.0) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
      v8 = FIELD_U32(a1, 108);
      FIELD_F32(a1, 112) = v7;
      v9 = FIELD_U32(a1, 116);
      FIELD_U32(a1, 584) = v8;
      FIELD_F32(a1, 588) = v7;
      FIELD_U32(a1, 592) = v9;
      FIELD_U32(a1, 608) = v8;
      FIELD_F32(a1, 612) = v7;
      FIELD_U32(a1, 616) = v9;
    }
    else
    {
      FIELD_F32(a1, 112) = v4;
    }
    result = FIELD_U32(a1, 1236) | 0x400;
    FIELD_U32(a1, 1236) = result;
  }
  return result;
}
