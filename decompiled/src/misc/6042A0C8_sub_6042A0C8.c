/* sub_6042A0C8
 * address: 0x6042A0C8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A0C8(_DWORD *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 24))(*a1);
  if ( !result )
    *a1 = 0;
  return result;
}
