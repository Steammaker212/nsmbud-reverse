/* sub_60034384
 * address: 0x60034384   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60034384(int a1, int a2, int a3)
{
  int result; // r0
  bool v4; // zf

  result = FIELD_U32(a3, 64);
  v4 = result == 0;
  if ( result )
  {
    a2 = FIELD_U32(a2, 64);
    v4 = a2 == 0;
  }
  if ( !v4 )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)result + 1168))(result, a2, 13);
  return result;
}
