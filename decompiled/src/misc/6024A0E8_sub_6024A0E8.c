/* sub_6024A0E8
 * address: 0x6024A0E8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024A0E8(Actor *a1)
{
  int result; // r0
  unsigned int settings1; // r1
  Actor *v4; // r1

  a1[79].field_10 = 1;
  result = 6340;
  settings1 = a1[79].settings1;
  if ( settings1 )
  {
    v4 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, settings1);
    if ( v4 )
      Actor__removeChild(a1, v4);
    a1[79].settings1 = 0;
    return 0;
  }
  return result;
}
