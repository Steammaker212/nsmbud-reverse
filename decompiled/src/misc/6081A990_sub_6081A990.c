/* sub_6081A990
 * address: 0x6081A990   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6081A990()
{
  int *result; // r0

  result = &dword_60CC6C20;
  if ( dword_60CC6C20 )
  {
    sead__TaskMgr__destroyTaskSync(FIELD_U32(dword_60CC6C20, 92), dword_60CC6C20);
    dword_60CC6C20 = 0;
    return &dword_60CC6C20;
  }
  return result;
}
