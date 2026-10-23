/* sub_6061CD94
 * address: 0x6061CD94   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6061CD94(int a1, float a2, float a3)
{
  int v4; // r4
  float v5; // s0
  unsigned int v6; // r3
  unsigned int v7; // r0
  int v8; // t1
  unsigned int v9; // r0

  v4 = a1;
  v5 = a2 * 0.5;
  FIELD_F32(a1, 6824) = v5 + 1024.0;
  FIELD_U32(a1, 6808) = 1090519040;
  FIELD_F32(a1, 6812) = a3 + -8.0;
  FIELD_F32(a1, 6816) = v5;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, (CollisionMgr_Sensor *)(a1 + 6808));
  FIELD_F32(v4, 6820) = a3 + -21.0;
  FIELD_F32(v4, 6828) = a3;
  FIELD_U32(v4, 6836) = 0;
  v6 = FIELD_U32(v4, 6856);
  FIELD_U32(v4, 6832) = v6;
  FIELD_U32(v4, 156) = (int)(float)((float)FIELD_S32(v4, 6844)
                                     * (float)(*(float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v6 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v6 >> 20) & 0xFF0)))
                                                     * 0.000000059605)));
  v7 = FIELD_U32(v4, 6860);
  FIELD_U32(v4, 6836) = v7;
  FIELD_U32(v4, 160) = (int)(float)((float)FIELD_S32(v4, 6848)
                                     * (float)(*(float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v7 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v7 >> 20) & 0xFF0)))
                                                     * 0.000000059605)));
  v8 = FIELD_U32(v4, 6840);
  v4 += 6840;
  v9 = FIELD_U32(v4, 24) + v8;
  *(_DWORD *)v4 = v9;
  *(_DWORD *)(v4 - 6676) = (int)(float)((float)FIELD_S32(v4, 12)
                                      * (float)(*(float *)((char *)sinLutTable + ((v9 >> 20) & 0xFF0))
                                              + (float)((float)((float)(v9 & 0xFFFFFF)
                                                              * *(float *)((char *)&sinLutTable[1] + ((v9 >> 20) & 0xFF0)))
                                                      * 0.000000059605)));
  *(_DWORD *)(v4 - 6760) = 1;
  return StateMgr__changeState((StateMgr *)(v4 - 756), (StateBase *)&dword_60CB355C);
}
