/* sub_60683510
 * address: 0x60683510   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60683510(int a1)
{
  int v2; // r1
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B07D8C, 0, 0);
  v2 = FIELD_U32(a1, 3204) | 0x8400;
  result = FIELD_U32(a1, 3200) | 0x51000840;
  FIELD_U32(a1, 3200) = result;
  FIELD_U32(a1, 3204) = v2;
  return result;
}
