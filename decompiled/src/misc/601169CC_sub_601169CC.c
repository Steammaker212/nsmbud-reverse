/* sub_601169CC
 * address: 0x601169CC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601169CC(unsigned __int8 *a1)
{
  int result; // r0

  BowserJrBase__executeState_DieFall((int)a1);
  result = a1[7265];
  if ( a1[7265] )
  {
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, (int)(a1 + 6644));
    ((void (__fastcall *)(_DWORD))loc_60024338)(0);
    return (*(int (__fastcall **)(unsigned __int8 *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86AE4);
  }
  return result;
}
