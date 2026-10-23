/* LightSource__dtor_423CA0
 * address: 0x60423CA0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall LightSource__dtor_423CA0(_DWORD *a1)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r0

  *a1 = LightSource_vtable;
  v1 = (_DWORD *)a1[5];
  if ( v1 )
    *v1 = 0;
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
