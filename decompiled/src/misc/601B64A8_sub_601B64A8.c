/* sub_601B64A8
 * address: 0x601B64A8   size: 1308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B64A8(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r2
  int v4; // r0
  int v5; // r5
  int *v6; // r1
  int v7; // r5
  unsigned int v9[3]; // [sp+4h] [bp-4Ch] BYREF
  _BYTE v10[64]; // [sp+10h] [bp-40h] BYREF

  sub_601BA0F8(a1, 0, 0.0, 0.0);
  v2 = FIELD_U32(a1, 180);
  v3 = FIELD_U32(a1, 184);
  v9[0] = FIELD_U32(a1, 176);
  v9[1] = v2;
  v9[2] = v3;
  sub_601927EC((int)v10, (float *)(a1 + 128), v9, (_DWORD *)(a1 + 80));
  if ( (FIELD_U32(a1, 264) & 0xFFFFFFFE) == 6 )
    sub_605EA7EC(FIELD_U32(a1, 944), v10);
  else
    ((void (__fastcall *)(_DWORD, _BYTE *))loc_60793FF0)(
      *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4),
      v10);
  v4 = operator_new_8DE09C(0x780u);
  FIELD_U32(v4, 20) = -1;
  FIELD_U32(v4, 16) = -1;
  FIELD_U32(v4, 12) = -1;
  FIELD_U32(v4, 8) = -1;
  FIELD_U32(v4, 4) = -1;
  *(_DWORD *)v4 = -1;
  FIELD_U8(v4, 52) = 0;
  FIELD_U32(v4, 80) = -1;
  FIELD_U32(v4, 76) = -1;
  FIELD_U32(v4, 72) = -1;
  FIELD_U32(v4, 68) = -1;
  FIELD_U32(v4, 64) = -1;
  FIELD_U32(v4, 60) = -1;
  FIELD_U8(v4, 112) = 0;
  FIELD_U32(v4, 140) = -1;
  FIELD_U32(v4, 136) = -1;
  FIELD_U32(v4, 132) = -1;
  FIELD_U32(v4, 128) = -1;
  FIELD_U32(v4, 124) = -1;
  FIELD_U32(v4, 120) = -1;
  FIELD_U8(v4, 172) = 0;
  FIELD_U32(v4, 200) = -1;
  FIELD_U32(v4, 196) = -1;
  FIELD_U32(v4, 192) = -1;
  FIELD_U32(v4, 188) = -1;
  FIELD_U32(v4, 184) = -1;
  FIELD_U32(v4, 180) = -1;
  FIELD_U8(v4, 232) = 0;
  FIELD_U32(v4, 260) = -1;
  FIELD_U32(v4, 256) = -1;
  FIELD_U32(v4, 252) = -1;
  FIELD_U32(v4, 248) = -1;
  FIELD_U32(v4, 244) = -1;
  FIELD_U32(v4, 240) = -1;
  FIELD_U8(v4, 292) = 0;
  FIELD_U32(v4, 320) = -1;
  FIELD_U32(v4, 316) = -1;
  FIELD_U32(v4, 312) = -1;
  FIELD_U32(v4, 308) = -1;
  FIELD_U32(v4, 304) = -1;
  FIELD_U32(v4, 300) = -1;
  FIELD_U8(v4, 352) = 0;
  FIELD_U32(v4, 380) = -1;
  FIELD_U32(v4, 376) = -1;
  FIELD_U32(v4, 372) = -1;
  FIELD_U32(v4, 368) = -1;
  FIELD_U32(v4, 364) = -1;
  FIELD_U32(v4, 360) = -1;
  FIELD_U8(v4, 412) = 0;
  FIELD_U32(v4, 440) = -1;
  FIELD_U32(v4, 436) = -1;
  FIELD_U32(v4, 432) = -1;
  FIELD_U32(v4, 428) = -1;
  FIELD_U32(v4, 424) = -1;
  FIELD_U32(v4, 420) = -1;
  FIELD_U8(v4, 472) = 0;
  FIELD_U32(v4, 500) = -1;
  FIELD_U32(v4, 496) = -1;
  FIELD_U32(v4, 492) = -1;
  FIELD_U32(v4, 488) = -1;
  FIELD_U32(v4, 484) = -1;
  FIELD_U32(v4, 480) = -1;
  FIELD_U8(v4, 532) = 0;
  FIELD_U32(v4, 560) = -1;
  FIELD_U32(v4, 556) = -1;
  FIELD_U32(v4, 552) = -1;
  FIELD_U32(v4, 548) = -1;
  FIELD_U32(v4, 544) = -1;
  FIELD_U32(v4, 540) = -1;
  FIELD_U8(v4, 592) = 0;
  FIELD_U32(v4, 620) = -1;
  FIELD_U32(v4, 616) = -1;
  FIELD_U32(v4, 612) = -1;
  FIELD_U32(v4, 608) = -1;
  FIELD_U32(v4, 604) = -1;
  FIELD_U32(v4, 600) = -1;
  FIELD_U8(v4, 652) = 0;
  FIELD_U32(v4, 680) = -1;
  FIELD_U32(v4, 676) = -1;
  FIELD_U32(v4, 672) = -1;
  FIELD_U32(v4, 668) = -1;
  FIELD_U32(v4, 664) = -1;
  FIELD_U32(v4, 660) = -1;
  FIELD_U8(v4, 712) = 0;
  FIELD_U32(v4, 740) = -1;
  FIELD_U32(v4, 736) = -1;
  FIELD_U32(v4, 732) = -1;
  FIELD_U32(v4, 728) = -1;
  FIELD_U32(v4, 724) = -1;
  FIELD_U32(v4, 720) = -1;
  FIELD_U8(v4, 772) = 0;
  FIELD_U32(v4, 800) = -1;
  FIELD_U32(v4, 796) = -1;
  FIELD_U32(v4, 792) = -1;
  FIELD_U32(v4, 788) = -1;
  FIELD_U32(v4, 784) = -1;
  FIELD_U32(v4, 780) = -1;
  FIELD_U8(v4, 832) = 0;
  FIELD_U32(v4, 860) = -1;
  FIELD_U32(v4, 856) = -1;
  FIELD_U32(v4, 852) = -1;
  FIELD_U32(v4, 848) = -1;
  FIELD_U32(v4, 844) = -1;
  FIELD_U32(v4, 840) = -1;
  FIELD_U8(v4, 892) = 0;
  FIELD_U32(v4, 920) = -1;
  FIELD_U32(v4, 916) = -1;
  FIELD_U32(v4, 912) = -1;
  FIELD_U32(v4, 908) = -1;
  FIELD_U32(v4, 904) = -1;
  FIELD_U32(v4, 900) = -1;
  FIELD_U8(v4, 952) = 0;
  FIELD_U32(v4, 980) = -1;
  FIELD_U32(v4, 976) = -1;
  FIELD_U32(v4, 972) = -1;
  FIELD_U32(v4, 968) = -1;
  FIELD_U32(v4, 964) = -1;
  FIELD_U32(v4, 960) = -1;
  FIELD_U8(v4, 1012) = 0;
  FIELD_U32(v4, 1040) = -1;
  FIELD_U32(v4, 1036) = -1;
  FIELD_U32(v4, 1032) = -1;
  FIELD_U32(v4, 1028) = -1;
  FIELD_U32(v4, 1024) = -1;
  FIELD_U32(v4, 1020) = -1;
  FIELD_U8(v4, 1072) = 0;
  FIELD_U32(v4, 1100) = -1;
  FIELD_U32(v4, 1096) = -1;
  FIELD_U32(v4, 1092) = -1;
  FIELD_U32(v4, 1088) = -1;
  FIELD_U32(v4, 1084) = -1;
  FIELD_U32(v4, 1080) = -1;
  FIELD_U8(v4, 1132) = 0;
  FIELD_U32(v4, 1160) = -1;
  FIELD_U32(v4, 1156) = -1;
  FIELD_U32(v4, 1152) = -1;
  FIELD_U32(v4, 1148) = -1;
  FIELD_U32(v4, 1144) = -1;
  FIELD_U32(v4, 1140) = -1;
  FIELD_U8(v4, 1192) = 0;
  FIELD_U32(v4, 1220) = -1;
  FIELD_U32(v4, 1216) = -1;
  FIELD_U32(v4, 1212) = -1;
  FIELD_U32(v4, 1208) = -1;
  FIELD_U32(v4, 1204) = -1;
  FIELD_U32(v4, 1200) = -1;
  FIELD_U8(v4, 1252) = 0;
  FIELD_U32(v4, 1280) = -1;
  FIELD_U32(v4, 1276) = -1;
  FIELD_U32(v4, 1272) = -1;
  FIELD_U32(v4, 1268) = -1;
  FIELD_U32(v4, 1264) = -1;
  FIELD_U32(v4, 1260) = -1;
  FIELD_U8(v4, 1312) = 0;
  FIELD_U32(v4, 1340) = -1;
  FIELD_U32(v4, 1336) = -1;
  FIELD_U32(v4, 1332) = -1;
  FIELD_U32(v4, 1328) = -1;
  FIELD_U32(v4, 1324) = -1;
  FIELD_U32(v4, 1320) = -1;
  FIELD_U8(v4, 1372) = 0;
  FIELD_U32(v4, 1400) = -1;
  FIELD_U32(v4, 1396) = -1;
  FIELD_U32(v4, 1392) = -1;
  FIELD_U32(v4, 1388) = -1;
  FIELD_U32(v4, 1384) = -1;
  FIELD_U32(v4, 1380) = -1;
  FIELD_U8(v4, 1432) = 0;
  FIELD_U32(v4, 1460) = -1;
  FIELD_U32(v4, 1456) = -1;
  FIELD_U32(v4, 1452) = -1;
  FIELD_U32(v4, 1448) = -1;
  FIELD_U32(v4, 1444) = -1;
  FIELD_U32(v4, 1440) = -1;
  FIELD_U8(v4, 1492) = 0;
  FIELD_U32(v4, 1520) = -1;
  FIELD_U32(v4, 1516) = -1;
  FIELD_U32(v4, 1512) = -1;
  FIELD_U32(v4, 1508) = -1;
  FIELD_U32(v4, 1504) = -1;
  FIELD_U32(v4, 1500) = -1;
  FIELD_U8(v4, 1552) = 0;
  FIELD_U32(v4, 1580) = -1;
  FIELD_U32(v4, 1576) = -1;
  FIELD_U32(v4, 1572) = -1;
  FIELD_U32(v4, 1568) = -1;
  FIELD_U32(v4, 1564) = -1;
  FIELD_U32(v4, 1560) = -1;
  FIELD_U8(v4, 1612) = 0;
  FIELD_U32(v4, 1640) = -1;
  FIELD_U32(v4, 1636) = -1;
  FIELD_U32(v4, 1632) = -1;
  FIELD_U32(v4, 1628) = -1;
  FIELD_U32(v4, 1624) = -1;
  FIELD_U32(v4, 1620) = -1;
  FIELD_U8(v4, 1672) = 0;
  FIELD_U32(v4, 1700) = -1;
  FIELD_U32(v4, 1696) = -1;
  FIELD_U32(v4, 1692) = -1;
  FIELD_U32(v4, 1688) = -1;
  FIELD_U32(v4, 1684) = -1;
  FIELD_U32(v4, 1680) = -1;
  FIELD_U8(v4, 1732) = 0;
  FIELD_U32(v4, 1760) = -1;
  FIELD_U32(v4, 1756) = -1;
  FIELD_U32(v4, 1752) = -1;
  FIELD_U32(v4, 1748) = -1;
  FIELD_U32(v4, 1744) = -1;
  FIELD_U32(v4, 1740) = -1;
  FIELD_U8(v4, 1792) = 0;
  FIELD_U32(v4, 1820) = -1;
  FIELD_U32(v4, 1816) = -1;
  FIELD_U32(v4, 1812) = -1;
  FIELD_U32(v4, 1808) = -1;
  FIELD_U32(v4, 1804) = -1;
  FIELD_U32(v4, 1800) = -1;
  FIELD_U8(v4, 1852) = 0;
  FIELD_U32(v4, 1860) = -1;
  FIELD_U32(v4, 1864) = -1;
  FIELD_U32(v4, 1868) = -1;
  FIELD_U32(v4, 1872) = -1;
  FIELD_U32(v4, 1876) = -1;
  FIELD_U32(v4, 1880) = -1;
  FIELD_U8(v4, 1912) = 0;
  FIELD_U32(a1, 1460) = 21;
  FIELD_U32(a1, 1132) = v4;
  FIELD_U32(a1, 1136) = 32;
  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1144) = 0;
  if ( (FIELD_U32(a1, 264) | 1) == 7 && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1) )
  {
    v7 = (*(int (**)(void))(stru_60C8AE50 + 8))();
    if ( v7 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &stru_60C8AE50;
  }
  else
  {
    v5 = (*(int (**)(void))(dword_60C8ABB0 + 8))();
    if ( v5 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v6 = &dword_60C8ABB0;
  }
  StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v6);
  FIELD_U32(a1, 212) = 1133903872;
  return 1;
}
