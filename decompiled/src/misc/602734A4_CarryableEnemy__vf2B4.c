/* CarryableEnemy__vf2B4
 * address: 0x602734A4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CarryableEnemy__vf2B4(int a1)
{
  unsigned int v2; // r1

  FIELD_U32(a1, 328) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 176);
  FIELD_U32(a1, 340) &= ~0x1000u;
  FIELD_U32(a1, 3200) &= 0xFFFFFFE7;
  FIELD_U32(a1, 3192) &= 0xFFFFFFE7;
  v2 = FIELD_U32(a1, 3184) & 0xFFFFFFE7;
  FIELD_U32(a1, 3176) &= 0xFFFFFFE7;
  FIELD_U32(a1, 3184) = v2;
  return sub_600009FC((StageActor *)a1);
}
