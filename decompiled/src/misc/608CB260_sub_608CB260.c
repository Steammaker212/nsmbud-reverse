/* sub_608CB260
 * address: 0x608CB260   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB260(int a1, int a2)
{
  int *v2; // r4
  int *v3; // lr
  int v4; // r3
  int result; // r0
  int v6; // t1

  v2 = (int *)(a2 + 560);
  if ( a2 + 560 == a1 + 4 )
  {
    v4 = *v2;
  }
  else
  {
    v3 = *(int **)(a2 + 564);
    v4 = *v3;
    *(_DWORD *)(FIELD_U32(a2, 560) + 4) = v3;
    *v3 = FIELD_U32(a2, 560);
    FIELD_U32(v4, 4) = v2;
    FIELD_U32(a2, 560) = v4;
  }
  v6 = FIELD_U32(a1, 12);
  result = a1 + 12;
  *v2 = v6;
  FIELD_U32(v4, 4) = result;
  *(_DWORD *)(*(_DWORD *)result + 4) = v2;
  *(_DWORD *)result = v4;
  return result;
}
