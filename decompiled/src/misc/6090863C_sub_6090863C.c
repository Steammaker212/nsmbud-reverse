/* sub_6090863C
 * address: 0x6090863C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090863C(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 120) | 4;
  if ( result != 4 )
  {
    nn__os__WaitThread(FIELD_U32(a1, 128));
    FIELD_U32(a1, 120) = 4;
    return 4;
  }
  return result;
}
