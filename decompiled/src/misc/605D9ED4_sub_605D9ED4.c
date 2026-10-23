/* sub_605D9ED4
 * address: 0x605D9ED4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605D9ED4(int a1)
{
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 8000) = 0;
  FIELD_U32(a1, 8004) = 0;
  FIELD_U32(a1, 8008) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 6292), &stru_60CB16D8);
}
