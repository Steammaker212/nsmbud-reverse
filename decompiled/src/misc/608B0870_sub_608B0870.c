/* sub_608B0870
 * address: 0x608B0870   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0870(int a1, int a2)
{
  int *v2; // r3
  int v3; // lr

  if ( a2 + 420 != a1 + 4 )
  {
    v2 = *(int **)(a2 + 424);
    v3 = *v2;
    *(_DWORD *)(FIELD_U32(a2, 420) + 4) = v2;
    *v2 = FIELD_U32(a2, 420);
    FIELD_U32(v3, 4) = a2 + 420;
    FIELD_U32(a2, 420) = v3;
  }
  return sub_608B030C(a2);
}
