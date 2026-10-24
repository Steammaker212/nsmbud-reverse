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

  *(float *)&FIELD_U32(result + (7) * 12, 0x0) = *(float *)&FIELD_U32(result + (7) * 12, 0x0) + 1.0;
  vtable = (char *)FIELD_U32(result + (33) * 12, 0x0);
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), (StateBase *)&unk_60C8A42C);
  v2 = vtable - 1;
  FIELD_U32(result + (33) * 12, 0x0) = vtable - 1;
  owner = (char *)FIELD_U32(result + (33) * 12, 0x4);
  if ( (int)vtable > (int)owner )
  {
    v4 = (int)FIELD_U32(result + (15) * 12, 0x0) + 130150524;
    if ( v2 == owner )
      v4 = -1073741824;
    FIELD_U32(result + (15) * 12, 0x0) = (void *)v4;
  }
  return result;
}
