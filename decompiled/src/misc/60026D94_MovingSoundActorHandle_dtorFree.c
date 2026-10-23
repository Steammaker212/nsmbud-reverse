/* MovingSoundActorHandle_dtorFree
 * address: 0x60026D94   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall MovingSoundActorHandle_dtorFree(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = MovingSoundActorHandle_vtable;
  sub_608AC1C0(a1 + 4);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
