/* sub_60745F5C
 * address: 0x60745F5C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60745F5C(int a1, int a2)
{
  int v3; // r5

  v3 = 0;
  if ( SE_SYS_SC_HIT_JUST_ref(FIELD_U32(a2, 64), 0, *(float *)(FIELD_U32(a2, 64) + 756) != 0.0) == 1 )
  {
    v3 = 1;
    FIELD_U8(a2, 110) |= 2u;
  }
  return v3;
}
