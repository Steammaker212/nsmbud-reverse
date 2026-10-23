/* sub_6036FC38
 * address: 0x6036FC38   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036FC38(char *a1)
{
  SE_OBJ_POLTERGEIST_CRASH_ref((int)a1, 0);
  Enemy__collisionStar((int)a1);
  sub_602A7CEC(a1);
  return 1;
}
