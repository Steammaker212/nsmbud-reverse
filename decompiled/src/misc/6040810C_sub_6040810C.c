/* sub_6040810C
 * address: 0x6040810C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6040810C(int a1)
{
  int v1; // r6
  StateMgr *v2; // r5
  StateMethodExecuter *result; // r0

  v1 = 60;
  v2 = (StateMgr *)(a1 + 3832);
  do
  {
    result = (StateMethodExecuter *)LOBYTE(FIELD_U32(v2, 0x0));
    if ( LOBYTE(FIELD_U32(v2, 0x0)) )
    {
      result = v2[-2].currentMethodExecuter;
      if ( result == (StateMethodExecuter *)35 )
      {
        result = StateMgr__changeState(v2 - 237, &stru_60CACD8C);
        v2[-1].executer = 0;
      }
    }
    --v1;
    v2 += 241;
  }
  while ( v1 );
  return result;
}
