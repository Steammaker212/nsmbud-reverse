/* sub_603EB104
 * address: 0x603EB104   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603EB104(StateMethodExecuter *result)
{
  char *owner; // r1

  owner = (char *)FIELD_U32(result + (2) * 12, 0x4);
  if ( !owner )
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (4) * 12, 0x8), (StateBase *)&dword_60C99AA8);
  FIELD_U32(result + (2) * 12, 0x4) = owner - 1;
  if ( owner != (char *)36 )
  {
    if ( owner != (char *)1 )
      return result;
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (4) * 12, 0x8), (StateBase *)&dword_60C99AA8);
  }
  return (StateMethodExecuter *)sub_603EB3C0();
}
