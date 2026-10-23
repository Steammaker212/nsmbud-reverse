/* sub_608D74FC
 * address: 0x608D74FC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D74FC(_DWORD *result)
{
  int *v1; // r7
  int *v2; // r6
  _DWORD *v3; // r8
  int *v4; // r4
  int *v5; // r1
  int v6; // r2

  v1 = (int *)result[507];
  v2 = result + 506;
  if ( v1 != result + 506 )
  {
    v3 = result + 508;
    do
    {
      result = (_DWORD *)(*(v1 - 22) - 3);
      if ( (unsigned int)result > 1 )
        break;
      v4 = (int *)v1[1];
      nn__os__WaitEvent(v1 - 29);
      if ( v1 != v2 )
      {
        v5 = (int *)v1[1];
        v6 = *v5;
        *(_DWORD *)(*v1 + 4) = v5;
        *v5 = *v1;
        FIELD_U32(v6, 4) = v1;
        *v1 = v6;
      }
      (*(void (__fastcall **)(int *))*(v1 - 32))(v1 - 32);
      result = sub_608C66F8(v3, v1 - 32);
      v1 = v4;
    }
    while ( v4 != v2 );
  }
  return result;
}
