/* sub_601A9890
 * address: 0x601A9890   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A9890(StateMethodExecuter *result)
{
  int vtable; // r1

  *(float *)&FIELD_U32(result + (7) * 12, 0x0) = *(float *)&FIELD_U32(result + (7) * 12, 0x0) + -1.0;
  vtable = (int)FIELD_U32(result + (33) * 12, 0x0);
  if ( !vtable )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (23) * 12, 0x8), (StateBase *)&dword_60C8A3EC);
  FIELD_U32(result + (33) * 12, 0x0) = (void *)(vtable - 1);
  if ( vtable <= 67 )
    FIELD_U32(result + (15) * 12, 0x0) = (char *)FIELD_U32(result + (15) * 12, 0x0) - 130150524;
  return result;
}
