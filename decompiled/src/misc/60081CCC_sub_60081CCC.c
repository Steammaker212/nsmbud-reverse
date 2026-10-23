/* sub_60081CCC
 * address: 0x60081CCC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60081CCC(int a1)
{
  char v1; // r12
  int v3; // r5

  v3 = FIELD_U32(a1, 7244);
  if ( v3 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611144436 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81100) == 1 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v3 + 192))(v3, &unk_60C81FC0);
  }
  return PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
}
