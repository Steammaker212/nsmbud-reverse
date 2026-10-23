/* sub_60455D54
 * address: 0x60455D54   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60455D54(_DWORD *a1, int a2, void *a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0
  _DWORD v9[2]; // [sp+0h] [bp-48h] BYREF
  int v10; // [sp+8h] [bp-40h]
  int v11; // [sp+Ch] [bp-3Ch]
  int v12; // [sp+10h] [bp-38h]
  int v13; // [sp+14h] [bp-34h]
  int v14; // [sp+18h] [bp-30h]
  int v15; // [sp+1Ch] [bp-2Ch]
  char v16; // [sp+20h] [bp-28h]
  char v17; // [sp+21h] [bp-27h]
  int v18; // [sp+24h] [bp-24h]
  int v19; // [sp+28h] [bp-20h]
  char v20; // [sp+2Ch] [bp-1Ch]

  v5 = FIELD_U32(dword_60CC6D78, 128);
  if ( v5 )
  {
    a1[1] = 864136;
    a1[2] = v5;
  }
  v6 = operator_new_8DE25C(0x20u, a3, 4);
  v7 = sub_60905100(v6, a1[2], 864136, 0);
  a1[3] = v7;
  sub_609052F4(v7, 0);
  a1[58] = 0;
  FIELD_U32(dword_60CC6D78, 132) = 0;
  v9[0] = &sead__SafeStringBase__vtable;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v9[1] = &byte_60B3BA34;
  v10 = 0;
  v16 = 1;
  v17 = 1;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  sead__SafeStringBase__operator_assign((int)v9, a2);
  v10 = a1[2];
  v11 = a1[1];
  sub_608E8914(dword_60CCEBD0, v9);
  result = v18;
  a1[58] = v18;
  FIELD_U32(dword_60CC6D78, 132) = result;
  return result;
}
