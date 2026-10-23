/* sub_6047F304
 * address: 0x6047F304   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6047F304(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r3
  int v4; // lr
  char *v5; // r12

  v3 = (_DWORD *)result[4];
  if ( v3 != result + 3 )
  {
    v4 = result[6];
    v5 = (char *)result - v4 + 12;
    result = (_DWORD *)((char *)v3 - v4);
    do
    {
      result[45] = a2;
      result[50] = a3;
      v3 = (_DWORD *)v3[1];
      result = (_DWORD *)((char *)v3 - v4);
    }
    while ( (char *)v3 - v4 != v5 );
  }
  return result;
}
