/* sead__IDisposer__dtor_8F5C94
 * address: 0x608F5C94   size: 56   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead__IDisposer__dtor_8F5C94(_DWORD *a1)
{
  unsigned int v2; // r0

  *a1 = &sead__IDisposer__vtable;
  v2 = a1[1];
  if ( v2 >= 2 )
    sead__Heap__removeDisposer(v2, (int)a1);
  operator_delete(a1);
}
