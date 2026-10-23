/* sub_60989BCC
 * address: 0x60989BCC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989BCC(int a1, int a2, float a3)
{
  _BOOL4 v6; // r0
  bool v7; // zf
  char v8; // r0
  float v9; // s0

  if ( (float)-(float)(unsigned int)sub_608502E4(a1) > a3 || (float)(unsigned int)sub_608502E4(a1) < a3 )
  {
    v6 = sub_60850310(a1);
    v7 = a2 == 0;
    if ( !a2 )
      v7 = v6;
    if ( !v7 )
      return sub_60850310(a1);
  }
  FIELD_U8(a1, 50) = a2;
  FIELD_F32(a1, 44) = a3;
  v8 = FIELD_U8(a1, 51);
  FIELD_U8(a1, 51) = v8 & 0xF0;
  if ( (v8 & 0x10) != 0 && sub_608502E4(a1) )
  {
    if ( a3 >= 0.0 )
    {
      if ( FIELD_F32(a1, 16) < a3 )
        FIELD_F32(a1, 16) = a3;
    }
    else
    {
      v9 = (float)(unsigned int)sub_608502E4(a1) + a3;
      if ( FIELD_F32(a1, 16) > v9 )
        FIELD_F32(a1, 16) = v9;
    }
  }
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 16))(a1, 1);
}
