/* sub_608203FC
 * address: 0x608203FC   size: 1152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608203FC(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  char v9; // r0
  int v10; // r2
  int v11; // r1
  char v12; // r0
  char v13; // r0
  char v14; // r0
  int v15; // r1
  int v16; // r2
  int v18; // [sp+4h] [bp-24h] BYREF
  int v19; // [sp+8h] [bp-20h]
  int v20; // [sp+Ch] [bp-1Ch]

  v2 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 412) = FIELD_U8(a1, 4);
  FIELD_U32(v2, 416) = FIELD_U8(a1, 5);
  v3 = FIELD_U8(a1, 6);
  if ( v3 == 255 )
    v3 = -1;
  FIELD_U32(v2, 420) = v3;
  FIELD_U32(v2, 444) = FIELD_U8(a1, 4);
  v18 = -1;
  v19 = -1;
  v20 = -1;
  if ( FIELD_U8(a1, 7) != 255 )
  {
    v4 = FIELD_U8(a1, 9);
    v5 = FIELD_U8(a1, 8);
    v18 = FIELD_U8(a1, 7);
    v19 = v5;
    if ( v4 == 255 )
      v4 = -1;
    v20 = v4;
  }
  sub_6019EC34((_DWORD *)(v2 + 468), &v18);
  v6 = FIELD_U8(v2, 120);
  if ( v6 != (FIELD_U8(a1, 3) & 1) )
    FIELD_U8(v2, 120) = v6 ^ 1;
  sub_603F7840(v2 + 796, a1 + 111);
  sub_60408488((_DWORD *)(v2 + 52), (const void *)(a1 + 296));
  v7 = FIELD_U32(a1, 40);
  v8 = FIELD_U32(a1, 44);
  FIELD_U32(v2, 2136) = FIELD_U32(a1, 36);
  FIELD_U32(v2, 2140) = v7;
  FIELD_U32(v2, 2144) = v8;
  FIELD_U32(v2, 98488) = FIELD_U8(a1, 337);
  FIELD_U32(v2, 98492) = FIELD_U8(a1, 338);
  FIELD_U32(v2, 98496) = FIELD_U8(a1, 339);
  FIELD_U32(v2, 98500) = FIELD_U8(a1, 340);
  FIELD_U32(v2, 98504) = FIELD_U8(a1, 341);
  FIELD_U32(v2, 98508) = FIELD_U8(a1, 342);
  FIELD_U32(v2, 98512) = FIELD_U8(a1, 343);
  FIELD_U32(v2, 98516) = FIELD_U8(a1, 344);
  FIELD_U32(v2, 98520) = FIELD_U8(a1, 345);
  FIELD_U32(v2, 98524) = FIELD_U8(a1, 346);
  FIELD_U16(v2, 520) = FIELD_U16(a1, 32);
  v9 = FIELD_U8(a1, 92);
  FIELD_U8(v2, 522) = v9 != 0;
  sub_6081EF4C(v2, (char *)(a1 + 56));
  sub_60187130(v2 + 984, a1 + 347);
  FIELD_U8(v2, 109034) = FIELD_U8(a1, 512);
  sub_6081F014(v2, FIELD_U32(a1, 48));
  FIELD_U8(v2, 2092) = FIELD_U8(a1, 34);
  FIELD_U8(v2, 2093) = FIELD_U8(a1, 35);
  v18 = -1;
  v19 = -1;
  v20 = -1;
  if ( FIELD_U8(a1, 74) != 255 )
  {
    v10 = FIELD_U8(a1, 76);
    v11 = FIELD_U8(a1, 75);
    v18 = FIELD_U8(a1, 74);
    v19 = v11;
    if ( v10 == 255 )
      v10 = -1;
    v20 = v10;
  }
  sub_6019EC34((_DWORD *)(v2 + 456), &v18);
  FIELD_U8(v2, 109036) = FIELD_U8(a1, 77);
  FIELD_U8(v2, 109037) = FIELD_U8(a1, 78);
  FIELD_U8(v2, 109038) = FIELD_U8(a1, 79);
  FIELD_U8(v2, 109039) = FIELD_U8(a1, 80);
  FIELD_U8(v2, 109041) = FIELD_U8(a1, 104);
  FIELD_U8(v2, 109042) = FIELD_U8(a1, 105);
  FIELD_U8(v2, 109043) = FIELD_U8(a1, 106);
  FIELD_U8(v2, 109044) = FIELD_U8(a1, 107);
  FIELD_U8(v2, 109045) = FIELD_U8(a1, 108);
  FIELD_U8(v2, 109046) = FIELD_U8(a1, 109);
  FIELD_U8(v2, 109047) = FIELD_U8(a1, 110);
  sub_6081F108(v2, FIELD_U8(a1, 10), FIELD_U8(a1, 11));
  FIELD_U32(v2, 536) = FIELD_U8(a1, 81);
  FIELD_U8(v2, 523) = FIELD_U8(a1, 86);
  FIELD_U8(v2, 524) = FIELD_U8(a1, 87);
  v12 = FIELD_U8(a1, 88);
  FIELD_U8(v2, 98528) = v12 != 0;
  FIELD_U8(v2, 525) = FIELD_U8(a1, 89);
  FIELD_U32(v2, 528) = FIELD_U8(a1, 90);
  FIELD_U8(v2, 526) = FIELD_U8(a1, 94);
  FIELD_U8(v2, 527) = FIELD_U8(a1, 95);
  v13 = FIELD_U8(a1, 93);
  FIELD_U8(v2, 532) = v13 != 0;
  v14 = FIELD_U8(a1, 91);
  FIELD_U8(v2, 505) = v14 != 0;
  FIELD_U8(v2, 2084) = FIELD_U8(a1, 96);
  FIELD_U8(v2, 2088) = FIELD_U8(a1, 100);
  FIELD_U8(v2, 2085) = FIELD_U8(a1, 97);
  FIELD_U8(v2, 2089) = FIELD_U8(a1, 101);
  FIELD_U8(v2, 2086) = FIELD_U8(a1, 98);
  FIELD_U8(v2, 2090) = FIELD_U8(a1, 102);
  FIELD_U8(v2, 2087) = FIELD_U8(a1, 99);
  FIELD_U8(v2, 2091) = FIELD_U8(a1, 103);
  sub_603FFE2C((int *)(dword_60C99DEC + 596), (const void *)(a1 + 456));
  FIELD_U16(v2, 109052) = FIELD_U16(a1, 72);
  FIELD_U32(v2, 448) = 0;
  FIELD_U32(v2, 32) = 1;
  FIELD_U32(v2, 36) = 0;
  sub_6081F140(v2, 0);
  FIELD_U32(v2, 496) = 6;
  FIELD_U32(v2, 428) = -1;
  FIELD_U32(v2, 432) = -1;
  FIELD_U32(v2, 436) = -1;
  FIELD_U32(v2, 440) = -1;
  FIELD_U32(v2, 424) = -1;
  FIELD_U8(v2, 504) = 0;
  FIELD_U8(v2, 2094) = 0;
  FIELD_U8(v2, 2095) = 0;
  FIELD_U8(v2, 2096) = 0;
  FIELD_U8(v2, 512) = 0;
  FIELD_U8(v2, 511) = 0;
  FIELD_U8(v2, 508) = 0;
  FIELD_U8(v2, 507) = 0;
  FIELD_U8(v2, 510) = 0;
  FIELD_U8(v2, 509) = 0;
  v15 = FIELD_U32(v2, 416);
  v16 = FIELD_U32(v2, 420);
  v18 = FIELD_U32(v2, 412);
  v19 = v15;
  v20 = v16;
  sub_6019EC34((_DWORD *)(v2 + 480), &v18);
  FIELD_U32(v2, 492) = 6;
  FIELD_U8(v2, 109035) = FIELD_U8(a1, 512);
  sub_6081EE54(v2);
  FIELD_U8(v2, 109032) = 0;
  FIELD_U8(v2, 109033) = 0;
  FIELD_U8(v2, 109040) = 0;
  FIELD_U8(v2, 2094) = 0;
  FIELD_U8(v2, 2095) = 0;
  return sub_6040B33C(dword_60C9A1F0);
}
