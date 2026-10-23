/* sub_60684D0C
 * address: 0x60684D0C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60684D0C(int a1)
{
  int result; // r0

  FIELD_U32(a1, 8688) = -1024458752;
  FIELD_U32(a1, 8692) = 1123024896;
  FIELD_U32(a1, 8696) = -1039925248;
  FIELD_U32(a1, 8700) = -1039925248;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, (CollisionMgr_Sensor *)(a1 + 8688), 0, 0);
  result = FIELD_U32(a1, 3204) | 0x400;
  FIELD_U32(a1, 3204) = result;
  return result;
}
