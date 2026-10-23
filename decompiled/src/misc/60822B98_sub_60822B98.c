/* sub_60822B98
 * address: 0x60822B98   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60822B98(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C2A5D0;
  FIELD_U32(ArchiveManagerMaybe_instance, 16) = 0;
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
