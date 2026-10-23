/* sub_60407E18
 * address: 0x60407E18   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60407E18(int a1, int a2)
{
  StateMethodExecuter *result; // r0
  int v4; // r6
  int v5; // r7
  bool v6; // zf

  result = (StateMethodExecuter *)0x864078;
  v4 = a2 - 16;
  v5 = 60;
  do
  {
    v6 = v4 == a1;
    if ( v4 != a1 )
    {
      result = (StateMethodExecuter *)FIELD_U8(a1, 3832);
      v6 = result == 0;
    }
    if ( !v6 )
    {
      result = *(StateMethodExecuter **)(a1 + 3808);
      if ( result == (StateMethodExecuter *)32 )
      {
        result = StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60CACD8C);
        FIELD_U32(a1, 3816) = 0;
      }
    }
    --v5;
    a1 += 3856;
  }
  while ( v5 );
  return result;
}
