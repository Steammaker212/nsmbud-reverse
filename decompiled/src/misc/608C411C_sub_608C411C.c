/* sub_608C411C
 * address: 0x608C411C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C411C(int a1, int a2)
{
  int result; // r0
  int *v3; // r3
  int v4; // lr

  result = a1 + 524;
  if ( a2 + 4 != result )
  {
    v3 = *(int **)(a2 + 8);
    v4 = *v3;
    *(_DWORD *)(FIELD_U32(a2, 4) + 4) = v3;
    result = FIELD_U32(a2, 4);
    *v3 = result;
    FIELD_U32(v4, 4) = a2 + 4;
    FIELD_U32(a2, 4) = v4;
  }
  return result;
}
