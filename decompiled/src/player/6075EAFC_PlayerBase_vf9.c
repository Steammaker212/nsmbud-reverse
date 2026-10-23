/* PlayerBase_vf9
 * address: 0x6075EAFC   size: 376   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerBase_vf9(int a1, int a2)
{
  float v4; // s0
  float v5; // s2
  unsigned int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  int v9; // r0

  v4 = FIELD_F32(a1, 112) - FIELD_F32(a1, 588);
  v5 = FIELD_F32(a1, 116) - FIELD_F32(a1, 592);
  FIELD_F32(a1, 1252) = FIELD_F32(a1, 108) - FIELD_F32(a1, 584);
  FIELD_F32(a1, 1256) = v4;
  FIELD_F32(a1, 1260) = v5;
  if ( a2 == 2 )
  {
    FIELD_U32(a1, 1208) &= 0xFFFF3FFF;
    FIELD_U32(a1, 1224) &= ~0x800000u;
    v6 = FIELD_U32(a1, 1220) & 0xF3DFF9F5;
    FIELD_U32(a1, 1220) = v6;
    FIELD_U32(a1, 1216) &= 0xFFFFF3FF;
    v7 = (FIELD_U32(a1, 1236) & 1) == 0;
    v8 = FIELD_U32(a1, 1236) & 0xFFFFFFDF;
    FIELD_U32(a1, 1236) = v8;
    FIELD_U32(a1, 1240) &= ~1u;
    FIELD_U32(a1, 1212) &= ~0x40000000u;
    if ( v7 )
    {
      j_CollisionMgr_vf14(a1 + 1328);
      v6 = FIELD_U32(a1, 1220);
      v8 = FIELD_U32(a1, 1236);
    }
    FIELD_U32(a1, 1236) = v8 & 0xFFFFFFFE;
    if ( (v6 & 0x10000000) != 0 )
    {
      v9 = FIELD_U32(a1, 1204);
      if ( (v9 & 0x80) != 0 )
        FIELD_U32(a1, 1204) = v9 | 4;
    }
    FIELD_U32(a1, 1224) &= ~0x80000u;
    FIELD_U32(a1, 10024) = FIELD_U32(a1, 10028);
    FIELD_U32(a1, 10028) = 0;
    sub_607656A8(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
    if ( (FIELD_U8(a1, 1205) & 2) == 0 )
    {
      FIELD_U32(a1, 9752) = FIELD_U32(a1, 108);
      FIELD_U32(a1, 9756) = FIELD_U32(a1, 112);
      FIELD_U32(a1, 9760) = FIELD_U32(a1, 116);
    }
    sub_6075EC74(a1);
  }
  return StageActor__afterExecute(a1, a2);
}
