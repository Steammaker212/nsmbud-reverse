/* sub_605514B8
 * address: 0x605514B8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605514B8(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)FIELD_U8(a1, 18882);
  if ( !result )
  {
    sub_60502548(a1 + 17840);
    FIELD_U16(a1, 18892) = 0;
    sub_6047EABC((_DWORD *)(a1 + 17880));
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&unk_60CAD0F8);
  }
  return result;
}
