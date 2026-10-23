/* sub_600024C4
 * address: 0x600024C4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600024C4(int result)
{
  float v1; // s16
  float v3; // s0
  int v4; // r1
  TileCheck *v5; // r0
  int *v6; // r1
  int v7; // [sp+0h] [bp-80h] BYREF
  int v8; // [sp+4h] [bp-7Ch]
  TileCheck v9; // [sp+10h] [bp-70h] BYREF
  TileCheck_Param v10; // [sp+5Ch] [bp-24h] BYREF
  _DWORD v11[6]; // [sp+68h] [bp-18h] BYREF

  if ( (FIELD_U8(result, 87) & 1) == 0 || FIELD_U8(result, 86) )
    return FIELD_F32(result, 116);
  v3 = FIELD_F32(result, 112);
  v4 = FIELD_U32(result, 108);
  v10.field_0 = 0;
  v10.field_1 = 0;
  v10.field_2 = 0;
  v11[0] = v4;
  v10.field_3 = 3;
  v10.field_4 = 0;
  v10.field_8 = 0;
  *(float *)&v11[1] = v3 + 2.0;
  v5 = TileCheck_ctor(&v9, &v10);
  v1 = 4500.0;
  if ( !((int (__fastcall *)(TileCheck *, int *, _DWORD *))sub_6015DBD8)(v5, &v7, v11) )
  {
    v9.field_2 = 2;
    if ( ((int (__fastcall *)(TileCheck *, int *, _DWORD *))sub_6015DBD8)(&v9, &v7, v11) == 1 )
    {
      if ( (_WORD)v7 )
      {
        return 3300.0;
      }
      else
      {
        v6 = dword_600025B0;
        if ( (v8 & 0xF) == 0 )
          v6 = &dword_600025B0[1];
        return *(float *)v6;
      }
    }
  }
  return v1;
}
