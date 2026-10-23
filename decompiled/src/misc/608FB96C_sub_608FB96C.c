/* sub_608FB96C
 * address: 0x608FB96C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FB96C(int result)
{
  int v1; // r4

  if ( (FIELD_U8(result, 120) & 1) != 0 )
  {
    v1 = result + 84;
    sead__CriticalSection__lock(result + 84);
    return sead__CriticalSection__unlock(v1);
  }
  return result;
}
