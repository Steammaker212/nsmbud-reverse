/* sub_608D3DDC
 * address: 0x608D3DDC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3DDC(int result, int a2)
{
  int *v2; // r3
  int v3; // lr

  if ( a2 + 4 != result )
  {
    v2 = *(int **)(a2 + 8);
    v3 = *v2;
    *(_DWORD *)(FIELD_U32(a2, 4) + 4) = v2;
    result = FIELD_U32(a2, 4);
    *v2 = result;
    FIELD_U32(v3, 4) = a2 + 4;
    FIELD_U32(a2, 4) = v3;
  }
  return result;
}
