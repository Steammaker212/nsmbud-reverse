/* sub_60748268
 * address: 0x60748268   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60748268(int a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf

  result = (StateMethodExecuter *)Actor__getProfileId((Actor *)a1);
  v3 = result == (StateMethodExecuter *)842;
  if ( result == (StateMethodExecuter *)842 )
  {
    result = *(StateMethodExecuter **)(a1 + 676);
    v3 = result == 0;
  }
  if ( v3 )
  {
    FIELD_U32(a1, 80) ^= 1u;
    return StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE650);
  }
  return result;
}
