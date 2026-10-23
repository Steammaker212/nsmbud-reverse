/* sub_60663A0C
 * address: 0x60663A0C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60663A0C(_DWORD *a1)
{
  int *v1; // r2
  int v2; // r1
  int v3; // s0
  int *result; // r0

  v1 = dword_60663A44;
  v2 = 2;
  if ( !a1[1807] )
  {
    v1 = &dword_60663A44[1];
    v2 = 3;
  }
  v3 = *v1;
  a1[31] = *v1;
  a1[20] = v2;
  result = a1 + 1817;
  *result = v3;
  return result;
}
