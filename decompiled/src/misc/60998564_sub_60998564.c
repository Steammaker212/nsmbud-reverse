/* sub_60998564
 * address: 0x60998564   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60998564(int a1)
{
  int v2; // r6
  int v3; // r4
  bool v4; // zf
  int v5; // r0
  float v6; // s16
  bool v7; // fzf

  v2 = sub_609916B0(a1);
  v3 = v2;
  v4 = FIELD_U8(a1, 61) == 0;
  if ( FIELD_U8(a1, 61) )
    v4 = FIELD_U32(a1, 64) == 0;
  if ( !v4 && !sub_609912F8(a1) )
  {
    v3 = 0;
    if ( FIELD_U8(a1, 60) )
    {
      if ( v2 != 1 )
        return v3;
      v5 = FIELD_U32(a1, 64);
      v6 = FIELD_F32(v5, 16);
      v3 = 0;
      v7 = v6 == (float)(unsigned int)sub_608502E4(v5);
    }
    else
    {
      if ( v2 != 1 )
        return v3;
      v3 = 0;
      v7 = *(float *)(FIELD_U32(a1, 64) + 16) == 0.0;
    }
    if ( v7 )
      return 1;
  }
  return v3;
}
