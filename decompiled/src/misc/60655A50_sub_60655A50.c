/* sub_60655A50
 * address: 0x60655A50   size: 788   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60655A50(int a1)
{
  int v2; // r9
  float *v3; // r8
  unsigned __int8 *v4; // r6
  int v5; // r7
  float v6; // s0
  unsigned int v7; // r0
  float v8; // s2
  unsigned int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  int v22; // r1
  int v23; // r0
  int v24; // r1
  int v25; // r0

  v2 = a1 + 7448;
  v3 = (float *)(a1 + 108);
  v4 = (unsigned __int8 *)(a1 + 6772);
  v5 = a1 + 6100;
  sub_605BF1F8(a1 + 7448, (unsigned __int8 *)(a1 + 6772), (_BYTE *)(a1 + 6100), (float *)(a1 + 108));
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(a1, 9532) )
  {
    v6 = FIELD_F32(TileMgr_instance, 24) + 12.0;
    FIELD_F32(a1, 9520) = v6;
  }
  else
  {
    v6 = FIELD_F32(a1, 9520);
  }
  v7 = dword_60CB640C + FIELD_U32(a1, 9524);
  FIELD_U32(a1, 9524) = v7;
  v8 = *(float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0))
     + (float)((float)((float)(v7 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v7 >> 20) & 0xFF0)))
             * 0.000000059605);
  FIELD_F32(a1, 112) = v6 + (float)(v8 + v8);
  v9 = dword_60CB6410 + FIELD_U32(a1, 9528);
  FIELD_U32(a1, 9528) = v9;
  FIELD_U32(a1, 164) = (int)(float)((float)(*(float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v9 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v9 >> 20) & 0xFF0)))
                                                     * 0.000000059605))
                                     * 8388600.0);
  sub_605BE780(v4, v5);
  sub_605BE584((ColliderBase *)(a1 + 8848), v5, FIELD_F32(a1, 108));
  sub_605BECA4(v5);
  v10 = FIELD_U32(a1, 6128);
  v11 = FIELD_U32(a1, 6168);
  FIELD_U32(a1, 6896) = FIELD_U32(a1, 6172);
  FIELD_U32(a1, 6900) = v10;
  FIELD_U32(a1, 6904) = v11;
  v12 = FIELD_U32(a1, 6212);
  v13 = FIELD_U32(a1, 6252);
  FIELD_U32(a1, 6972) = FIELD_U32(a1, 6256);
  FIELD_U32(a1, 6976) = v12;
  FIELD_U32(a1, 6980) = v13;
  v14 = FIELD_U32(a1, 6296);
  v15 = FIELD_U32(a1, 6336);
  FIELD_U32(a1, 7048) = FIELD_U32(a1, 6340);
  FIELD_U32(a1, 7052) = v14;
  FIELD_U32(a1, 7056) = v15;
  v16 = FIELD_U32(a1, 6380);
  v17 = FIELD_U32(a1, 6420);
  FIELD_U32(a1, 7124) = FIELD_U32(a1, 6424);
  FIELD_U32(a1, 7128) = v16;
  FIELD_U32(a1, 7132) = v17;
  v18 = FIELD_U32(a1, 6464);
  v19 = FIELD_U32(a1, 6504);
  FIELD_U32(a1, 7200) = FIELD_U32(a1, 6508);
  FIELD_U32(a1, 7204) = v18;
  FIELD_U32(a1, 7208) = v19;
  v20 = FIELD_U32(a1, 6548);
  v21 = FIELD_U32(a1, 6588);
  FIELD_U32(a1, 7276) = FIELD_U32(a1, 6592);
  FIELD_U32(a1, 7280) = v20;
  FIELD_U32(a1, 7284) = v21;
  v22 = FIELD_U32(a1, 6632);
  v23 = FIELD_U32(a1, 6672);
  FIELD_U32(a1, 7352) = FIELD_U32(a1, 6676);
  FIELD_U32(a1, 7356) = v22;
  FIELD_U32(a1, 7360) = v23;
  v24 = FIELD_U32(a1, 6716);
  v25 = FIELD_U32(a1, 6756);
  FIELD_U32(a1, 7428) = FIELD_U32(a1, 6760);
  FIELD_U32(a1, 7432) = v24;
  FIELD_U32(a1, 7436) = v25;
  sub_60655900(a1);
  sub_605BEF74(v2, v3, a1 + 6820);
  sub_605BEF58(v2);
  StageActor__cullCheck((StageActor *)a1, 4);
  return 1;
}
