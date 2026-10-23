/* sub_608D75B8
 * address: 0x608D75B8   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608D75B8(_DWORD *a1)
{
  int *v2; // r4
  int *v3; // r7
  int *v4; // r1
  int *v5; // r5
  int *v6; // r1
  int v7; // r2

  v2 = (int *)a1[507];
  v3 = a1 + 506;
  v4 = a1 + 506;
  if ( v2 != a1 + 506 )
  {
    do
    {
      if ( (unsigned int)(*(v2 - 22) - 3) > 1 )
        break;
      v5 = (int *)v2[1];
      nn__os__WaitEvent(v2 - 29);
      if ( v2 != v3 )
      {
        v6 = (int *)v2[1];
        v7 = *v6;
        *(_DWORD *)(*v2 + 4) = v6;
        *v6 = *v2;
        FIELD_U32(v7, 4) = v2;
        *v2 = v7;
      }
      (*(void (__fastcall **)(int *))*(v2 - 32))(v2 - 32);
      sub_608C66F8(a1 + 508, v2 - 32);
      v2 = v5;
    }
    while ( v5 != v3 );
    v4 = (int *)a1[507];
  }
  return v4 != v3;
}
