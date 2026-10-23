/* sub_60996CEC
 * address: 0x60996CEC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60996CEC(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U32(a1, 36);
  if ( !v2 )
    return sub_60996F34(a1);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
  if ( !result )
    return sub_60996F34(a1);
  return result;
}
