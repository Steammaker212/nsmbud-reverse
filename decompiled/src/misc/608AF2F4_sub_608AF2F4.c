/* sub_608AF2F4
 * address: 0x608AF2F4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AF2F4(int a1, char a2)
{
  int v3; // r0

  FIELD_U8(a1, 196) = a2;
  v3 = FIELD_U32(a1, 16);
  if ( v3 )
    sub_608ACB18(v3, a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}
