/* MovingSoundActorHandle_dtor
 * address: 0x60026D64   size: 44   group: misc
 * sym: # MovingSoundActorHandle_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall MovingSoundActorHandle_dtor(_DWORD *a1)
{
  *a1 = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 4);
  return sead__IDisposer__dtor(a1);
}
