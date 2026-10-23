/* sub_6039C5A8
 * address: 0x6039C5A8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039C5A8(int a1)
{
  int v2; // r0
  float v3; // s0
  TileCheck *v4; // r0
  int result; // r0
  _BYTE v6[8]; // [sp+8h] [bp-A8h] BYREF
  int v7; // [sp+10h] [bp-A0h]
  int v8; // [sp+14h] [bp-9Ch]
  int v9; // [sp+18h] [bp-98h]
  TileCheck v10; // [sp+34h] [bp-7Ch] BYREF
  int (**v11)(); // [sp+80h] [bp-30h] BYREF
  TileCheck_Param v12; // [sp+84h] [bp-2Ch] BYREF
  _DWORD v13[2]; // [sp+90h] [bp-20h] BYREF
  _DWORD v14[6]; // [sp+98h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  *(_WORD *)&v12.field_0 = 0;
  v13[0] = v2;
  v14[0] = v2;
  *(float *)&v13[1] = v3;
  *(float *)&v14[1] = v3 + 28.0;
  v11 = off_60BF4348;
  v12.field_2 = FIELD_U8(a1, 86);
  v12.field_3 = FIELD_U8(a1, 87);
  v12.field_4 = 0;
  v12.field_8 = (int)&v11;
  v4 = TileCheck_ctor(&v10, &v12);
  v8 = 0;
  v9 = 0;
  result = ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(v4, v6, v14, v13, 8);
  if ( result == 1 )
  {
    result = v7;
    FIELD_U32(a1, 112) = v7;
  }
  return result;
}
