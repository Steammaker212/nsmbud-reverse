/* sub_601FEE08
 * address: 0x601FEE08   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FEE08(int a1, int *a2)
{
  int result; // r0

  result = *a2;
  if ( *a2 == 1 )
    return sub_601A2D98(dword_60C89E18, (int)a2);
  return result;
}
