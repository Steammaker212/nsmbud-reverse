/* sub_6013C290
 * address: 0x6013C290   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013C290(int a1)
{
  int v2; // r1
  int result; // r0

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6848, &stru_60AF6854, &stru_60AF6860);
  v2 = FIELD_U32(a1, 3184);
  FIELD_U32(a1, 3176) |= 0xC000600u;
  FIELD_U32(a1, 3184) = v2 | 0xC000600;
  result = FIELD_U32(a1, 3192) | 0xC000600;
  FIELD_U32(a1, 3192) = result;
  return result;
}
