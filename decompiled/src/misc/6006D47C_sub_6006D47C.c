/* sub_6006D47C
 * address: 0x6006D47C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6006D47C(int a1)
{
  signed int v2; // r0
  float v3; // s0

  FIELD_U32(a1, 6148) &= ~0x200u;
  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  v3 = (float)byte_60AFE3F4[v2];
  FIELD_U32(a1, 80) = v2;
  FIELD_F32(a1, 132) = v3 * 3.0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_U32(a1, 26112) = 2;
  FIELD_U32(a1, 26104) = 1;
  FIELD_U32(a1, 6276) = 600;
  return 6276;
}
