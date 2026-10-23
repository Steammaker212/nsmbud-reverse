/* sub_601B16CC
 * address: 0x601B16CC   size: 760   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B16CC(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0

  sub_601C3FC0();
  *(_DWORD *)a1 = off_60BD66E0;
  FIELD_U32(a1, 884) = &off_60BD68F8;
  FIELD_U32(a1, 888) = &off_60BD6908;
  FIELD_U32(a1, 892) = &off_60BD692C;
  FIELD_U32(a1, 896) = a1;
  FIELD_U32(a1, 900) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 904), (StateExecuter *)(a1 + 888), &NullState);
  FIELD_U32(a1, 884) = &off_60BD68E8;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 948) = 0;
  FIELD_U32(a1, 952) = 0;
  FIELD_U32(a1, 964) = 0;
  FIELD_U32(a1, 960) = 0;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 992) = 0;
  FIELD_U32(a1, 996) = 0;
  FIELD_U32(a1, 1000) = 0;
  FIELD_U32(a1, 1004) = 0;
  FIELD_U32(a1, 1008) = 0;
  FIELD_U32(a1, 1012) = 0;
  FIELD_U32(a1, 1016) = 0;
  memset((void *)(a1 + 1020), 255, 0x48u);
  FIELD_U32(a1, 1092) = 6;
  FIELD_U32(a1, 1096) = 6;
  FIELD_U32(a1, 1100) = 2;
  FIELD_U32(a1, 1104) = 6;
  FIELD_U32(a1, 1108) = 6;
  FIELD_U32(a1, 1112) = -1;
  FIELD_U32(a1, 1116) = -1;
  FIELD_U32(a1, 1120) = 0;
  FIELD_U32(a1, 1124) = 0;
  FIELD_U32(a1, 1128) = -1;
  FIELD_U32(a1, 1132) = 0;
  FIELD_U32(a1, 1136) = 0;
  FIELD_U32(a1, 1140) = 0;
  FIELD_U32(a1, 1144) = 4;
  FIELD_U32(a1, 1148) = 6;
  FIELD_U32(a1, 1152) = 0;
  FIELD_U32(a1, 1156) = -1;
  FIELD_U32(a1, 1160) = -1;
  FIELD_U32(a1, 1164) = -1;
  FIELD_U32(a1, 1168) = 0;
  FIELD_U32(a1, 1172) = 0;
  FIELD_U32(a1, 1176) = 0;
  sub_601778E8((_DWORD *)(a1 + 1180));
  FIELD_U32(a1, 1208) = 10;
  FIELD_U32(a1, 1212) = 10;
  FIELD_U32(a1, 1236) = 0;
  FIELD_U32(a1, 1240) = 0;
  FIELD_U32(a1, 1244) = 0;
  FIELD_U32(a1, 1228) = 0;
  FIELD_U32(a1, 1224) = 0;
  FIELD_U32(a1, 1220) = 0;
  FIELD_U32(a1, 1216) = 0;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 936) = 0;
  FIELD_U32(a1, 932) = 0;
  FIELD_U32(a1, 928) = 0;
  FIELD_U32(a1, 924) = 0;
  FIELD_U32(a1, 920) = 0;
  FIELD_U32(a1, 1120) = 0;
  FIELD_U8(a1, 1232) = 0;
  FIELD_U32(a1, 1020) = -1;
  FIELD_U32(a1, 1024) = -1;
  FIELD_U32(a1, 1028) = -1;
  FIELD_U32(a1, 1252) = -1;
  FIELD_U32(a1, 1256) = -1;
  FIELD_U32(a1, 1260) = -1;
  FIELD_U32(a1, 1156) = -1;
  FIELD_U32(a1, 1160) = -1;
  FIELD_U32(a1, 1164) = -1;
  memset((void *)(a1 + 1044), 255, 0x24u);
  sub_6019EC34((_DWORD *)(a1 + 1080), (_DWORD *)(dword_60CC6D78 + 480));
  FIELD_U32(a1, 1108) = FIELD_U32(dword_60CC6D78, 492);
  sub_6017793C((_DWORD *)(a1 + 1180), a1, &dword_60C8AB64);
  FIELD_U32(a1, 240) = -1;
  FIELD_U32(a1, 244) = -1;
  FIELD_U32(a1, 248) = -1;
  FIELD_U32(a1, 1248) = FIELD_U32(dword_60C99DEC, 48);
  v2 = operator_new(0x10u);
  FIELD_U32(a1, 920) = sub_60794B48(v2);
  v3 = operator_new(0x10u);
  FIELD_U32(a1, 924) = sub_60794B48(v3);
  v4 = operator_new(0x10u);
  FIELD_U32(a1, 928) = sub_60794B48(v4);
  v5 = operator_new(0x10u);
  FIELD_U32(a1, 932) = sub_60794B48(v5);
  v6 = operator_new(0x10u);
  FIELD_U32(a1, 936) = sub_60794B48(v6);
  v7 = operator_new(0x10u);
  FIELD_U32(a1, 940) = sub_60794B48(v7);
  return a1;
}
