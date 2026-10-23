/* sub_605B5274
 * address: 0x605B5274   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B5274(int a1)
{
  int result; // r0

  FIELD_U32(a1, 6104) = -1059061760;
  FIELD_U32(a1, 6108) = 1088421888;
  FIELD_U32(a1, 6112) = 1098907648;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, 0, 0);
  result = FIELD_U32(a1, 3192) | 0x40000004;
  FIELD_U32(a1, 3192) = result;
  return result;
}
