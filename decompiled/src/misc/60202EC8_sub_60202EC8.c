/* sub_60202EC8
 * address: 0x60202EC8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60202EC8(int a1)
{
  int result; // r0

  result = sub_60185EA8(a1);
  if ( result == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1);
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 128))(a1, 3);
  }
  return result;
}
