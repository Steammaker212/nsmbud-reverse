/* sead__IDisposer__dtor
 * address: 0x608F5C4C   size: 68   group: sdklib
 * sym: sead::IDisposer::~IDisposer() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__IDisposer__dtor(_DWORD *a1)
{
  int v2; // r0

  *a1 = &sead__IDisposer__vtable;
  v2 = a1[1];
  if ( !v2 )
    goto LABEL_4;
  if ( v2 != 1 )
  {
    sead__Heap__removeDisposer(v2, (int)a1);
LABEL_4:
    a1[1] = 1;
  }
  return a1;
}
