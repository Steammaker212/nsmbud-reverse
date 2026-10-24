/* sub_605E9904
 * address: 0x605E9904   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605E9904(StateMethodExecuter *result)
{
  StateMethodExecuter *v1; // r4
  char *vtable; // r5
  char *i; // r6
  char *owner; // r1
  int currentState; // r2

  v1 = result;
  vtable = (char *)FIELD_U32(result + (3) * 12, 0x0);
  if ( vtable )
  {
    for ( i = 0; i != vtable; ++i )
    {
      owner = (char *)v1[2].owner;
      currentState = v1[2].currentState;
      if ( (int)&i[currentState] >= (int)owner )
        currentState -= (int)owner;
      result = *((StateMethodExecuter **)FIELD_U32(v1 + (2) * 12, 0x0) + (_DWORD)&i[currentState]);
      if ( (BYTE2(result[522].vtable) & 0x40) == 0 )
        result = sub_605E1C04(result);
    }
  }
  return result;
}
