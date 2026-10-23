/* sub_608B0CB8
 * address: 0x608B0CB8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0CB8(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int *v3; // r12
  int result; // r0
  bool v5; // cc
  int *v6; // r2
  int v7; // r0
  int v8; // r2

  v3 = *(unsigned int **)(a1 + 8);
  result = 0;
  v5 = v3 != 0;
  if ( v3 )
    v5 = *v3 > a3;
  if ( v5 )
  {
    v6 = (int *)((char *)v3 + v3[2 * a3 + 2]);
    if ( v6 )
    {
      v7 = *v6;
      v8 = v6[1];
      *a2 = v7;
      a2[1] = v8;
      return 1;
    }
  }
  return result;
}
