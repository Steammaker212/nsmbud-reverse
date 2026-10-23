/* sub_604E9BD0
 * address: 0x604E9BD0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E9BD0(int a1)
{
  StateMethodExecuter *result; // r0
  StateMethodExecuter *v3; // r2

  result = (StateMethodExecuter *)sub_604089BC((_BYTE *)dword_60C9A1F0);
  v3 = *(StateMethodExecuter **)(a1 + 4552);
  if ( v3 != result )
  {
    result = *(StateMethodExecuter **)(a1 + 4556);
    if ( (int)v3 < (int)result )
    {
      FIELD_U32(a1, 4552) = (char *)&FIELD_U32(v3, 0x0) + 1;
      return StateMgr__changeState((StateMgr *)(a1 + 4536), (StateBase *)&dword_60CA5E64);
    }
  }
  return result;
}
