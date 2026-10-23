/* sub_605DA750
 * address: 0x605DA750   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605DA750(StateActor *a1)
{
  CollisionMgr_Sensor *v2; // r5
  CollisionMgr_Sensor *v3; // r6
  CollisionMgr_Sensor *v4; // r0

  v2 = (CollisionMgr_Sensor *)(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 392))(a1);
  v3 = (CollisionMgr_Sensor *)(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 392))(a1);
  v4 = (CollisionMgr_Sensor *)(*(int (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 392))(a1);
  CollisionMgr_init((CollisionMgr *)FIELD_U8(a1, 0x288), a1, v2, v3 + 1, v4 + 2);
}
