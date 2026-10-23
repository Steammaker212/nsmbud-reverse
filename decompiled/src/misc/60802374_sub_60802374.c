/* sub_60802374
 * address: 0x60802374   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60802374(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C27E9C;
  sub_603E4284(a1 + 9);
  v2 = sead__IDisposer::~IDisposer(a1);
  operator_delete(v2);
}
