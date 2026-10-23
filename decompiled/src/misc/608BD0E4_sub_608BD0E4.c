/* sub_608BD0E4
 * address: 0x608BD0E4   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BD0E4(int a1)
{
  int v2; // r7
  int v3; // r9
  int v4; // r4
  int v5; // r6

  sub_608D39CC();
  v2 = 0;
  FIELD_U32(a1, 168) = a1 + 168;
  FIELD_U32(a1, 172) = a1 + 168;
  *(_DWORD *)a1 = off_60C5B20C;
  FIELD_U32(a1, 164) = off_60C5B23C;
  FIELD_U8(a1, 176) = 0;
  FIELD_U8(a1, 185) = 0;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 996) = 0;
  FIELD_U32(a1, 1000) = 0;
  v3 = a1 + 1636;
  do
  {
    v4 = a1 + v2;
    v5 = v3 + v2 - 604;
    *(_DWORD *)v5 = 0;
    FIELD_U8(v5, 24) = 0;
    FIELD_U32(v5, 4) = 0;
    FIELD_U32(v5, 8) = 0;
    FIELD_U32(v5, 12) = 0;
    FIELD_U32(v5, 16) = 0;
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v4, 2176) = 0;
    FIELD_U32(v4, 2180) = 0;
    memset((void *)(v5 + 28), 0, 33);
    memset((void *)(v5 + 64), 0, 33);
    memset((void *)(v5 + 100), 0, 33);
    memset((void *)(a1 + v2 + 1168), 0, 33);
    memset((void *)(v5 + 172), 0, 33);
    memset((void *)(v5 + 208), 0, 33);
    memset((void *)(v5 + 244), 0, 33);
    memset((void *)(a1 + v2 + 1312), 0, 33);
    memset((void *)(v5 + 316), 0, 33);
    memset((void *)(v3 + v2 - 252), 0, 33);
    memset((void *)(v3 + v2 - 216), 0, 33);
    memset((void *)(a1 + v2 + 1456), 0, 33);
    memset((void *)(v3 + v2 - 144), 0, 33);
    memset((void *)(v3 + v2 - 108), 0, 33);
    memset((void *)(v3 + v2 - 72), 0, 33);
    memset((void *)(a1 + v2 + 1600), 0, 33);
    memset((void *)(v3 + v2), 0, 33);
    memset((void *)(v3 + v2 + 36), 0, 33);
    memset((void *)(v3 + v2 + 72), 0, 33);
    memset((void *)(a1 + v2 + 1744), 0, 33);
    memset((void *)(v3 + v2 + 144), 0, 33);
    memset((void *)(v3 + v2 + 180), 0, 33);
    memset((void *)(v3 + v2 + 216), 0, 33);
    memset((void *)(a1 + v2 + 1888), 0, 33);
    memset((void *)(v3 + v2 + 288), 0, 33);
    memset((void *)(v3 + v2 + 324), 0, 33);
    memset((void *)(v3 + v2 + 360), 0, 33);
    memset((void *)(a1 + v2 + 2032), 0, 33);
    memset((void *)(v3 + v2 + 432), 0, 33);
    memset((void *)(v3 + v2 + 468), 0, 33);
    memset((void *)(v3 + v2 + 504), 0, 33);
    v2 += 3328;
  }
  while ( v2 != 53248 );
  FIELD_U32(a1, 54332) = 1065353216;
  FIELD_U32(a1, 54328) = 1065353216;
  FIELD_U32(a1, 54324) = 1065353216;
  FIELD_U32(a1, 54320) = 1065353216;
  FIELD_U32(a1, 54316) = 1065353216;
  FIELD_U32(a1, 54312) = 1065353216;
  FIELD_U32(a1, 54356) = 1065353216;
  FIELD_U32(a1, 54352) = 1065353216;
  FIELD_U32(a1, 54348) = 1065353216;
  FIELD_U32(a1, 54344) = 1065353216;
  FIELD_U32(a1, 54340) = 1065353216;
  FIELD_U32(a1, 54336) = 1065353216;
  FIELD_U32(a1, 54444) = 1065353216;
  FIELD_U32(a1, 54440) = 1065353216;
  FIELD_U32(a1, 54436) = 1065353216;
  FIELD_U32(a1, 54432) = 1065353216;
  FIELD_U32(a1, 54428) = 1065353216;
  FIELD_U32(a1, 54424) = 1065353216;
  FIELD_U32(a1, 54468) = 1065353216;
  FIELD_U32(a1, 54464) = 1065353216;
  FIELD_U32(a1, 54460) = 1065353216;
  FIELD_U32(a1, 54456) = 1065353216;
  FIELD_U32(a1, 54452) = 1065353216;
  FIELD_U32(a1, 54448) = 1065353216;
  FIELD_U32(a1, 54556) = 1065353216;
  FIELD_U32(a1, 54552) = 1065353216;
  FIELD_U32(a1, 54548) = 1065353216;
  FIELD_U32(a1, 54544) = 1065353216;
  FIELD_U32(a1, 54540) = 1065353216;
  FIELD_U32(a1, 54536) = 1065353216;
  FIELD_U32(a1, 54580) = 1065353216;
  FIELD_U32(a1, 54576) = 1065353216;
  FIELD_U32(a1, 54572) = 1065353216;
  FIELD_U32(a1, 54568) = 1065353216;
  FIELD_U32(a1, 54564) = 1065353216;
  FIELD_U32(a1, 54560) = 1065353216;
  FIELD_U32(a1, 54668) = 1065353216;
  FIELD_U32(a1, 54664) = 1065353216;
  FIELD_U32(a1, 54660) = 1065353216;
  FIELD_U32(a1, 54656) = 1065353216;
  FIELD_U32(a1, 54652) = 1065353216;
  FIELD_U32(a1, 54648) = 1065353216;
  FIELD_U32(a1, 54692) = 1065353216;
  FIELD_U32(a1, 54688) = 1065353216;
  FIELD_U32(a1, 54684) = 1065353216;
  FIELD_U32(a1, 54680) = 1065353216;
  FIELD_U32(a1, 54676) = 1065353216;
  FIELD_U32(a1, 54672) = 1065353216;
  FIELD_U32(a1, 54780) = 1065353216;
  FIELD_U32(a1, 54776) = 1065353216;
  FIELD_U32(a1, 54772) = 1065353216;
  FIELD_U32(a1, 54768) = 1065353216;
  FIELD_U32(a1, 54764) = 1065353216;
  FIELD_U32(a1, 54760) = 1065353216;
  FIELD_U32(a1, 54804) = 1065353216;
  FIELD_U32(a1, 54800) = 1065353216;
  FIELD_U32(a1, 54796) = 1065353216;
  FIELD_U32(a1, 54792) = 1065353216;
  FIELD_U32(a1, 54788) = 1065353216;
  FIELD_U32(a1, 54784) = 1065353216;
  FIELD_U32(a1, 54892) = 1065353216;
  FIELD_U32(a1, 54888) = 1065353216;
  FIELD_U32(a1, 54884) = 1065353216;
  FIELD_U32(a1, 54880) = 1065353216;
  FIELD_U32(a1, 54876) = 1065353216;
  FIELD_U32(a1, 54872) = 1065353216;
  FIELD_U32(a1, 54916) = 1065353216;
  FIELD_U32(a1, 54912) = 1065353216;
  FIELD_U32(a1, 54908) = 1065353216;
  FIELD_U32(a1, 54904) = 1065353216;
  FIELD_U32(a1, 54900) = 1065353216;
  FIELD_U32(a1, 54896) = 1065353216;
  FIELD_U32(a1, 55004) = 1065353216;
  FIELD_U32(a1, 55000) = 1065353216;
  FIELD_U32(a1, 54996) = 1065353216;
  FIELD_U32(a1, 54992) = 1065353216;
  FIELD_U32(a1, 54988) = 1065353216;
  FIELD_U32(a1, 54984) = 1065353216;
  FIELD_U32(a1, 55028) = 1065353216;
  FIELD_U32(a1, 55024) = 1065353216;
  FIELD_U32(a1, 55020) = 1065353216;
  FIELD_U32(a1, 55016) = 1065353216;
  FIELD_U32(a1, 55012) = 1065353216;
  FIELD_U32(a1, 55008) = 1065353216;
  FIELD_U32(a1, 55116) = 1065353216;
  FIELD_U32(a1, 55112) = 1065353216;
  FIELD_U32(a1, 55108) = 1065353216;
  FIELD_U32(a1, 55104) = 1065353216;
  FIELD_U32(a1, 55100) = 1065353216;
  FIELD_U32(a1, 55096) = 1065353216;
  FIELD_U32(a1, 55140) = 1065353216;
  FIELD_U32(a1, 55136) = 1065353216;
  FIELD_U32(a1, 55132) = 1065353216;
  FIELD_U32(a1, 55128) = 1065353216;
  FIELD_U32(a1, 55124) = 1065353216;
  FIELD_U32(a1, 55120) = 1065353216;
  memset((void *)(a1 + 55556), 0, 667);
  FIELD_U8(a1, 56248) = 0;
  FIELD_U32(a1, 56244) = 0;
  FIELD_U32(a1, 56240) = 0;
  FIELD_U32(a1, 56236) = 0;
  FIELD_U32(a1, 56232) = 0;
  FIELD_U32(a1, 56228) = 0;
  FIELD_U32(a1, 56224) = 0;
  return a1;
}
