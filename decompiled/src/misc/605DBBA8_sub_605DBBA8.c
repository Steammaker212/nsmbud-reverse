/* sub_605DBBA8
 * address: 0x605DBBA8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DBBA8(int a1, TileCheck_Result *a2, Vec2 *a3, Vec2 *a4, int a5)
{
  int result; // r0
  TileCheck *v10; // r7
  __int16 v11; // [sp+8h] [bp-28h] BYREF
  char v12; // [sp+Ah] [bp-26h]
  char v13; // [sp+Bh] [bp-25h]
  int v14; // [sp+Ch] [bp-24h]
  int (***v15)(); // [sp+10h] [bp-20h]
  int (**v16)(); // [sp+14h] [bp-1Ch] BYREF

  v16 = off_60C0B478;
  v11 = 256;
  v12 = FIELD_U8(a1, 86);
  v13 = FIELD_U8(a1, 87);
  result = 0;
  v14 = 0;
  v15 = &v16;
  if ( FIELD_F32(a3, 0x0) != FIELD_F32(a4, 0x0) || FIELD_F32(a3, 0x4) != FIELD_F32(a4, 0x4) )
  {
    sub_6014F61C(a1 + 648);
    v10 = (TileCheck *)(a1 + 652);
    sub_6015D144(v10, (int)&v11);
    return TileCheck_check(v10, a2, a3, a4, a5);
  }
  return result;
}
