/* sub_607A30CC
 * address: 0x607A30CC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A30CC(StateMgr *a1)
{
  int result; // r0

  FIELD_U32(a1 + (75) * 16, 0x4) = (StateBase *)((int)FIELD_U32(a1 + (75) * 16, 0x4) & ~0x10u);
  sub_60767080(a1);
  result = 0;
  a1[598].nextState = 0;
  if ( FIELD_U32(a1 + (82) * 16, 0x8) == (StateMethodExecuter *)-1 )
  {
    a1[711].lastState = 0;
    return ((int (__fastcall *)(StateMgr *, _DWORD, _DWORD))FIELD_U32(a1, 0x0)[9].vtable)(a1, 0, 0);
  }
  return result;
}
