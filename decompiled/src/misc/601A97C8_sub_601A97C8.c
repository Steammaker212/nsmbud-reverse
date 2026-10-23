/* sub_601A97C8
 * address: 0x601A97C8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A97C8(StateMethodExecuter *result)
{
  char *vtable; // r2
  char *v2; // r1
  char *owner; // r3
  int v4; // r2

  *(float *)&result[7].vtable = *(float *)&result[7].vtable + 1.0;
  vtable = (char *)result[33].vtable;
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&unk_60C8A42C);
  v2 = vtable - 1;
  result[33].vtable = vtable - 1;
  owner = (char *)result[33].owner;
  if ( (int)vtable > (int)owner )
  {
    v4 = (int)result[15].vtable + 130150524;
    if ( v2 == owner )
      v4 = -1073741824;
    result[15].vtable = (void *)v4;
  }
  return result;
}
