/* sub_60036428
 * address: 0x60036428   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60036428(_DWORD *a1)
{
  int result; // r0

  PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, (int)(a1 + 1661));
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1068))(a1);
  sub_600CE584(a1);
  result = a1[1979];
  if ( FIELD_U8(result, 6138) )
  {
    FIELD_U8(result, 6350) = 1;
    return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C7FFDC);
  }
  return result;
}
