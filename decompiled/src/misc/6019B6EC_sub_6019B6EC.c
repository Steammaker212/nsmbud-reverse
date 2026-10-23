/* sub_6019B6EC
 * address: 0x6019B6EC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

double __fastcall sub_6019B6EC(int a1)
{
  unsigned int v1; // r0
  double result; // d0

  v1 = a1 - 2;
  if ( v1 > 3 )
    return 0.0;
  *(_QWORD *)&result = dword_60AF23E4[v1];
  return result;
}
