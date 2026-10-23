/* sub_60873A18
 * address: 0x60873A18   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60873A18(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r1

  v3 = *(_DWORD *)(*(_DWORD *)*a1 + 24) + 40 * a2;
  if ( (FIELD_U8(v3, 28) & 1) != 0 )
    v4 = a1[2];
  else
    v4 = a1[1];
  return sub_60871508(v3, v4, a3);
}
