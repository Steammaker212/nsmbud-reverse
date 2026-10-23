/* sub_608A9424
 * address: 0x608A9424   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9424(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = FIELD_U32(a1, 28);
  if ( result )
    return (*(int (__fastcall **)(int, int, int, int, int))(*(_DWORD *)result + 8))(result, a1, a2, a3, a4);
  return result;
}
