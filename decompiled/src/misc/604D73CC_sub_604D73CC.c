/* sub_604D73CC
 * address: 0x604D73CC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D73CC(int a1)
{
  int result; // r0

  if ( SE_SYS_BTN_EDIT_START_ref() == 1 )
  {
    *(_BYTE *)(FIELD_U32(a1, 3628) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3632) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 3636) + 64) &= ~1u;
    FIELD_U8(a1, 4694) = 0;
    return 4694;
  }
  else
  {
    result = sub_60502D80(a1 + 3640);
    if ( !result )
    {
      result = FIELD_U8(a1, 4686);
      if ( !FIELD_U8(a1, 4686) )
      {
        *(_BYTE *)(FIELD_U32(a1, 3628) + 64) &= ~1u;
        *(_BYTE *)(FIELD_U32(a1, 3632) + 64) &= ~1u;
        *(_BYTE *)(FIELD_U32(a1, 3636) + 64) &= ~1u;
        FIELD_U8(a1, 4694) = 0;
        return (int)StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60CA3FD8);
      }
    }
  }
  return result;
}
