/* sub_601F8124
 * address: 0x601F8124   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F8124(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(dword_60C8996C, 1385);
  if ( FIELD_U8(dword_60C8996C, 1385) )
  {
    result = (StateMethodExecuter *)sub_60185D08((Actor *)a1);
    if ( result == (StateMethodExecuter *)1 )
      return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&unk_60C8BA90);
  }
  return result;
}
