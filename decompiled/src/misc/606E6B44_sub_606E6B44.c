/* sub_606E6B44
 * address: 0x606E6B44   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E6B44(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60C1F878;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 1065353216;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U8(a1, 6312) = 0;
  FIELD_U8(a1, 6313) = 0;
  FIELD_U8(a1, 6314) = 1;
  FIELD_U8(a1, 6315) = 1;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 6320) = 0;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6328) = &ActorScaler_vtable;
  FIELD_U32(a1, 6332) = 1065353216;
  FIELD_U32(a1, 6336) = 1065353216;
  FIELD_U32(a1, 6340) = 1065353216;
  FIELD_U32(a1, 6344) = 1065353216;
  FIELD_U32(a1, 6348) = 0;
  FIELD_U32(a1, 6352) = 0;
  FIELD_U32(a1, 6356) = a1;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6360));
  FIELD_U32(a1, 6664) = off_60C1FB24;
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 6672));
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 12024));
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 17376));
  ActorCollisionMgr_ctor((CollisionMgr *)(a1 + 22728));
  return a1;
}
