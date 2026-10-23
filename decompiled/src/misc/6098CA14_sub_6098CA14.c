/* sub_6098CA14
 * address: 0x6098CA14   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CA14(int *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int *))(*a1 + 16))(a1);
  if ( result == 1 )
  {
    sub_60909EC8(a1[12]);
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1[12] + 20))(a1[12]);
  }
  return result;
}
