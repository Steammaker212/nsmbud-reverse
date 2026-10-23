/* sub_6048D8AC
 * address: 0x6048D8AC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048D8AC(int a1, _DWORD *a2)
{
  int result; // r0

  result = FIELD_U8(a1, 13817);
  if ( result )
  {
    sub_60473B88((_DWORD *)(a1 + 36), a2, 0);
    sub_60495660(FIELD_U32(a1, 14240), a2);
    sub_604EE17C(FIELD_U32(a1, 14244), a2);
    sub_6054550C(a1 + 14248, a2);
    return sub_60483E10(FIELD_U32(a1, 47756), a2);
  }
  return result;
}
