/* sub_60376910
 * address: 0x60376910   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60376910(Enemy *a1)
{
  int v1; // r1

  a1[1]._._.collisionMgr[5016] = 0;
  *(_DWORD *)&a1[1]._._.collisionMgr[5012] = 0;
  FIELD_F32(a1, 0x90) = 1.0;
  FIELD_F32(a1, 0x94) = 1.0;
  FIELD_F32(a1, 0x98) = 1.0;
  v1 = **(_DWORD **)(a1[1]._._._._.vtable + 20);
  FIELD_U32(v1, 20) = 0;
  FIELD_U32(v1, 28) |= 2u;
  return sub_60373CE4(a1);
}
