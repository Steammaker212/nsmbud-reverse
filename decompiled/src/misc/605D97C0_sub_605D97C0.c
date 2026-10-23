/* sub_605D97C0
 * address: 0x605D97C0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D97C0(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_605DBD64(a1);
  if ( !result )
  {
    result = *(StateMethodExecuter **)(a1 + 6260);
    if ( ((unsigned int)result & 0x10000040) == 0 )
    {
      if ( (FIELD_U8(a1, 6267) & 1) != 0 )
        sub_605E0870(a1, &dword_60CB18A0, 0);
      FIELD_U32(a1, 8000) = 0;
      FIELD_U32(a1, 8004) = 0;
      FIELD_U32(a1, 8008) = 0;
      return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB1720);
    }
  }
  return result;
}
