/* sub_604BE044
 * address: 0x604BE044   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BE044(int a1)
{
  int result; // r0
  int v3; // r0

  sub_605094B8(a1 + 9916);
  sub_605094B8(a1 + 13672);
  sub_605094B8(a1 + 17428);
  sub_60473DE4(*(_DWORD **)(a1 + 4), 1u, &dword_60CA27A0, 0);
  sub_60508FA4(a1 + 13672);
  nullsub_3946();
  result = *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + sub_60508FA4(a1 + 13672) + 19712);
  if ( result == 1 )
  {
    v3 = sub_60508FA4(a1 + 13672);
    return sub_60829034(dword_60CC6E04, v3);
  }
  return result;
}
