/* sub_607A5470
 * address: 0x607A5470   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A5470(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  int result; // r0

  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 708))(a1);
  result = 0;
  if ( v6 == 1 )
  {
    a1[3008] = a3;
    a1[2456] = *a2;
    a1[2457] = a2[1];
    a1[2458] = a2[2];
    sub_60766314((int)a1, (StateBase *)&dword_60CC4B2C, 0);
    Player_changeState((int)a1, (StateBase *)&dword_60CBF7F8, 0);
    return 1;
  }
  return result;
}
