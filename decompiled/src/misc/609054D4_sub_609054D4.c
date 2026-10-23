/* sub_609054D4
 * address: 0x609054D4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609054D4(int a1, float *a2)
{
  *a2 = (*(float (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 4) + 32))(
          FIELD_U32(a1, 4),
          FIELD_U32(a1, 8),
          FIELD_U32(a1, 12));
}
