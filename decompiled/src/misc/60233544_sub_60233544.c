/* sub_60233544
 * address: 0x60233544   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60233544(int a1)
{
  int result; // r0
  bool v2; // zf

  result = FIELD_U32(a1, 420);
  v2 = result == 0;
  if ( result )
  {
    result = *(_DWORD *)result;
    v2 = result == 0;
  }
  if ( !v2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 108))(result);
  return result;
}
