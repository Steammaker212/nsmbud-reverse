/* sub_6091171C
 * address: 0x6091171C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6091171C(int a1, int a2)
{
  char *result; // r0
  int v4; // r3
  _DWORD *v5; // r2

  result = 0;
  v4 = FIELD_U32(a1, 20);
  if ( v4 != -1 )
  {
    v5 = *(_DWORD **)(FIELD_U32(a1, 12) + 16 * v4);
    if ( *v5 > a2 )
      return (char *)v5 + v5[a2 + 1];
  }
  return result;
}
