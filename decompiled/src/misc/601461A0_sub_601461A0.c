/* sub_601461A0
 * address: 0x601461A0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601461A0(int a1)
{
  int v2; // r1
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6A64, &stru_60AF6A70, 0);
  FIELD_U32(a1, 3200) |= 0x5C000E00u;
  v2 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0x4C000600u;
  FIELD_U32(a1, 3184) = v2 | 0x4C000600;
  result = FIELD_U32(a1, 3192) | 0x4C000600;
  FIELD_U32(a1, 3192) = result;
  return result;
}
