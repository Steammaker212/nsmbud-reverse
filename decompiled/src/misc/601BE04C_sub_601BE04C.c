/* sub_601BE04C
 * address: 0x601BE04C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601BE04C(int a1)
{
  char v2; // r12
  _DWORD *v3; // r5
  int v4; // r6
  StateMethodExecuter *result; // r0

  if ( sub_601C5EEC(a1) == 1 )
    return sub_601B69F4(a1, &stru_60C8ADB4);
  v3 = (_DWORD *)a1;
  while ( 1 )
  {
    v3 = (_DWORD *)v3[69];
    if ( !v3 )
      break;
    if ( (*(int (__fastcall **)(_DWORD *))(*v3 + 92))(v3) == 1 )
      goto LABEL_7;
  }
  v3 = 0;
LABEL_7:
  if ( ((unsigned int)&dword_60C8AB28 & ~(1612439712 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
  {
    dword_60C8AB24 = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C8AB28);
  }
  v4 = (int)v3 + 1110;
  if ( !(*(int (__fastcall **)(_DWORD *, int *))*v3)(v3, &dword_60C8AB24) )
    v4 = 1110;
  result = (StateMethodExecuter *)*(unsigned __int8 *)v4;
  if ( ((unsigned __int8)result & 4) != 0 )
    return sub_601B69F4(a1, &stru_60C8ADB4);
  return result;
}
