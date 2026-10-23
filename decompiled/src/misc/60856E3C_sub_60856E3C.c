/* sub_60856E3C
 * address: 0x60856E3C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856E3C(int result, int a2)
{
  int v2; // r2

  v2 = FIELD_U32(result, 12);
  if ( v2 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 40))(a2, v2, 1);
  return result;
}
