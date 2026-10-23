/* Player_endState_Stunned
 * address: 0x607A20E0   size: 108   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_endState_Stunned(_DWORD *a1)
{
  int result; // r0

  sub_607865BC((int)(a1 + 172), 1);
  a1[40] = sub_60773F3C((int)a1, a1[20]);
  a1[301] &= ~0x80000u;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1);
  if ( result == 1 )
  {
    result = sub_6079D894((int)a1);
    if ( result )
      return sub_607949A4(FIELD_U32(result, 648), 0);
  }
  return result;
}
