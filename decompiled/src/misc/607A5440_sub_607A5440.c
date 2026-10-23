/* sub_607A5440
 * address: 0x607A5440   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A5440(int result, unsigned int a2)
{
  int v2; // r4

  v2 = result;
  if ( a2 <= 1 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 1064))(result);
    if ( result == 1 )
    {
      FIELD_U32(v2, 160) = 0;
      return 0;
    }
  }
  return result;
}
