/* sub_608DE7A4
 * address: 0x608DE7A4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall __spoils<> sub_608DE7A4(int a1, int *a2, int *a3)
{
  int *v3; // r0
  int v4; // r0

  if ( a2 != a3 )
  {
    if ( *a3 )
      *(_DWORD *)(*a3 + 4) = a3[1];
    v3 = (int *)a3[1];
    if ( v3 )
      *v3 = *a3;
    *a3 = 0;
    a3[1] = 0;
    v4 = *a2;
    *a2 = (int)a3;
    *a3 = v4;
    a3[1] = (int)a2;
    if ( v4 )
      FIELD_U32(v4, 4) = a3;
  }
}
