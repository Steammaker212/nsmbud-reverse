/* sub_60318B6C
 * address: 0x60318B6C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60318B6C(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  float v5; // s2
  float v6; // s6
  CollisionMgr *v7; // r4
  float v8; // s0

  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  v2 = FIELD_U32(a1, 6408);
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( ((unsigned int)&dword_60C93528 & ~(1613859808 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C93528) )
    {
      dword_60C93524 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C93528);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C93524) == 1 )
    {
      v5 = FIELD_F32(v3, 6356) - FIELD_F32(a1, 112);
      v6 = FIELD_F32(v3, 6352) - FIELD_F32(a1, 108);
      FIELD_F32(a1, 6416) = sqrtf(
                                (float)((float)(v5 * v5) + (float)(v6 * v6))
                              + (float)((float)(FIELD_F32(v3, 6360) - FIELD_F32(a1, 116))
                                      * (float)(FIELD_F32(v3, 6360) - FIELD_F32(a1, 116))));
    }
  }
  v7 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor(v7, 0, 3);
  CollisionMgr_setSensor(v7, 0, 2);
  CollisionMgr_setSensor(v7, 0, 0);
  CollisionMgr_setSensor(v7, 0, 1);
  return CollisionMgr_process(v7, v8);
}
