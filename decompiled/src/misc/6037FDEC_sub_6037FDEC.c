/* sub_6037FDEC
 * address: 0x6037FDEC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037FDEC(int a1)
{
  float v2; // s0
  float *v3; // r5
  float v4; // r0
  float v5; // s2
  TileCheck *v6; // r0
  int result; // r0
  int v8; // r2
  char v9; // r1
  TileCheck_Result v10; // [sp+8h] [bp-A0h] BYREF
  TileCheck v11; // [sp+30h] [bp-78h] BYREF
  TileCheck_Param v12; // [sp+7Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-20h] BYREF
  Vec2 a3; // [sp+90h] [bp-18h] BYREF

  if ( (FIELD_U8(a1, 2872) & 1) == 0 || (FIELD_U32(a1, 5956) & 0xFF00) != 0x300 )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = (float *)(a1 + 6372);
    v4 = FIELD_F32(a1, 108);
    v5 = FIELD_F32(a1, 6372);
    *(_WORD *)&v12.field_0 = 0;
    a3.x = v4;
    positionOffset.x = v4;
    a3.y = v2 + (float)(v5 * -8.0);
    positionOffset.y = a3.y + (float)(v5 * 48.0);
    v12.field_2 = FIELD_U8(a1, 86);
    v12.field_3 = FIELD_U8(a1, 87);
    v12.field_4 = 0;
    v12.field_8 = 0;
    v6 = TileCheck_ctor(&v11, &v12);
    v10.field_C = 0;
    v10.field_10 = 0;
    if ( TileCheck_check(v6, &v10, &a3, &positionOffset, 15) == 1 )
      FIELD_F32(a1, 112) = v10.field_8 + (float)(*v3 * -4.0);
  }
  result = FIELD_U32(a1, 6300);
  if ( !result )
    goto LABEL_11;
  v8 = FIELD_U32(a1, 6304);
  v9 = 1;
  do
  {
    if ( *(_BYTE *)(*(_DWORD *)v8 + 128) )
      v9 &= *(_DWORD *)(*(_DWORD *)v8 + 48) == 3;
    --result;
    v8 += 4;
  }
  while ( result );
  if ( (v9 & 1) != 0 )
  {
LABEL_11:
    result = FIELD_U8(a1, 6356);
    if ( FIELD_U8(a1, 6356) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C969BC);
  }
  return result;
}
