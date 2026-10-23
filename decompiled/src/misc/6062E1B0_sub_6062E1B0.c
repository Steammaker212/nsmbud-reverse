/* sub_6062E1B0
 * address: 0x6062E1B0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062E1B0(int a1)
{
  int v1; // r1

  if ( FIELD_U32(a1, 6244) == 1 )
    v1 = 52;
  else
    v1 = 26;
  sub_60414344((sead_ListNode *)dword_60C9A698, v1, (float *)(a1 + 108));
  return 1;
}
