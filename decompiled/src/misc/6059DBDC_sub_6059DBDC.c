/* sub_6059DBDC
 * address: 0x6059DBDC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6059DBDC(int a1)
{
  char v1; // r12
  StateMethodExecuter *result; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r3

  if ( ((unsigned int)dword_60CAFC50 & ~(1616501748 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CAFC50) )
  {
    *(_QWORD *)&dword_60CAFC50[2] = 0xFF40000000C00000LL;
    _cxa_guard_release(dword_60CAFC50);
  }
  if ( ((unsigned int)&dword_60CAFC50[1] & ~(1616501820 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFC50[1]) )
  {
    *(_QWORD *)&dword_60CAFC50[4] = 0xC000000040000000LL;
    _cxa_guard_release(&dword_60CAFC50[1]);
  }
  result = (StateMethodExecuter *)(a1 + 7740);
  v4 = FIELD_U32(a1, 80);
  v5 = FIELD_U32(a1, 7740) + dword_60CAFC50[v4 + 2];
  FIELD_U32(a1, 7740) = v5;
  if ( v5 < 0 && v5 != 0x80000000 )
    v5 = -v5;
  v6 = dword_60CAFC50[v4 + 4];
  v7 = v6;
  if ( v6 < 0 )
  {
    v7 = v6;
    if ( v6 != 0x80000000 )
      v7 = -v6;
  }
  if ( v5 >= v7 )
  {
    FIELD_U32(result, 0x0) = (void *)v6;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CAFBFC);
  }
  return result;
}
