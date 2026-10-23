/* sub_605BAF84
 * address: 0x605BAF84   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BAF84(int a1, int a2)
{
  int result; // r0

  result = *(unsigned __int8 *)((*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3) + 533);
  if ( result == 1 )
    return sub_604097B4(dword_60C9A1F0);
  return result;
}
