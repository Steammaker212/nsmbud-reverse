/* sub_60348C94
 * address: 0x60348C94   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60348C94(int a1, int a2, int a3)
{
  int result; // r0

  result = sub_60271EF4(a1, FIELD_U32(a3, 64));
  if ( !result )
    return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 648))(a1, a2, a3);
  return result;
}
