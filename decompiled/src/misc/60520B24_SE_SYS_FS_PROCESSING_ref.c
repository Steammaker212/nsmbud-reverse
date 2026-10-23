/* SE_SYS_FS_PROCESSING_ref
 * address: 0x60520B24   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_FS_PROCESSING_ref(int a1)
{
  int result; // r0

  sub_6047877C((int)"SE_SYS_FS_PROCESSING", 9);
  result = FIELD_U32(a1, 4316);
  if ( result >= 1 )
    FIELD_U32(a1, 4316) = --result;
  if ( FIELD_U32(dword_60CC6E04, 24) != 2 && result <= 0 )
  {
    StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA92CC);
    FIELD_U8(a1, 4314) = 1;
    return 4314;
  }
  return result;
}
