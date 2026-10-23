/* sub_605CE0D4
 * address: 0x605CE0D4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605CE0D4(int a1)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF

  v3 = sub_6072A6DC(EventMgr__instance, FIELD_U8(a1, 539), FIELD_U8(a1, 540));
  return sub_605CDAD4(a1 + 6120, &v3);
}
