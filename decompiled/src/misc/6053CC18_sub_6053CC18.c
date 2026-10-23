/* sub_6053CC18
 * address: 0x6053CC18   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053CC18(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r5

  result = (StateMethodExecuter *)dword_60C99DD0;
  if ( dword_60C99DD0 )
  {
    v3 = dword_60C99DD0 + 16;
    result = (StateMethodExecuter *)sub_604B82EC(dword_60C99DD0 + 16);
    if ( !result )
    {
      result = (StateMethodExecuter *)sub_604B80D0(v3);
      if ( !result )
        return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CAB894);
    }
  }
  return result;
}
