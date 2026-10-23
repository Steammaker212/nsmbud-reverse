/* sub_60807DF0
 * address: 0x60807DF0   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807DF0(int a1)
{
  int v2; // r6
  bool v3; // zf
  int v4; // r6
  char v5; // r5
  int result; // r0
  int v7; // [sp+4h] [bp-1Ch] BYREF
  int v8; // [sp+8h] [bp-18h] BYREF
  _DWORD v9[5]; // [sp+Ch] [bp-14h] BYREF

  sub_608AE25C(&v7, a1 + 76);
  if ( v7 )
  {
    v2 = sub_608BC7E0();
    sub_608AE348(&v7);
    v3 = v2 == 1;
    if ( v2 == 1 )
      v3 = FIELD_U8(a1, 192) == 0;
    if ( v3 )
    {
      sub_60818070(dword_60CC6B68);
      goto LABEL_14;
    }
  }
  else
  {
    sub_608AE348(&v7);
  }
  sub_608AE25C(&v8, a1 + 76);
  if ( v8 )
  {
    v4 = sub_608BC7E0();
    sub_608AE348(&v8);
    if ( v4 )
      goto LABEL_14;
  }
  else
  {
    sub_608AE348(&v8);
  }
  if ( FIELD_U8(a1, 192) )
    sub_608180B8(dword_60CC6B68);
LABEL_14:
  sub_608AE25C(v9, a1 + 76);
  if ( v9[0] )
    v5 = sub_608BC7E0();
  else
    v5 = 0;
  result = sub_608AE348(v9);
  FIELD_U8(a1, 192) = v5;
  return result;
}
