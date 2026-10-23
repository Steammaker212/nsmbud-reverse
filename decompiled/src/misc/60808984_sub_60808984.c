/* sub_60808984
 * address: 0x60808984   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808984(int a1, int a2, char a3)
{
  int result; // r0

  result = FIELD_U32(a1, 88);
  if ( result )
  {
    result = *(_DWORD *)(result + 4 * a2 + 44);
    if ( result )
      FIELD_U8(result, 2872) = a3;
  }
  return result;
}
