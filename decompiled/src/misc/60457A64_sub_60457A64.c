/* sub_60457A64
 * address: 0x60457A64   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60457A64(int a1)
{
  char v1; // r12
  int v2; // r6
  int *i; // r5
  int v4; // r4
  int v5; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 232);
  for ( i = *(int **)(dword_60CCF448 + 220); ; ++i )
  {
    v4 = *i;
    if ( ((unsigned int)&dword_60C9CF14 & ~(1615166160 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
    {
      dword_60C9CF10 = (int)&off_60BD84A8;
      _cxa_guard_release(&dword_60C9CF14);
    }
    v5 = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C9CF10) ^ 1;
    if ( v4 )
    {
      if ( !v5 )
        break;
    }
LABEL_2:
    ;
  }
  if ( v2 )
  {
    --v2;
    goto LABEL_2;
  }
  result = *(StateMethodExecuter **)(v4 + 4);
  if ( ((unsigned int)result & 0xFFFFFFF) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60C9CF84);
  return result;
}
