/* sub_6015BD84
 * address: 0x6015BD84   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderBase *__fastcall sub_6015BD84(ColliderBase *a1)
{
  ColliderBase_ctor(a1);
  FIELD_U32(a1, 0x0).vtable = (int)&off_60BD4894;
  memset(&a1[1], 0, 40);
  return a1;
}
