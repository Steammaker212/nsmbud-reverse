/* sub_600D8F9C
 * address: 0x600D8F9C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D8F9C(int a1)
{
  _DWORD *v1; // r0
  int *v2; // r5
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  float v6; // s18
  float v7; // s16
  TileCheck *v8; // r0
  float v9; // s4
  float v10; // s2
  int v11; // r0
  Vec2 positionOffset; // [sp+8h] [bp-90h] BYREF
  Vec2 a3; // [sp+10h] [bp-88h] BYREF
  TileCheck v14; // [sp+18h] [bp-80h] BYREF
  TileCheck_Param v15; // [sp+64h] [bp-34h] BYREF

  v2 = (int *)(a1 + 7096);
  v1 = *(_DWORD **)(a1 + 7096);
  v3 = v1[3];
  v4 = v1[2];
  v5 = v1[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  v6 = *(float *)(*(_DWORD *)v3 + 8);
  v7 = *(float *)(*(_DWORD *)v3 + 20);
  *(_WORD *)&v15.field_0 = 0;
  v15.field_2 = *((_BYTE *)v2 - 7010);
  v15.field_3 = *((_BYTE *)v2 - 7009);
  v15.field_4 = 0;
  v15.field_8 = 0;
  v8 = TileCheck_ctor(&v14, &v15);
  v9 = *((float *)v2 - 1746);
  v10 = (float)((float)((float)(*((float *)v2 - 1749) * 0.5) * 10.0) * 10.0) + (float)(*((float *)v2 - 1743) * 10.0);
  a3.x = *((float *)v2 - 1747) + (float)(*((float *)v2 - 1744) * 10.0);
  a3.y = v9;
  positionOffset.x = a3.x;
  positionOffset.y = v10 + v9;
  v11 = TileCheck_check(v8, 0, &a3, &positionOffset, 15);
  if ( v7 > 10.0 && v11 == 1 && v7 < (float)(v6 + -10.0) )
    sub_60421AD4(*v2);
}
