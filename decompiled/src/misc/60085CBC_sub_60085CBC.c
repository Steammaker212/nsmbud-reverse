/* sub_60085CBC
 * address: 0x60085CBC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60085CBC(int a1)
{
  unsigned int *v1; // r0
  int v2; // t1
  CollisionMgr *v3; // r4
  CollisionMgr_Sensor v4; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7616);
  v1 = (unsigned int *)(a1 + 7616);
  *v1 = v2 & 0xFFFFFFFC | 1;
  *(v1 - 1824) = 0;
  *(v1 - 1826) = 1097859072;
  *(v1 - 1825) = 1096810496;
  *(v1 - 1828) = 0;
  *(v1 - 1827) = 1096810496;
  *(v1 - 195) = 0;
  *(v1 - 194) = 1101004800;
  *(v1 - 193) = 1099956224;
  *(v1 - 192) = 1101004800;
  v3 = (CollisionMgr *)(v1 - 1742);
  CollisionMgr_setSensor((CollisionMgr *)(v1 - 1742), &stru_60AF5588, 2);
  CollisionMgr_setSensor(v3, &stru_60AF5594, 0);
  v4.b = 12.0;
  v4.a = 12.0;
  v4.c = -12.0;
  CollisionMgr_setSensor(v3, &v4, 1);
}
