/* sub_6049FCFC
 * address: 0x6049FCFC   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6049FCFC(_DWORD *a1)
{
  int v1; // r6
  int v2; // r2
  int v3; // r3
  int v4; // r7
  int v5; // r1
  _DWORD *v6; // r6
  _DWORD *v7; // r5
  int v10; // [sp+Ch] [bp-4Ch]
  int v11; // [sp+10h] [bp-48h]
  int v12; // [sp+14h] [bp-44h]
  int v13; // [sp+18h] [bp-40h]
  int v14; // [sp+1Ch] [bp-3Ch]
  int v15; // [sp+20h] [bp-38h]
  int v16; // [sp+24h] [bp-34h]
  int v17; // [sp+28h] [bp-30h]
  int v18; // [sp+2Ch] [bp-2Ch]

  v1 = 203108;
  v2 = 201788;
  v3 = -182268;
  v4 = 50461;
  *a1 = off_60BFDC70;
  v5 = 204672;
  v18 = 51142;
  v17 = 50979;
  v16 = 50878;
  v15 = 50676;
  v14 = 50575;
  do
  {
    v12 = v1;
    v10 = v3;
    v11 = v2;
    v13 = v5;
    v6 = (_DWORD *)((char *)a1 + v5);
    *(_DWORD *)((char *)a1 + v2) = off_60BF9834;
    v7 = (_DWORD *)((char *)a1 + v2);
    *(_DWORD *)((char *)a1 + v2 + 2884) = EffectWrapper_vtable;
    sub_60237560((int)a1 + v5);
    sead__IDisposer__dtor(v6);
    v7[695] = EffectWrapper_vtable;
    sub_60237560((int)&a1[v18]);
    sead__IDisposer__dtor(&a1[v18]);
    sub_6045C0A0((int)&a1[v17]);
    sub_6045C0A0((int)&a1[v16]);
    sub_6045C0A0((int)a1 + v12);
    sub_6045C0A0((int)&a1[v15]);
    sub_6045C0A0((int)&a1[v14]);
    sub_60026BFC(&a1[v4]);
    sead__IDisposer__dtor(v7);
    v1 = v12 - 2988;
    v4 -= 747;
    v18 -= 747;
    v17 -= 747;
    v16 -= 747;
    v15 -= 747;
    v14 -= 747;
    v2 = v11 - 2988;
    v3 = v10 + 2988;
    v5 = v13 - 2988;
  }
  while ( v10 != -2988 );
  sub_6045C0A0((int)(a1 + 5482));
  sub_6045C0A0((int)(a1 + 5381));
  sub_6045C0A0((int)(a1 + 5280));
  sub_6045C0A0((int)(a1 + 5179));
  sub_6045C0A0((int)(a1 + 5078));
  sub_6050A4C4(a1 + 3247);
  sub_60558120(a1 + 2324);
  sub_6050B5C8(a1 + 1429);
  sub_605021B0(a1 + 909);
  sub_60475AE8(a1 + 11);
  return a1;
}
