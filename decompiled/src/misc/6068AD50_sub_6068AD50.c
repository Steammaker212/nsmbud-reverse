/* sub_6068AD50
 * address: 0x6068AD50   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068AD50(int a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 16) + 12))(FIELD_U32(a1, 16));
  result = FIELD_U32(a1, 20);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
  return result;
}
