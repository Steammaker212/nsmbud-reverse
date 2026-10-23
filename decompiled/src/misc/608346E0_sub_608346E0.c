/* sub_608346E0
 * address: 0x608346E0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608346E0(int a1, int a2)
{
  int v2; // r0

  if ( !a1 )
  {
    if ( dword_60C9C0FC )
    {
      v2 = FIELD_U32(dword_60C9C0FC, 724);
      if ( v2 )
        a2 += FIELD_U32(v2, 56);
    }
  }
  return a2;
}
