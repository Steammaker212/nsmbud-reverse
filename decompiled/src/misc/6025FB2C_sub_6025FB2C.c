/* sub_6025FB2C
 * address: 0x6025FB2C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6025FB2C(int a1)
{
  float v1; // s0
  int v2; // r1
  TileCheck *v3; // r0
  int v4; // r4
  int v5; // r0
  bool v6; // zf
  Actor *v7; // r0
  bool v8; // zf
  _BYTE v10[12]; // [sp+8h] [bp-D0h] BYREF
  int v11; // [sp+14h] [bp-C4h]
  int v12; // [sp+18h] [bp-C0h]
  int v13; // [sp+28h] [bp-B0h]
  _BYTE v14[12]; // [sp+30h] [bp-A8h] BYREF
  int v15; // [sp+3Ch] [bp-9Ch]
  int v16; // [sp+40h] [bp-98h]
  TileCheck v17; // [sp+58h] [bp-80h] BYREF
  TileCheck_Param v18; // [sp+A4h] [bp-34h] BYREF
  _DWORD v19[2]; // [sp+B0h] [bp-28h] BYREF
  _DWORD v20[8]; // [sp+B8h] [bp-20h] BYREF

  v1 = FIELD_F32(a1, 112);
  v2 = FIELD_U32(a1, 108);
  *(_WORD *)&v18.field_0 = 0;
  v20[0] = v2;
  v19[0] = v2;
  *(float *)&v20[1] = v1 + 4.0;
  *(float *)&v19[1] = v1 + -4.0;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v3 = TileCheck_ctor(&v17, &v18);
  v15 = 0;
  v11 = 0;
  v16 = 0;
  v12 = 0;
  v4 = ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D2DC)(v3, v14, v20, v19, 8);
  v5 = ((int (__fastcall *)(TileCheck *, _BYTE *, _DWORD *, _DWORD *, int))loc_6015D6F0)(&v17, v10, v20, v19, 8);
  v6 = v4 == 0;
  if ( !v4 )
    v6 = v5 == 1;
  if ( v6 )
  {
    v7 = (Actor *)v13;
    v8 = v13 == 0;
    if ( v13 )
    {
      v7 = *(Actor **)(v13 + 144);
      v8 = v7 == 0;
    }
    return !v8 && Actor__getProfileId(v7) == 372;
  }
  return v4;
}
