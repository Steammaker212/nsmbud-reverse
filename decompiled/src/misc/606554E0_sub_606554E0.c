/* sub_606554E0
 * address: 0x606554E0   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606554E0(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  float *v4; // r2
  float v5; // s0
  unsigned int v6; // r0
  float *v7; // r1
  float v8; // s4
  unsigned int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  StateMgr *v13; // r0
  int *v14; // r1
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r0

  FIELD_U32(a1, 492) = 0;
  FIELD_F32(a1, 496) = 12.0 - 24.0;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 9532) = BYTE2(v2) & 1;
  FIELD_U8(a1, 9533) = (unsigned __int8)v2 >> 4;
  FIELD_U32(a1, 120) = *(_DWORD *)((char *)&dword_60AF2AD4[HIWORD(FIELD_U32(a1, 24)) & 1] + ((v2 >> 9) & 8));
  sub_605BEC5C(a1 + 6100);
  sub_605BE6F8((_BYTE *)(a1 + 6772));
  FIELD_U32(a1, 9520) = FIELD_U32(a1, 112);
  v3 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0xFFFFFFFE;
  v4 = (float *)(a1 + 9520);
  FIELD_U32(a1, 9524) = v3;
  if ( FIELD_U8(a1, 9532) )
  {
    v5 = FIELD_F32(TileMgr_instance, 24) + 12.0;
    *v4 = v5;
  }
  else
  {
    v5 = *v4;
  }
  v6 = dword_60CB640C + v3;
  FIELD_U32(a1, 9524) = v6;
  v7 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v8 = (float)(v6 & 0xFFFFFF) * v7[1];
  FIELD_F32(a1, 112) = v5
                       + (float)((float)(*v7 + (float)(v8 * 0.000000059605))
                               + (float)(*v7 + (float)(v8 * 0.000000059605)));
  v9 = dword_60CB6410 + (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0xFFFFFFFE);
  FIELD_U32(a1, 9528) = v9;
  FIELD_U32(a1, 164) = (int)(float)((float)(*(float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v9 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v9 >> 20) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 8388600.0);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  lift_number_ref(a1 + 6820, v10, v11, FIELD_U8(a1, 9533) + 1);
  v12 = (FIELD_U32(a1, 20) >> 8) & 3;
  if ( v12 == 2 )
  {
    v13 = (StateMgr *)(a1 + 6084);
    v14 = &dword_60CB63A4;
  }
  else if ( v12 == 1 )
  {
    v13 = (StateMgr *)(a1 + 6084);
    v14 = &dword_60CB6384;
  }
  else
  {
    v13 = (StateMgr *)(a1 + 6084);
    v14 = &dword_60CB63C4;
  }
  StateMgr__changeState(v13, (StateBase *)v14);
  v15 = FIELD_U32(a1, 6128);
  v16 = FIELD_U32(a1, 6168);
  FIELD_U32(a1, 6896) = FIELD_U32(a1, 6172);
  FIELD_U32(a1, 6900) = v15;
  FIELD_U32(a1, 6904) = v16;
  v17 = FIELD_U32(a1, 6212);
  v18 = FIELD_U32(a1, 6252);
  FIELD_U32(a1, 6972) = FIELD_U32(a1, 6256);
  FIELD_U32(a1, 6976) = v17;
  FIELD_U32(a1, 6980) = v18;
  v19 = FIELD_U32(a1, 6296);
  v20 = FIELD_U32(a1, 6336);
  FIELD_U32(a1, 7048) = FIELD_U32(a1, 6340);
  FIELD_U32(a1, 7052) = v19;
  FIELD_U32(a1, 7056) = v20;
  v21 = FIELD_U32(a1, 6380);
  v22 = FIELD_U32(a1, 6420);
  FIELD_U32(a1, 7124) = FIELD_U32(a1, 6424);
  FIELD_U32(a1, 7128) = v21;
  FIELD_U32(a1, 7132) = v22;
  v23 = FIELD_U32(a1, 6464);
  v24 = FIELD_U32(a1, 6504);
  FIELD_U32(a1, 7200) = FIELD_U32(a1, 6508);
  FIELD_U32(a1, 7204) = v23;
  FIELD_U32(a1, 7208) = v24;
  v25 = FIELD_U32(a1, 6548);
  v26 = FIELD_U32(a1, 6588);
  FIELD_U32(a1, 7276) = FIELD_U32(a1, 6592);
  FIELD_U32(a1, 7280) = v25;
  FIELD_U32(a1, 7284) = v26;
  v27 = FIELD_U32(a1, 6632);
  v28 = FIELD_U32(a1, 6672);
  FIELD_U32(a1, 7352) = FIELD_U32(a1, 6676);
  FIELD_U32(a1, 7356) = v27;
  FIELD_U32(a1, 7360) = v28;
  v29 = FIELD_U32(a1, 6716);
  v30 = FIELD_U32(a1, 6756);
  FIELD_U32(a1, 7428) = FIELD_U32(a1, 6760);
  FIELD_U32(a1, 7432) = v29;
  FIELD_U32(a1, 7436) = v30;
  sub_60655900(a1);
  sub_605BECEC(a1 + 7448, (StageActor *)a1, a1 + 6820);
  sub_605BE52C((ShapedCollider *)(a1 + 8848), (StageActor *)a1);
  return 1;
}
