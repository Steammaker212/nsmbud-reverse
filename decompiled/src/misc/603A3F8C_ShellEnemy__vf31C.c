/* ShellEnemy__vf31C
 * address: 0x603A3F8C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall ShellEnemy__vf31C(int a1)
{
  FIELD_U32(a1, 568) &= ~4u;
  FIELD_U32(a1, 80) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U8(a1, 6386) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  return -1065353216;
}
