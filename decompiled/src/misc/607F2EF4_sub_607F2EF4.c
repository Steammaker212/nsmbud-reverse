/* sub_607F2EF4
 * address: 0x607F2EF4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F2EF4(int a1, unsigned int a2)
{
  int v3; // r5
  StateMethodExecuter *result; // r0
  int *v5; // r1
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r0

  v3 = dword_60C99DD0;
  result = *(StateMethodExecuter **)(dword_60C99DD0 + 3796);
  if ( (unsigned int)result <= 3 )
  {
    if ( result != (StateMethodExecuter *)3 )
    {
      if ( result != (StateMethodExecuter *)2 )
        return result;
      FIELD_U32(a1, 48) = 1;
      v5 = &dword_60CC6114;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
    }
    v6 = FIELD_U32(dword_60C99DD0, 3668);
    if ( v6 )
    {
      if ( sub_604B6E00(v6, a2) )
      {
        FIELD_U32(v3, 3780) |= 2u;
        v8 = 1;
      }
      else
      {
        v9 = FIELD_U32(v3, 3668);
        if ( !v9 || !sub_604B6F58(v9, v7) )
          goto LABEL_13;
        v8 = 7;
      }
      FIELD_U32(a1, 48) = v8;
    }
LABEL_13:
    v5 = &dword_60CC60F4;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v5);
  }
  return result;
}
