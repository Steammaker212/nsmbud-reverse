/* sub_60980000
 * address: 0x60980000   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_60980000(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  int v9; // r0

  v9 = a1[12].n128_i32[2];
  if ( v9 )
    sub_6097FE3C(v9, (int)a1, (float *)(FIELD_U32(a3, 24) + 20), a1[12].n128_u8[12]);
  return sub_6085ADD8(a1, a2, a3, a4, a5);
}
