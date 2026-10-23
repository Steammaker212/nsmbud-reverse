/* sub_604F98F4
 * address: 0x604F98F4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604F98F4(int a1)
{
  int result; // r0

  FIELD_U32(a1, 4108) = 60;
  result = sub_6047482C(a1 + 40, 2u);
  if ( result )
    return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)result + 16))(result, 0);
  return result;
}
