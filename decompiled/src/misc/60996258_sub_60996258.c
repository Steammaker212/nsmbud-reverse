/* sub_60996258
 * address: 0x60996258   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996258(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r0
  float v5; // s16
  int v6; // r1
  bool v7; // fzf

  v2 = sub_609916B0(a1);
  result = v2;
  if ( FIELD_U8(a1, 84) <= 1u )
  {
    if ( FIELD_U8(a1, 85) )
    {
      result = 0;
      if ( v2 != 1 )
        return result;
      v4 = FIELD_U32(a1, 60);
      v5 = FIELD_F32(v4, 16);
      v6 = sub_608502E4(v4);
      result = 0;
      v7 = v5 == (float)(unsigned int)v6;
    }
    else
    {
      result = 0;
      if ( v2 != 1 )
        return result;
      result = 0;
      v7 = *(float *)(FIELD_U32(a1, 60) + 16) == 0.0;
    }
    if ( v7 )
      return 1;
  }
  return result;
}
