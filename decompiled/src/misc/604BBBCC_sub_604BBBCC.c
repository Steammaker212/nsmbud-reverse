/* sub_604BBBCC
 * address: 0x604BBBCC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_604BBBCC(int a1)
{
  _BOOL4 result; // r0

  result = sub_6040E44C(LevelInfo_instance);
  if ( !result )
  {
    StateMgr__changeState((StateMgr *)(a1 + 68), (StateBase *)&dword_60CA2698);
    FIELD_U32(a1, 3636) = 0;
    return 0;
  }
  return result;
}
