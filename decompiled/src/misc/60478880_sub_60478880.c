/* sub_60478880
 * address: 0x60478880   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478880(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 148);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 92))(result, 0);
  return result;
}
