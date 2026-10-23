/* sub_60457770
 * address: 0x60457770   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60457770(int a1)
{
  char v1; // r12
  int v2; // r9
  int v3; // r4
  int v4; // r8
  int *v5; // r10
  int v6; // r6
  int v7; // r0
  StateMethodExecuter *result; // r0

  v2 = 0;
  while ( 1 )
  {
    v3 = 0;
    v4 = dword_60CCF448;
    if ( FIELD_U32(dword_60CCF448, 212) )
    {
      v5 = *(int **)(dword_60CCF448 + 220);
      v6 = v2;
      do
      {
        v3 = *v5;
        if ( ((unsigned int)&dword_60C9CF14 & ~(1615165432 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
        {
          dword_60C9CF10 = (int)&off_60BD84A8;
          _cxa_guard_release(&dword_60C9CF14);
        }
        v7 = (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C9CF10);
        if ( v3 && v7 == 1 )
        {
          if ( !v6 )
            goto LABEL_13;
          --v6;
        }
        ++v5;
      }
      while ( v5 != (int *)(FIELD_U32(v4, 220) + 4 * FIELD_U32(v4, 212)) );
      v3 = 0;
    }
LABEL_13:
    result = *(StateMethodExecuter **)(v3 + 356);
    if ( result != *(StateMethodExecuter **)(v3 + 352) )
      break;
    if ( ++v2 >= 5 )
      return result;
  }
  FIELD_U32(a1, 232) = v2;
  return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)&dword_60C9CF44);
}
