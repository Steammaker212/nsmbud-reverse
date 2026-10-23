/* sub_6081AEDC
 * address: 0x6081AEDC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081AEDC(int a1)
{
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 32) + 16))(FIELD_U32(a1, 32));
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = -1;
  FIELD_U32(a1, 24) = -1;
  return -1;
}
