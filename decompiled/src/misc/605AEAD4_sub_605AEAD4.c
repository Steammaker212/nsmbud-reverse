/* sub_605AEAD4
 * address: 0x605AEAD4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AEAD4(char *a1)
{
  TileCheck *v2; // r0
  TileCheck_Result v4; // [sp+8h] [bp-A0h] BYREF
  TileCheck v5; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v6; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 v7; // [sp+88h] [bp-20h] BYREF
  Vec2 v8[3]; // [sp+90h] [bp-18h] BYREF

  (*(void (__fastcall **)(char *, Vec2 *, Vec2 *))(*(_DWORD *)a1 + 244))(a1, v8, &v7);
  *(_WORD *)&v6.field_0 = 1;
  v6.field_2 = a1[86];
  v6.field_3 = a1[87];
  v6.field_4 = 0;
  v6.field_8 = 0;
  v2 = TileCheck_ctor(&v5, &v6);
  v4.field_C = 0;
  v4.field_10 = 0;
  return TileCheck_check(v2, &v4, v8, &v7, 15);
}
