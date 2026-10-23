/* sub_604AB390
 * address: 0x604AB390   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AB390(int a1)
{
  int v2; // r7
  int v3; // r10
  int v4; // r0
  int v5; // r4
  int v6; // r11
  int v8; // [sp+0h] [bp-40h]
  int v9; // [sp+4h] [bp-3Ch]
  int v10; // [sp+8h] [bp-38h]
  int v11; // [sp+Ch] [bp-34h]
  int v12; // [sp+10h] [bp-30h]
  int v13; // [sp+14h] [bp-2Ch]
  int v14; // [sp+18h] [bp-28h]

  sub_6045C0A0(a1 + 279288);
  sub_6045C0A0(a1 + 278884);
  sub_6045C0A0(a1 + 278480);
  sub_6045C0A0(a1 + 278076);
  sub_6045C0A0(a1 + 277672);
  v8 = a1;
  v2 = a1 + 274536;
  v14 = a1 + 277420;
  v13 = a1 + 277316;
  v12 = a1 + 276664;
  v11 = a1 + 276260;
  v10 = a1 + 275856;
  v9 = a1 + 182268;
  v3 = a1 + 275048;
  v4 = a1 + 160;
  v5 = 0;
  v6 = v4 + 274432;
  do
  {
    *(_DWORD *)(v2 + v5) = off_60BF9834;
    *(_DWORD *)(v2 + v5 + 2884) = EffectWrapper_vtable;
    sub_60237560(v14 + v5);
    sead__IDisposer__dtor((_DWORD *)(v14 + v5));
    *(_DWORD *)(v2 + v5 + 2780) = EffectWrapper_vtable;
    sub_60237560(v13 + v5);
    sead__IDisposer__dtor((_DWORD *)(v13 + v5));
    sub_6045C0A0(v12 + v5);
    sub_6045C0A0(v11 + v5);
    sub_6045C0A0(v10 + v5);
    sub_6045C0A0(v9 + v5 + 93184);
    sub_6045C0A0(v3 + v5);
    sub_60026BFC((_DWORD *)(v6 + v5));
    sead__IDisposer__dtor((_DWORD *)(v2 + v5));
    v5 -= 2988;
  }
  while ( v5 != -182268 );
  sub_6050A4C4(v8 + 88036);
  sub_605021B0(v8 + 85956);
  sub_604A4320(v8 + 65400);
  sub_604A4320(v8 + 44844);
  sub_604A4320(v8 + 24288);
  sub_604A4320(v8 + 3732);
  sub_60475AE8((_DWORD *)(v8 + 64));
  return v8;
}
