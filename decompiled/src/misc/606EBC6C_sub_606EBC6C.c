/* sub_606EBC6C
 * address: 0x606EBC6C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EBC6C(int a1)
{
  float *v2; // r1
  int result; // r0

  ((void (__fastcall *)(int))loc_606BBA3C)(a1 + 6256);
  v2 = (float *)(a1 + 112);
  if ( !FIELD_U8(a1, 6349) )
    v2 = (float *)(a1 + 108);
  *v2 = FIELD_F32(a1, 7464) + FIELD_F32(a1, 6324);
  result = FIELD_U8(dword_60C9CF0C, 1361);
  if ( (result & 1) != 0 )
    return lift_trampoline_ref_6ED7CC(a1 + 6100);
  return result;
}
