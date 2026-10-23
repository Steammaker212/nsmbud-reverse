/* sub_604221B4
 * address: 0x604221B4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604221B4(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r0
  bool v9; // zf
  int v11; // [sp+0h] [bp-1D8h] BYREF
  _BYTE v12[448]; // [sp+18h] [bp-1C0h] BYREF

  sub_60913508(v12);
  v2 = sub_60957F40(dword_60CD0B40, v12, 0);
  sub_6090B310(dword_60CCF464);
  sub_60443F28(a1 + 704);
  sub_60957EEC(dword_60CD0B40, 0);
  sub_6090B32C(dword_60CCF464);
  v3 = sub_608EF75C(a1);
  v4 = **(_DWORD **)(dword_60CD0B40 + 28);
  v5 = FIELD_U32(v4, 8);
  if ( v2 == 1 && (FIELD_U32(v4, 2352) & 0x400) != 0 )
    FIELD_U32(v3, 272) = v4 + 1600;
  sub_6090B260(v5, v12);
  v6 = ((int (__fastcall *)(int *, int))loc_6090E438)(&v11, v5);
  sub_6090E560(v6, v12, v5);
  v7 = FIELD_U8(a1, 689);
  if ( FIELD_U8(a1, 689) )
  {
    v8 = FIELD_U32(a1, 692);
    if ( v8 >= 1 )
      FIELD_U32(a1, 692) = v8 - 1;
  }
  v9 = dword_60CD0A20 == 0;
  if ( dword_60CD0A20 )
    v9 = v7 == 0;
  if ( !v9 && !FIELD_U32(a1, 692) )
    sub_60952648();
  return sub_60913598(v12);
}
