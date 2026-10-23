/* SE_PLY_JUMP_ref_2
 * address: 0x607D435C   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_JUMP_ref_2(int a1)
{
  FIELD_U32(a1, 11496) = 0;
  FIELD_U32(a1, 1224) |= 0x600u;
  FIELD_U32(a1, 1204) |= 0x42000000u;
  FIELD_U32(a1, 1236) |= 0x1000000u;
  FIELD_U32(a1, 132) = 0;
  if ( FIELD_U32(a1, 9936) )
  {
    PlayerBase_dispatchVirtual3(a1 + 11364, 124, 0.0);
  }
  else
  {
    sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_JUMP", 0, 0);
    sub_6076FE18((float *)a1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1124))(a1, 1);
    sub_60774A4C(a1);
  }
  sub_6076F03C(a1, 1);
  FIELD_U32(a1, 6900) &= ~1u;
  ((void (__fastcall *)(int))loc_6076438C)(a1);
  sub_607712D4(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
}
