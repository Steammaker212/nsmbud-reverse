/* sub_6000B3A4
 * address: 0x6000B3A4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6000B3A4(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BC04D4;
  if ( (_DWORD *)dword_60C7B460 == a1 )
  {
    dword_60C7B460 = 0;
    (**(void (__fastcall ***)(int))PlayerLookTargetList_instance)(PlayerLookTargetList_instance);
    PlayerLookTargetList_instance = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
