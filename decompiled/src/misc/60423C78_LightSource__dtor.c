/* LightSource__dtor
 * address: 0x60423C78   size: 36   group: misc
 * sym: LightSource::~LightSource() as D1
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall LightSource__dtor(_DWORD *a1)
{
  _DWORD *v1; // r1

  *a1 = LightSource_vtable;
  v1 = (_DWORD *)a1[5];
  if ( v1 )
    *v1 = 0;
  return sead__IDisposer__dtor(a1);
}
