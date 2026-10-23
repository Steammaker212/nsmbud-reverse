/* sub_607F31A4
 * address: 0x607F31A4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F31A4(int a1, unsigned int a2)
{
  int v3; // r5
  StateMethodExecuter *result; // r0
  int v5; // r0
  unsigned int v6; // r1
  int v7; // r0
  int *v8; // r1
  int v9; // r0

  v3 = dword_60C99DD0;
  result = *(StateMethodExecuter **)(dword_60C99DD0 + 3796);
  if ( (unsigned int)result <= 3 )
  {
    if ( result == (StateMethodExecuter *)2 )
    {
      FIELD_U32(a1, 48) = 4;
      v8 = &dword_60CC6114;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v8);
    }
    if ( result != (StateMethodExecuter *)3 )
      return result;
    FIELD_U32(dword_60C99DD0, 3780) |= 2u;
    v5 = FIELD_U32(v3, 3668);
    if ( v5 )
    {
      if ( sub_604B6E00(v5, a2) )
      {
        FIELD_U32(v3, 3780) &= ~2u;
        v7 = 4;
      }
      else
      {
        v9 = FIELD_U32(v3, 3668);
        if ( !v9 || !sub_604B6F58(v9, v6) )
          goto LABEL_13;
        v7 = 1;
      }
      FIELD_U32(a1, 48) = v7;
    }
LABEL_13:
    v8 = &dword_60CC60F4;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v8);
  }
  return result;
}
