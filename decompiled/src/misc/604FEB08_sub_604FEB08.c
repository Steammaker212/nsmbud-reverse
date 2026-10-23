/* sub_604FEB08
 * address: 0x604FEB08   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FEB08(int a1)
{
  StateMethodExecuter *result; // r0
  unsigned int v3; // r0
  int v4; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 1102);
  if ( result )
    return result;
  if ( !FIELD_U8(a1, 1099) )
  {
    v3 = FIELD_U32(a1, 14936);
    if ( v3 )
    {
      if ( v3 >= 5 )
        v3 = 0;
      v4 = a1 + 404 * v3 + 5696;
    }
    else
    {
      if ( (FIELD_U8(a1, 7717) & 0x40) != 0 )
      {
LABEL_14:
        FIELD_U32(a1, 1084) = FIELD_U32(a1, 2136);
        sub_60502694(a1 + 56);
        result = (StateMethodExecuter *)FIELD_U8(a1, 1099);
        if ( !FIELD_U8(a1, 1099) )
          return result;
        goto LABEL_4;
      }
      v4 = a1 + 7712;
    }
    result = (StateMethodExecuter *)FIELD_U8(v4, 1);
    if ( ((unsigned __int8)result & 0x40) == 0 )
      return result;
    goto LABEL_14;
  }
LABEL_4:
  result = (StateMethodExecuter *)FIELD_U8(a1, 1096);
  if ( !FIELD_U8(a1, 1096) )
  {
    result = *(StateMethodExecuter **)(a1 + 2136);
    if ( *(StateMethodExecuter **)(a1 + 1084) == result )
      return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CA73C8);
  }
  return result;
}
