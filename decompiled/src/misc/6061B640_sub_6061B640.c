/* sub_6061B640
 * address: 0x6061B640   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6061B640(int a1, float a2, float a3)
{
  int v5; // r0
  int v6; // r3
  float v7; // r0
  float v8; // r1
  float v9; // s0
  float v10; // s2
  unsigned int v11; // r0

  v5 = FIELD_U32(a1, 20) & 0x10;
  FIELD_U32(a1, 136) = dword_60CB34E0;
  FIELD_U32(a1, 100) = dword_60CB34DC;
  FIELD_U32(a1, 80) = *(_DWORD *)((char *)&unk_60CB34E4 + v5 + 12);
  v6 = *(_DWORD *)((char *)&unk_60CB34E4 + v5 + 4);
  FIELD_U32(a1, 128) = *(_DWORD *)((char *)&unk_60CB34E4 + v5 + 8);
  FIELD_U32(a1, 124) = v6;
  FIELD_U32(a1, 120) = *(_DWORD *)((char *)&unk_60CB34E4 + v5);
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6824) = 1090519040;
  FIELD_U32(a1, 6820) = 1090519040;
  FIELD_F32(a1, 6808) = (float)(a2 + -10.0) * -0.5;
  FIELD_F32(a1, 6812) = (float)(a2 + -10.0) * 0.5;
  FIELD_F32(a1, 6828) = a2 * 0.5;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6808),
    0,
    (CollisionMgr_Sensor *)(a1 + 6820));
  FIELD_U32(a1, 3180) |= 0x8000u;
  FIELD_U32(a1, 3188) |= 0x8000u;
  v7 = FIELD_F32(a1, 6808);
  FIELD_F32(a1, 6832) = v7;
  v8 = FIELD_F32(a1, 6816);
  FIELD_F32(a1, 6836) = v8;
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  FIELD_U32(a1, 6848) = FIELD_U32(a1, 116);
  FIELD_F32(a1, 6840) = v7 + v9;
  FIELD_F32(a1, 6844) = v8 + v10;
  FIELD_F32(a1, 6860) = a3;
  v11 = FIELD_U32(a1, 6856);
  FIELD_U32(a1, 6864) = v11;
  FIELD_U32(a1, 160) = (int)(float)((float)FIELD_S32(a1, 6852)
                                     * (float)(*(float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0))
                                             + (float)((float)((float)(v11 & 0xFFFFFF)
                                                             * *(float *)((char *)&sinLutTable[1] + ((v11 >> 20) & 0xFF0)))
                                                     * 0.000000059605)));
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB3504);
}
