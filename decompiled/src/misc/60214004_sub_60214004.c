/* sub_60214004
 * address: 0x60214004   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60214004(int a1)
{
  int v2; // r0
  int v3; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 464);
  if ( v2 )
  {
    v3 = v2 - 1;
    FIELD_U32(a1, 464) = v3;
    if ( !v3 )
      FIELD_U8(a1, 370) = 1;
  }
  result = (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 112))(a1);
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8D184);
  return result;
}
