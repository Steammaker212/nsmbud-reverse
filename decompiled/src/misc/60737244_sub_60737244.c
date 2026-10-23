/* sub_60737244
 * address: 0x60737244   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60737244(Vec3 *a1)
{
  EffectData_create(261, a1 + 9, 0, 0);
  a1[9].z = a1[9].z + 2.0;
  a1[566].y = 0.0;
  a1[10].y = -1.75;
  BYTE2(a1[616].z) = 0;
  a1[567].x = 0.03;
  a1[567].y = 1.2;
  return 6808;
}
