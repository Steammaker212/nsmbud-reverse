/* sub_60844794
 * address: 0x60844794   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60844794(int a1, int a2, int a3, int a4, int a5, int a6)
{
  float v8; // s0
  int v9; // r0
  int v12; // [sp+8h] [bp-90h] BYREF
  int v13; // [sp+Ch] [bp-8Ch]
  _DWORD *v14; // [sp+10h] [bp-88h]
  int v15; // [sp+14h] [bp-84h]
  _DWORD *v16; // [sp+18h] [bp-80h]
  int v17; // [sp+1Ch] [bp-7Ch]
  int v18; // [sp+20h] [bp-78h]
  int v19; // [sp+24h] [bp-74h]
  _DWORD v20[2]; // [sp+28h] [bp-70h] BYREF
  int v21; // [sp+30h] [bp-68h]
  int v22; // [sp+34h] [bp-64h]
  int v23; // [sp+38h] [bp-60h]
  int v24; // [sp+3Ch] [bp-5Ch]
  int v25; // [sp+40h] [bp-58h]
  int v26; // [sp+44h] [bp-54h]
  _DWORD v27[20]; // [sp+48h] [bp-50h] BYREF

  FIELD_U32(a1, 1376) = a3;
  FIELD_U32(a1, 1380) = a5;
  FIELD_U32(a1, 1384) = a6;
  if ( FIELD_U8(a1, 8) )
    sub_6083D59C(a1 + 8);
  if ( FIELD_U8(a1, 1368) )
    sub_6083CF58(a1 + 1304);
  memset(v27, 0, 48);
  sub_6083D7C0(v27);
  v8 = (float)FIELD_S32(a1, 1380);
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20[1] = 0;
  v20[0] = 0;
  *(float *)&v27[2] = v8;
  *(float *)&v27[3] = v8;
  sub_6083D7E4(v20);
  v9 = FIELD_U32(a1, 1380);
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v21 = v9;
  v22 = v9;
  sub_6083D7FC((int)&v12);
  LOBYTE(v12) = v12 | 1;
  v14 = v27;
  HIWORD(v12) = 1;
  v16 = v20;
  LOWORD(v13) = 1;
  sub_6083CDB4((int *)(a1 + 1304), a2, (int)&v12);
  memset(v27, 0, 48);
  sub_60998F7C(v27);
  LOBYTE(v27[0]) = 1;
  v27[1] = a4;
  v27[6] = FIELD_U32(a1, 1376);
  return sub_6083D4BC(a1 + 8, a2, (unsigned __int8 *)v27);
}
