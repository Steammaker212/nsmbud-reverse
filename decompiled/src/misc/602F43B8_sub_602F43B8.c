/* sub_602F43B8
 * address: 0x602F43B8   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F43B8(int a1)
{
  int v2; // r0
  float v3; // s16
  unsigned __int8 v4; // r5
  float v5; // s22
  TileCheck *v6; // r0
  char v7; // r1
  float v8; // s22
  unsigned __int8 v9; // r5
  TileCheck *v10; // r0
  char v11; // r1
  float v12; // s22
  int v13; // r5
  TileCheck *v15; // r0
  char v16; // r1
  Vec2 positionOffset; // [sp+8h] [bp-98h] BYREF
  Vec2 a3; // [sp+10h] [bp-90h] BYREF
  TileCheck v19; // [sp+18h] [bp-88h] BYREF
  _DWORD v20[15]; // [sp+64h] [bp-3Ch] BYREF

  v2 = FIELD_U32(a1, 60);
  v3 = FIELD_F32(v2, 112);
  v4 = FIELD_U8(v2, 86);
  v5 = FIELD_F32(v2, 108) + -4.0;
  *(float *)&v19.field_0 = v5;
  *(float *)&v19.field_4 = v3 + -12.0;
  v19.field_8 = 0;
  ((void (__fastcall *)(_DWORD *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(v20, 0, &v19, v4);
  if ( v20[0] )
    return 1;
  v6 = sub_6015D0AC(&v19);
  v19.field_2 = v4;
  v7 = *(_BYTE *)(FIELD_U32(a1, 60) + 87);
  a3.x = v5;
  positionOffset.x = v5;
  a3.y = v3;
  positionOffset.y = v3 + -20.0;
  v19.field_3 = v7;
  if ( TileCheck_check(v6, 0, &a3, &positionOffset, 8) )
    return 1;
  v8 = v5 + 4.0;
  v9 = *(_BYTE *)(FIELD_U32(a1, 60) + 86);
  *(float *)&v19.field_0 = v8;
  *(float *)&v19.field_4 = v3 + -12.0;
  v19.field_8 = 0;
  ((void (__fastcall *)(_DWORD *, _DWORD, TileCheck *, _DWORD))checkLiquidCollisions)(v20, 0, &v19, v9);
  if ( v20[0] )
    return 1;
  v10 = sub_6015D0AC(&v19);
  v19.field_2 = v9;
  v11 = *(_BYTE *)(FIELD_U32(a1, 60) + 87);
  a3.x = v8;
  positionOffset.x = v8;
  a3.y = v3;
  positionOffset.y = v3 + -20.0;
  v19.field_3 = v11;
  if ( TileCheck_check(v10, 0, &a3, &positionOffset, 8) )
    return 1;
  v12 = v8 + 4.0;
  v13 = *(unsigned __int8 *)(FIELD_U32(a1, 60) + 86);
  *(float *)&v19.field_0 = v12;
  *(float *)&v19.field_4 = v3 + -12.0;
  v19.field_8 = 0;
  ((void (__fastcall *)(_DWORD *, _DWORD, TileCheck *, int))checkLiquidCollisions)(v20, 0, &v19, v13);
  if ( v20[0] )
    return 1;
  v15 = sub_6015D0AC(&v19);
  v19.field_2 = v13;
  v16 = *(_BYTE *)(FIELD_U32(a1, 60) + 87);
  a3.x = v12;
  positionOffset.x = v12;
  a3.y = v3;
  positionOffset.y = v3 + -20.0;
  v19.field_3 = v16;
  return TileCheck_check(v15, 0, &a3, &positionOffset, 8);
}
