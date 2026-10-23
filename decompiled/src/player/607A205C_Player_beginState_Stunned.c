/* Player_beginState_Stunned
 * address: 0x607A205C   size: 128   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_beginState_Stunned(_DWORD *a1)
{
  a1[22] = 0;
  a1[23] = 0;
  a1[25] = 0;
  a1[31] = 0;
  a1[40] = 0;
  PlayerBase_dispatchVirtual3((int)(a1 + 2839), 82, 0.0);
  a1[301] |= 0x80000u;
  sub_6078667C(a1 + 172, 1);
  sub_60773630((int)a1, 50, 0);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 1056))(a1, 6);
  a1[3200] = 8;
  return 12800;
}
