/* sub_60347C54
 * address: 0x60347C54   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60347C54(CollisionActor *a1)
{
  float v2; // s0
  float v3; // s0
  int result; // r0

  StageActor__accelerateX(&FIELD_U32(a1, 0x0));
  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  v3 = CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    SE_EMY_MECHAKOOPA_BOUND_ref(a1, v3);
  result = *(unsigned __int8 *)(**(_DWORD **)(a1[1]._.aCollider.field_68 + 12) + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(CollisionActor *, int *, float))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C94948, v3);
  return result;
}
