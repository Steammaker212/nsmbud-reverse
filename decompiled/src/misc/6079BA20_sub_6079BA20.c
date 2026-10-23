/* sub_6079BA20
 * address: 0x6079BA20   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079BA20(_DWORD *a1)
{
  a1[305] &= 0xFFFF5FFF;
  a1[306] &= 0xFFFFDFFB;
  a1[310] &= ~2u;
  sub_607957D4((int)a1, 0);
  a1[3025] = 0;
  return 12100;
}
