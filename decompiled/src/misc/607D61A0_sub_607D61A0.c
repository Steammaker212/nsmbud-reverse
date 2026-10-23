/* sub_607D61A0
 * address: 0x607D61A0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D61A0(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C261E4;
  nullsub_407();
  v2 = sead__IDisposer::~IDisposer(a1);
  operator_delete(v2);
}
