/* sub_6084F7AC
 * address: 0x6084F7AC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6084F7AC()
{
  int *result; // r0

  result = (int *)(unsigned __int8)dword_60CC7EF8;
  if ( (dword_60CC7EF8 & 1) == 0 )
  {
    sub_6084C7C0(&dword_60CC7EF0);
    sub_60000288();
    dword_60CC7EF8 = 1;
    return &dword_60CC7EF8;
  }
  return result;
}
