/* sub_60349668
 * address: 0x60349668   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60349668(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0

  CollisionActor__handleGravity(a1);
  v2 = CollisionActor__handleSpeed(a1);
  CollisionMgr_process(FIELD_U8(a1, 0x288), v2);
  SE_EMY_MECHAKOOPA_BOUND_ref((int)a1);
  result = SE_EMY_MECHAKOOPA_RESTART_ref((int)a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C949F0);
  return result;
}
