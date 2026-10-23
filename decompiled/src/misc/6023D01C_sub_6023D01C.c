/* sub_6023D01C
 * address: 0x6023D01C   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023D01C(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  unsigned int v5; // r0
  int v6; // s0
  float *v7; // r0
  float v8; // s0
  float v9; // s8
  unsigned int v10; // r3
  float *v11; // r0
  float v12; // s3
  float v13; // s5
  float v14; // s7
  float v15; // s1
  float v16; // s0
  float v17; // s12
  int v18; // r0
  int v19; // r0

  v4 = FIELD_U16(a1, 12092);
  v2 = (_WORD *)(a1 + 12092);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v5 = FIELD_U32(a1, 156);
  v6 = v5 & 0xFFFFFF;
  v7 = (float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0));
  v8 = (float)(unsigned int)v6 * 0.000000059605;
  v9 = *v7 + (float)(v7[1] * v8);
  FIELD_F32(a1, 6416) = (float)((float)(v7[2] + (float)(v8 * v7[3])) * 16.0)
                        * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                * *(float *)((char *)&sinLutTable[1]
                                                           + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                        * 0.000000059605));
  FIELD_F32(a1, 6420) = v9 * -16.0;
  sub_6023D250(a1);
  v10 = FIELD_U32(a1, 156);
  v11 = (float *)((char *)sinLutTable + ((v10 >> 20) & 0xFF0));
  v12 = FIELD_F32(a1, 108);
  v13 = FIELD_F32(a1, 112);
  v14 = FIELD_F32(a1, 11984);
  v15 = FIELD_F32(a1, 11980);
  v16 = (float)(v10 & 0xFFFFFF) * 0.000000059605;
  v17 = v11[2] + (float)(v16 * v11[3]);
  FIELD_F32(a1, 12004) = (float)(v15 - v12)
                         + (float)((float)((float)(*v11 + (float)(v11[1] * v16)) * 8.0)
                                 * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                                         + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                                         * *(float *)((char *)&sinLutTable[1]
                                                                    + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                                 * 0.000000059605)));
  FIELD_F32(a1, 12008) = (float)(v14 - v13) + (float)(v17 * 8.0);
  v18 = FIELD_U32(a1, 12008);
  FIELD_U32(a1, 304) = FIELD_U32(a1, 12004);
  FIELD_U32(a1, 308) = v18;
  FIELD_F32(a1, 12012) = v15 - v12;
  FIELD_F32(a1, 12016) = v14 - v13;
  v19 = FIELD_U32(a1, 12012);
  FIELD_U32(a1, 12468) = FIELD_U32(a1, 12016);
  FIELD_U32(a1, 12464) = v19;
  ActorScaler_execute((ActorScaler *)(a1 + 12316));
  mouth_lower_ref_2(a1);
  FIELD_U8(a1, 12752) = 0;
  FIELD_U8(a1, 12728) = -1;
  FIELD_U8(a1, 12753) = 0;
  FIELD_U8(a1, 12729) = -1;
  FIELD_U8(a1, 12754) = 0;
  FIELD_U8(a1, 12730) = -1;
  FIELD_U8(a1, 12755) = 0;
  FIELD_U8(a1, 12731) = -1;
  return 1;
}
