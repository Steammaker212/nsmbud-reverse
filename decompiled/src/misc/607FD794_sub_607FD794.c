/* sub_607FD794
 * address: 0x607FD794   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD794(_DWORD *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r1

  v3 = a1 + 8;
  result = a1[8];
  if ( result < 2 )
    goto LABEL_4;
  sub_608DECA0(v3, sub_607FD80C);
  while ( 1 )
  {
    result = *v3;
LABEL_4:
    if ( result < 1 )
      break;
    v4 = result - 1;
    result = *(_DWORD *)(a1[10] + 4 * (result - 1));
    if ( !result || FIELD_U8(result, 39) )
      break;
    *(_DWORD *)result = a1[11];
    a1[11] = result;
    sub_608DEB9C(v3, v4, 1);
  }
  return result;
}
