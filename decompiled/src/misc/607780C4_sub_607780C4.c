/* sub_607780C4
 * address: 0x607780C4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607780C4(int result, int a2)
{
  int v2; // r4
  int *v3; // r1

  v2 = result;
  if ( a2 == 2 )
  {
    v3 = &dword_60CBFAD4;
  }
  else if ( a2 == 1 )
  {
    v3 = &dword_60CBFAB4;
  }
  else
  {
    if ( a2 )
      return result;
    v3 = &dword_60CBFA94;
  }
  StateMgr__changeState((StateMgr *)(result + 36), (StateBase *)v3);
  FIELD_U32(v2, 52) = 0;
  FIELD_U32(v2, 56) = 0;
  return 0;
}
