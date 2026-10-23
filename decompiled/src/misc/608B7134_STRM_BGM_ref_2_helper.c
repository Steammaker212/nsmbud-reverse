/* STRM_BGM_ref_2_helper
 * address: 0x608B7134   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_2_helper(int a1, float a2)
{
  void *v4; // r5
  int v5; // r0

  v4 = sub_608C3B10();
  v5 = sub_608C2698(v4, 24, 1);
  FIELD_U32(v5, 4) = 23;
  FIELD_U32(v5, 16) = a1 + 448;
  FIELD_F32(v5, 20) = a2;
  return sub_608C2C1C(v4);
}
