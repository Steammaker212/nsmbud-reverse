/* sub_6084E0B8
 * address: 0x6084E0B8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6084E0B8()
{
  int *result; // r0

  result = (int *)(unsigned __int8)dword_60CC7EEC;
  if ( (dword_60CC7EEC & 1) == 0 )
  {
    sub_6084C494(&dword_60CC7EE4);
    dword_60CC7EE4 = (int)off_60C344D4;
    sub_60000288();
    dword_60CC7EEC = 1;
    return &dword_60CC7EEC;
  }
  return result;
}
