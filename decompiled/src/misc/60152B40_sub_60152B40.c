/* sub_60152B40
 * address: 0x60152B40   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60152B40(char a1, float a2, float a3)
{
  int v4; // r4
  TileCheck *v5; // r0
  float v6; // s0
  TileCheck v8; // [sp+4h] [bp-A4h] BYREF
  _BYTE v9[8]; // [sp+50h] [bp-58h] BYREF
  float v10; // [sp+58h] [bp-50h]
  int v11; // [sp+5Ch] [bp-4Ch]
  int v12; // [sp+60h] [bp-48h]
  TileCheck_Param v13; // [sp+7Ch] [bp-2Ch] BYREF
  float v14[2]; // [sp+88h] [bp-20h] BYREF
  float v15[6]; // [sp+90h] [bp-18h] BYREF

  v4 = 0;
  v15[0] = a2;
  v14[0] = a2;
  v13.field_0 = 0;
  v13.field_1 = 0;
  v13.field_2 = a1;
  v11 = 0;
  v12 = 0;
  v13.field_3 = 3;
  v13.field_4 = 0;
  v13.field_8 = 0;
  v15[1] = a3;
  v14[1] = a3 + -128.0;
  v5 = TileCheck_ctor(&v8, &v13);
  if ( ((int (__fastcall *)(TileCheck *, _BYTE *, float *, float *, int))loc_6015D6F0)(v5, v9, v15, v14, 8) != 1 )
    return 3;
  v6 = a3 - v10;
  if ( (float)(a3 - v10) > 0.0 )
  {
    v4 = 1;
    if ( v6 > 8.0 )
    {
      v4 = 2;
      if ( v6 > 32.0 )
        return 3;
    }
  }
  return v4;
}
