/* sub_608200A4
 * address: 0x608200A4   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608200A4()
{
  int v0; // r4
  _DWORD *v1; // r0
  int v3; // [sp+4h] [bp-24h] BYREF
  int v4; // [sp+8h] [bp-20h]
  int v5; // [sp+Ch] [bp-1Ch]

  v0 = dword_60CC6D78;
  v1 = (_DWORD *)(dword_60CC6D78 + 468);
  FIELD_U32(dword_60CC6D78, 444) = 0;
  FIELD_U32(v0, 412) = 0;
  FIELD_U32(v0, 416) = 0;
  FIELD_U32(v0, 420) = -1;
  v3 = -1;
  v4 = -1;
  v5 = -1;
  sub_6019EC34(v1, &v3);
  if ( !FIELD_U8(v0, 120) )
    FIELD_U8(v0, 120) = 1;
  sub_603F77EC(v0 + 796);
  sub_604083E4((char *)(v0 + 52));
  FIELD_U32(v0, 2136) = 0;
  FIELD_U32(v0, 2140) = 0;
  FIELD_U32(v0, 2144) = 0;
  FIELD_U32(v0, 98488) = 15;
  FIELD_U32(v0, 98492) = 15;
  FIELD_U32(v0, 98496) = 15;
  FIELD_U32(v0, 98500) = 15;
  FIELD_U32(v0, 98504) = 15;
  FIELD_U32(v0, 98508) = 15;
  FIELD_U32(v0, 98512) = 15;
  FIELD_U32(v0, 98516) = 15;
  FIELD_U32(v0, 98520) = 15;
  FIELD_U32(v0, 98524) = 15;
  FIELD_U16(v0, 520) = 0;
  FIELD_U8(v0, 522) = 0;
  FIELD_U8(v0, 113) = 0;
  FIELD_U8(v0, 109) = 0;
  FIELD_U8(v0, 105) = 0;
  FIELD_U8(v0, 101) = 0;
  FIELD_U8(v0, 112) = 0;
  FIELD_U8(v0, 115) = 0;
  FIELD_U8(v0, 114) = 0;
  FIELD_U8(v0, 108) = 0;
  FIELD_U8(v0, 111) = 0;
  FIELD_U8(v0, 110) = 0;
  FIELD_U8(v0, 104) = 0;
  FIELD_U8(v0, 107) = 0;
  FIELD_U8(v0, 106) = 0;
  FIELD_U8(v0, 100) = 0;
  FIELD_U8(v0, 103) = 0;
  FIELD_U8(v0, 102) = 0;
  sub_60186EA8(v0 + 984);
  FIELD_U8(v0, 109034) = 0;
  sub_6081F014(v0, 0);
  FIELD_U8(v0, 2092) = 0;
  FIELD_U8(v0, 2093) = 0;
  v3 = -1;
  v4 = -1;
  v5 = -1;
  sub_6019EC34((_DWORD *)(v0 + 456), &v3);
  FIELD_U32(v0, 109036) = 0xFFFF;
  FIELD_U8(v0, 109046) = 0;
  FIELD_U8(v0, 109045) = 0;
  FIELD_U8(v0, 109042) = 0;
  FIELD_U8(v0, 109047) = 0;
  FIELD_U8(v0, 109041) = 0;
  FIELD_U8(v0, 109044) = 0;
  FIELD_U8(v0, 109043) = 0;
  sub_6081F108(v0, 0, 0);
  FIELD_U32(v0, 536) = 0;
  sub_6081EE1C((_BYTE *)v0);
  sub_603FFC7C((void *)(dword_60C99DEC + 596));
  sub_6081F164(v0);
  sub_6081F170(v0);
  FIELD_U8(v0, 98528) = 0;
  sub_6081EE78(v0);
  FIELD_U8(v0, 532) = 0;
  FIELD_U8(v0, 505) = 0;
  FIELD_U16(v0, 109052) = 0;
  FIELD_U8(v0, 109056) = 0;
  FIELD_U32(v0, 536) = 0;
  FIELD_U32(v0, 32) = 1;
  FIELD_U32(v0, 36) = 0;
  FIELD_U32(v0, 448) = 0;
  sub_6081F140(v0, 0);
  FIELD_U32(v0, 496) = 6;
  FIELD_U32(v0, 428) = -1;
  FIELD_U32(v0, 432) = -1;
  FIELD_U32(v0, 436) = -1;
  FIELD_U32(v0, 440) = -1;
  FIELD_U32(v0, 424) = -1;
  FIELD_U8(v0, 504) = 0;
  FIELD_U8(v0, 2094) = 0;
  FIELD_U8(v0, 2095) = 0;
  FIELD_U8(v0, 2096) = 0;
  FIELD_U8(v0, 512) = 0;
  FIELD_U8(v0, 511) = 0;
  FIELD_U8(v0, 508) = 0;
  FIELD_U8(v0, 507) = 0;
  FIELD_U8(v0, 510) = 0;
  FIELD_U8(v0, 509) = 0;
  v3 = -1;
  v4 = -1;
  v5 = -1;
  sub_6019EC34((_DWORD *)(v0 + 480), &v3);
  FIELD_U32(v0, 492) = 6;
  FIELD_U8(v0, 109035) = 0;
  sub_6081EE54(v0);
  FIELD_U8(v0, 109040) = 0;
  FIELD_U8(v0, 109032) = 0;
  FIELD_U8(v0, 109033) = 0;
  FIELD_U8(v0, 2094) = 0;
  FIELD_U8(v0, 2095) = 0;
  FIELD_U32(v0, 124) = 0;
  FIELD_U32(v0, 24) = 0;
  return sub_6040B33C(dword_60C9A1F0);
}
