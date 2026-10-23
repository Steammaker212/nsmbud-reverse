/* sub_60002B90
 * address: 0x60002B90   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60002B90(unsigned int a1, float a2)
{
  int *result; // r0

  result = 0;
  if ( a1 <= 4 )
  {
    dword_60C7B3E8 = 1 << a1;
    unk_60C7B3EC = LODWORD(a2);
    return &dword_60C7B3E8;
  }
  return result;
}
