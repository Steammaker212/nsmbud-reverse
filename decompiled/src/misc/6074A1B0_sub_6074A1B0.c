/* sub_6074A1B0
 * address: 0x6074A1B0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074A1B0(int a1)
{
  StateMethodExecuter *result; // r0
  StateMethodExecuter *v3; // r1
  bool v4; // zf

  result = (StateMethodExecuter *)Actor__getProfileId((Actor *)a1);
  if ( result != (StateMethodExecuter *)845 )
  {
    result = *(StateMethodExecuter **)(a1 + 672);
    v3 = *(StateMethodExecuter **)(a1 + 80);
    v4 = v3 == result;
    if ( v3 == result )
    {
      result = *(StateMethodExecuter **)(a1 + 676);
      v4 = result == 0;
    }
    if ( v4 )
      return StateMgr__changeState((StateMgr *)(a1 + 712), &stru_60CBE840);
  }
  return result;
}
