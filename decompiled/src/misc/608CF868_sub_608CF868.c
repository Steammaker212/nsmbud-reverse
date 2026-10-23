/* sub_608CF868
 * address: 0x608CF868   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF868(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  if ( result == 1 )
  {
    FIELD_U32(a1, 16) = 0;
    FIELD_U8(a1, 8) = 0;
    return nn__fs__CloseFile();
  }
  return result;
}
