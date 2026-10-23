/* sub_608429F8
 * address: 0x608429F8   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608429F8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // r0
  int v11; // [sp+8h] [bp-90h] BYREF
  int v12; // [sp+Ch] [bp-8Ch]
  _DWORD *v13; // [sp+10h] [bp-88h]
  int v14; // [sp+14h] [bp-84h]
  _DWORD *v15; // [sp+18h] [bp-80h]
  int v16; // [sp+1Ch] [bp-7Ch]
  int v17; // [sp+20h] [bp-78h]
  int v18; // [sp+24h] [bp-74h]
  _DWORD v19[2]; // [sp+28h] [bp-70h] BYREF
  int v20; // [sp+30h] [bp-68h]
  int v21; // [sp+34h] [bp-64h]
  int v22; // [sp+38h] [bp-60h]
  int v23; // [sp+3Ch] [bp-5Ch]
  int v24; // [sp+40h] [bp-58h]
  int v25; // [sp+44h] [bp-54h]
  _DWORD v26[20]; // [sp+48h] [bp-50h] BYREF

  FIELD_U32(a1, 452) = a5;
  FIELD_U32(a1, 456) = a6;
  FIELD_U32(a1, 460) = a7;
  FIELD_U32(a1, 448) = a3;
  if ( FIELD_U8(a1, 368) )
  {
    sub_6083D59C(a1 + 8);
    FIELD_U8(a1, 368) = 0;
  }
  if ( FIELD_U8(a1, 440) )
    sub_6083CF58(a1 + 376);
  memset(v26, 0, 48);
  sub_6083D7C0(v26);
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19[1] = 0;
  v19[0] = 0;
  *(float *)&v26[2] = (float)a5;
  *(float *)&v26[3] = (float)a6;
  sub_6083D7E4(v19);
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v20 = a5;
  v21 = a6;
  sub_6083D7FC((int)&v11);
  LOBYTE(v11) = v11 | 1;
  v13 = v26;
  HIWORD(v11) = 1;
  v15 = v19;
  LOWORD(v12) = 1;
  sub_6083CDB4((int *)(a1 + 376), a2, (int)&v11);
  memset(v26, 0, 48);
  sub_60998F7C(v26);
  LOBYTE(v26[0]) = 1;
  v26[1] = a4;
  v26[6] = FIELD_U32(a1, 448);
  result = sub_6083D4BC(a1 + 8, a2, (unsigned __int8 *)v26);
  FIELD_U8(a1, 368) = 1;
  return result;
}
