/* sub_60858A34
 * address: 0x60858A34   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60858A34(int a1, _DWORD *a2)
{
  int *v2; // r3
  int v3; // lr

  if ( a2 + 1 != (_DWORD *)(a1 + 16) )
  {
    v2 = (int *)a2[2];
    v3 = *v2;
    *(_DWORD *)(a2[1] + 4) = v2;
    *v2 = a2[1];
    FIELD_U32(v3, 4) = a2 + 1;
    a2[1] = v3;
  }
  a2[3] = 0;
  return 0;
}
