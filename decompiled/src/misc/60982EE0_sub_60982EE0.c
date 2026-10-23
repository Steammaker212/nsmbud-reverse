/* sub_60982EE0
 * address: 0x60982EE0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60982EE0(int a1, const char *a2, int a3)
{
  int *v6; // r0
  int *v7; // r6
  int result; // r0

  v6 = (int *)sub_60855BC8(40);
  v7 = v6;
  if ( v6 )
  {
    *v6 = (int)v6;
    v6[1] = (int)v6;
    sub_608649B0((int)(v6 + 2), a2);
    v7[9] = 0;
  }
  else
  {
    v7 = 0;
  }
  v7[9] = a3;
  result = *v7;
  *v7 = a1 + 20;
  FIELD_U32(result, 4) = FIELD_U32(a1, 24);
  **(_DWORD **)(a1 + 24) = result;
  FIELD_U32(a1, 24) = v7;
  return result;
}
