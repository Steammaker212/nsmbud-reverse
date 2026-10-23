/* sub_605C7248
 * address: 0x605C7248   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605C7248(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_S8(a1, 2940);
  if ( (unsigned __int8)v2 <= 3u )
  {
    if ( *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32)
      && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << v2)) != 0 )
    {
      result = (StateMethodExecuter *)sub_607A5530();
      if ( result != (StateMethodExecuter *)1 )
        return result;
    }
    else
    {
      FIELD_U8(a1, 2940) = -1;
    }
  }
  return StateMgr__changeState((StateMgr *)(a1 + 1024), &stru_60CB0B44);
}
