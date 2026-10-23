/* sub_6079C784
 * address: 0x6079C784   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6079C784(int a1)
{
  int v2; // r5
  char v3; // r12

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
  if ( ((unsigned int)&dword_60C8E648 & ~(1618593728 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E648) )
  {
    dword_60C8E644 = (int)&off_60BDBC48;
    _cxa_guard_release(&dword_60C8E648);
  }
  return v2
      && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C8E644) == 1
      && (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 412))(v2, a1) != 0;
}
