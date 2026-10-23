/* sub_602E5960
 * address: 0x602E5960   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E5960(float *a1)
{
  float v2; // s0
  int result; // r0
  float v4; // s2
  float v5; // s2
  float v6; // s0
  float v7; // s2

  v2 = a1[27] + a1[143];
  result = 0;
  v4 = FIELD_F32(dword_60CC6484, 112);
  if ( v2 >= v4 && v2 <= (float)(v4 + FIELD_F32(dword_60CC6484, 104)) )
  {
    v5 = FIELD_F32(dword_60CC6484, 124);
    v6 = a1[28] + a1[144];
    if ( v6 <= v5 )
    {
      v7 = v5 - FIELD_F32(dword_60CC6484, 108);
      result = 1;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
        v7 = v7 + -32.0;
      if ( v6 < v7 )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
