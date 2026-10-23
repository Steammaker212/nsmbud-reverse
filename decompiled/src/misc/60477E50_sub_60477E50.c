/* sub_60477E50
 * address: 0x60477E50   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477E50(int a1)
{
  int v2; // r0
  float v3; // s16
  int v4; // r5
  int v5; // r0
  int v6; // r0
  float v7; // s16

  if ( FIELD_U8(a1, 160) )
  {
    v2 = FIELD_U32(a1, 112);
    v3 = FIELD_F32(v2, 16);
    v4 = 1;
    if ( v3 == (float)(unsigned int)sub_608502E4(v2) )
      return v4;
    v5 = FIELD_U32(a1, 128);
  }
  else
  {
    v6 = FIELD_U32(a1, 128);
    v7 = FIELD_F32(v6, 16);
    v4 = 1;
    if ( v7 == (float)(unsigned int)sub_608502E4(v6) )
      return v4;
    v5 = FIELD_U32(a1, 112);
  }
  v4 = 0;
  if ( FIELD_F32(v5, 16) == 0.0 )
  {
    sub_60853354(a1, 1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  }
  return v4;
}
