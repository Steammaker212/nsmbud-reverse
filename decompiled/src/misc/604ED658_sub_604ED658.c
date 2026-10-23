/* sub_604ED658
 * address: 0x604ED658   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ED658(int a1, int a2, int a3)
{
  int result; // r0

  FIELD_U32(a1, 3580) = a2;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 24))(a3);
  if ( result == 1 )
    return sub_6098E754(FIELD_U32(a1, 3560), a3, 0);
  return result;
}
