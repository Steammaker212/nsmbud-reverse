/* sub_60219858
 * address: 0x60219858   size: 1428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60219858(int a1)
{
  _DWORD *v2; // r0
  int *v3; // r0
  int *v4; // r0
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  float v15; // s0
  float v16; // s2
  float v17; // s4
  void *CurrentHeap_const; // r0
  int result; // r0

  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1264) = sub_601704F0();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1268) = sub_601704FC();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1272) = sub_60170520();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1276) = sub_60170514();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1280) = sub_60170508();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1284) = sub_60170444();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1288) = sub_6017044C();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1292) = sub_60170460();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1296) = sub_6017046C();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1300) = sub_60170478();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1304) = sub_60170484();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1308) = sub_60170490();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1312) = sub_60170454();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1316) = sub_6017049C();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1320) = sub_601704A8();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1324) = sub_601704B4();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1328) = sub_601704C0();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1332) = sub_601704CC();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1336) = sub_601704D8();
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1340) = sub_601704E4();
  v2 = (_DWORD *)sub_601FEE28(dword_60C8C188);
  FIELD_U32(a1, 1344) = v2[283];
  FIELD_U32(a1, 1348) = v2[284];
  FIELD_U32(a1, 1352) = v2[285];
  sub_601FEE28(dword_60C8C188);
  v3 = sub_601703D0();
  FIELD_U32(a1, 1356) = *v3;
  FIELD_U32(a1, 1360) = v3[1];
  FIELD_U32(a1, 1364) = v3[2];
  sub_601FEE28(dword_60C8C188);
  v4 = sub_601703E4();
  FIELD_U32(a1, 1368) = *v4;
  FIELD_U32(a1, 1372) = v4[1];
  FIELD_U32(a1, 1376) = v4[2];
  sub_601FEE28(dword_60C8C188);
  v5 = sub_601703F8();
  FIELD_U32(a1, 1380) = *v5;
  FIELD_U32(a1, 1384) = v5[1];
  FIELD_U32(a1, 1388) = v5[2];
  sub_601FEE28(dword_60C8C188);
  v6 = sub_60170408();
  FIELD_U32(a1, 1392) = *v6;
  FIELD_U32(a1, 1396) = v6[1];
  FIELD_U32(a1, 1400) = v6[2];
  sub_601FEE28(dword_60C8C188);
  v7 = sub_6017041C();
  FIELD_U32(a1, 1404) = *v7;
  FIELD_U32(a1, 1408) = v7[1];
  FIELD_U32(a1, 1412) = v7[2];
  sub_601FEE28(dword_60C8C188);
  v8 = sub_60170430();
  FIELD_U32(a1, 1416) = *v8;
  FIELD_U32(a1, 1420) = v8[1];
  FIELD_U32(a1, 1424) = v8[2];
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1428) = sub_60170548();
  FIELD_U32(a1, 1432) = *(_DWORD *)(sub_601FEE28(dword_60C8C188) + 1144);
  sub_601FEE28(dword_60C8C188);
  FIELD_F32(a1, 1436) = sub_6017052C();
  sub_601FEE28(dword_60C8C188);
  v9 = sub_601703A8();
  FIELD_U32(a1, 1084) = *v9;
  FIELD_U32(a1, 1088) = v9[1];
  FIELD_U32(a1, 1092) = v9[2];
  sub_601FEE28(dword_60C8C188);
  v10 = sub_601703BC();
  FIELD_U32(a1, 1096) = *v10;
  FIELD_U32(a1, 1100) = v10[1];
  FIELD_U32(a1, 1104) = v10[2];
  v11 = (_DWORD *)sub_601FEE28(dword_60C8C188);
  v12 = v11[287];
  v13 = v11[288];
  v14 = v11[289];
  FIELD_U32(a1, 1108) = v12;
  FIELD_U32(a1, 1112) = v13;
  FIELD_U32(a1, 1116) = v14;
  unk_60C8D410 = (float)(FIELD_F32(a1, 1096) - FIELD_F32(a1, 1084)) / 1280.0;
  unk_60C8D414 = (float)(FIELD_F32(a1, 1092) - FIELD_F32(a1, 1104)) / 720.0;
  sub_6090C9A0(a1 + 104);
  FIELD_U32(a1, 252) = 0;
  FIELD_U32(a1, 256) = 1184645120;
  FIELD_U8(a1, 108) = 1;
  sub_6090A7D4(a1 + 16, (float *)(a1 + 104));
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 1068708659;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 1065353216;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 16) + 16))(a1 + 16, a1 + 20);
  FIELD_U32(a1, 616) = 0;
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 328) = 1158660096;
  FIELD_U32(a1, 332) = 1140457472;
  FIELD_U32(a1, 336) = 1133903872;
  FIELD_U32(a1, 340) = 1158660096;
  FIELD_U32(a1, 344) = 1084576475;
  FIELD_U32(a1, 348) = 0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 276) + 16))(a1 + 276, a1 + 280);
  sub_6021A000(a1);
  ((void (__fastcall *)(int))loc_60219E1C)(a1);
  FIELD_U8(a1, 1451) = 0;
  if ( FIELD_U32(dword_60CC6D78, 416) )
    ((void (__fastcall *)(int, _DWORD))loc_6021A420)(a1, FIELD_U32(dword_60CC6D78, 412));
  else
    ((void (__fastcall *)(int))loc_6021A0EC)(a1);
  v15 = 0.0;
  FIELD_U8(a1, 1449) = 0;
  FIELD_U8(a1, 1447) = 0;
  FIELD_U32(a1, 792) = 0;
  v16 = FIELD_F32(a1, 780);
  v17 = FIELD_F32(a1, 776);
  if ( (float)(v16 + 0.0) >= v17 )
  {
    v15 = v17 - v16;
    FIELD_F32(a1, 792) = v17 - v16;
    FIELD_U8(a1, 1454) = 1;
  }
  FIELD_F32(a1, 796) = v16 + v15;
  if ( !FIELD_U32(a1, 548) )
  {
    CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    FIELD_U32(a1, 548) = operator_new_8DE25C(0xF0u, CurrentHeap_const, 16);
  }
  sub_60411260(a1 + 548, a1 + 276, a1 + 364);
  result = dword_60C8C188;
  FIELD_U8(dword_60C8C188, 3230) = 0;
  return result;
}
