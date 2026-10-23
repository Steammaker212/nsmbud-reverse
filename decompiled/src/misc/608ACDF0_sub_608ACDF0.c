/* sub_608ACDF0
 * address: 0x608ACDF0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACDF0(_DWORD *a1, _DWORD *a2)
{
  int *v2; // r3
  int v3; // lr
  int *v4; // r4
  int v5; // lr

  if ( a2 + 103 != a1 + 2 )
  {
    v2 = (int *)a2[104];
    v3 = *v2;
    *(_DWORD *)(a2[103] + 4) = v2;
    *v2 = a2[103];
    FIELD_U32(v3, 4) = a2 + 103;
    a2[103] = v3;
  }
  if ( a2 + 101 != a1 )
  {
    v4 = (int *)a2[102];
    v5 = *v4;
    *(_DWORD *)(a2[101] + 4) = v4;
    *v4 = a2[101];
    FIELD_U32(v5, 4) = a2 + 101;
    a2[101] = v5;
  }
  return sub_608B02E4(a2, a1);
}
