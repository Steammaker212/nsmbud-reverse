/* SE_SYS_ref_2_helper
 * address: 0x608B7294   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_ref_2_helper(int a1, int a2, float a3)
{
  void *v6; // r6
  int v7; // r0

  v6 = sub_608C3B10();
  v7 = sub_608C2698(v6, 32, 1);
  FIELD_U32(v7, 4) = 41;
  FIELD_F32(v7, 24) = a3;
  FIELD_U32(v7, 16) = a1 + 448;
  FIELD_U32(v7, 20) = a2;
  return sub_608C2C1C(v6);
}
