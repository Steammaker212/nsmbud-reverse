/* sub_6076F4A8
 * address: 0x6076F4A8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076F4A8(_DWORD *a1)
{
  int result; // r0

  result = sub_60793CA8(*(_DWORD *)(a1[162] + 4));
  if ( result == 1 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 1008))(a1);
  return result;
}
