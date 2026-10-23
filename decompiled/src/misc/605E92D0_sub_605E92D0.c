/* sub_605E92D0
 * address: 0x605E92D0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E92D0(int a1)
{
  char v1; // r12
  int v3; // r5
  StateMethodExecuter *result; // r0

  v3 = FIELD_U32(dword_60C995D0, 32);
  if ( !v3 )
    return StateMgr__execute((StateMgr *)(a1 + 332));
  if ( ((unsigned int)dword_60C8DC30 & ~(1616810752 << v1) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(dword_60C8DC30) )
    {
      dword_60C8DC2C = (int)&off_60BD94B0;
      _cxa_guard_release(dword_60C8DC30);
    }
  }
  result = (StateMethodExecuter *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, &dword_60C8DC2C);
  if ( !result )
    return StateMgr__execute((StateMgr *)(a1 + 332));
  return result;
}
