/* SE_SYS_CONTINUE_DONE_ref
 * address: 0x604815C0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CONTINUE_DONE_ref(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 3656);
  if ( v2 <= 18 )
  {
    FIELD_U32(a1, 3656) = v2 + 1;
    if ( v2 == 18 )
      sub_60478680((int)"SE_SYS_CONTINUE_DONE", 9);
  }
  result = (StateMethodExecuter *)*(unsigned __int8 *)(FIELD_U32(a1, 3552) + 16);
  if ( *(_BYTE *)(FIELD_U32(a1, 3552) + 16) )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60C9EE48);
  return result;
}
