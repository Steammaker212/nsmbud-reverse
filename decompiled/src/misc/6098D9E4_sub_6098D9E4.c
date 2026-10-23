/* sub_6098D9E4
 * address: 0x6098D9E4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6098D9E4(int *result)
{
  int *v1; // r4

  v1 = result;
  if ( *result )
  {
    sub_609029B4(sead__ResourceMgr__sInstance, *result);
    *v1 = 0;
    return 0;
  }
  return result;
}
