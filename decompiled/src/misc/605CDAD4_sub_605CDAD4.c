/* sub_605CDAD4
 * address: 0x605CDAD4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CDAD4(int a1, _QWORD *a2)
{
  StateMethodExecuter *result; // r0

  FIELD_U8(a1, 93) = FIELD_U8(a1, 92);
  FIELD_U64(a1, 48) = *a2;
  FIELD_U8(a1, 95) = 0;
  FIELD_U8(a1, 102) = 0;
  result = StateMgr__execute((StateMgr *)(a1 + 20));
  FIELD_U8(a1, 92) = 0;
  FIELD_U8(a1, 101) = 0;
  return result;
}
