/* sub_60428EFC
 * address: 0x60428EFC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60428EFC(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int result; // r0
  _DWORD v7[2]; // [sp+8h] [bp-68h] BYREF
  int v8; // [sp+10h] [bp-60h]
  int v9; // [sp+14h] [bp-5Ch]
  int v10; // [sp+18h] [bp-58h]
  int v11; // [sp+1Ch] [bp-54h]
  int v12; // [sp+20h] [bp-50h]
  int v13; // [sp+24h] [bp-4Ch]
  int v14; // [sp+28h] [bp-48h]
  int v15; // [sp+2Ch] [bp-44h]
  int v16; // [sp+30h] [bp-40h]
  int v17; // [sp+34h] [bp-3Ch]
  int v18; // [sp+38h] [bp-38h]
  int v19; // [sp+3Ch] [bp-34h]
  int v20; // [sp+40h] [bp-30h]
  int v21; // [sp+44h] [bp-2Ch]
  int v22; // [sp+48h] [bp-28h]
  int v23; // [sp+4Ch] [bp-24h]
  int v24; // [sp+50h] [bp-20h]
  int v25; // [sp+54h] [bp-1Ch]
  int v26; // [sp+58h] [bp-18h]
  int v27; // [sp+5Ch] [bp-14h]
  int v28; // [sp+60h] [bp-10h]
  int v29; // [sp+64h] [bp-Ch]

  v5 = a1 + 16;
  if ( a2 )
    sub_6043DB00(v5, a2, a1, a3, a4);
  else
    sub_6043D2C0(v5);
  v7[0] = FIELD_U32(a1, 12);
  v10 = 0;
  v11 = 8;
  v12 = 0;
  v13 = -1;
  v14 = 0;
  v15 = 8;
  v16 = 0;
  v17 = -1;
  v18 = 0;
  v19 = 8;
  v20 = 0;
  v21 = -1;
  v22 = 0;
  v23 = 8;
  v24 = 0;
  v25 = -1;
  v26 = 0;
  v27 = 8;
  v28 = 0;
  v29 = -1;
  v8 = 0;
  v9 = 0;
  v7[1] = 1;
  sub_6086BF0C(v7);
  result = v8;
  FIELD_U32(a1, 764) = v8;
  return result;
}
