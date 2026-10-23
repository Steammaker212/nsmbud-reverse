/* sub_605996D0
 * address: 0x605996D0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605996D0(int a1, float result)
{
  _DWORD *v3; // r0
  int v4; // t1
  int v5; // r0
  float v6; // s0
  signed int v7; // [sp+0h] [bp-10h] BYREF
  int v8; // [sp+4h] [bp-Ch] BYREF

  v4 = FIELD_U32(a1, 8012);
  v3 = (_DWORD *)(a1 + 8012);
  if ( v4 == 11 )
  {
    if ( (FIELD_U8(a1, 6262) & 2) != 0 )
    {
      v5 = byte_60B0594C[FIELD_U32(a1, 80)];
      v7 = v5 << 27;
      v8 = 357913941 * v5;
      sub_6083246C((int *)(a1 + 160), &v8, &v7);
      v6 = 1.0 - sub_6059BB74(a1 + 8036);
      if ( v6 >= 0.0 )
      {
        if ( v6 > 1.0 )
          v6 = 1.0;
      }
      else
      {
        v6 = 0.0;
      }
      FIELD_F32(a1, 100) = (float)(v6 * 0.15) + -0.045;
      FIELD_U32(a1, 104) = 1022739087;
      result = (float)byte_60B0594C[FIELD_U32(a1, 80)] * 0.3;
      FIELD_F32(a1, 132) = result;
    }
    else
    {
      *v3 = 3;
    }
  }
  else
  {
    sub_605E16D4(a1);
  }
  return result;
}
