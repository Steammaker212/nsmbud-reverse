/* sub_608B4DE4
 * address: 0x608B4DE4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B4DE4(unsigned int a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  v3 = 0;
  if ( a1 <= 5 )
    v3 = dword_60B33DA0[a1];
  if ( (dword_60C5AFD0 & v3) == v3 )
    return 1;
  return result;
}
