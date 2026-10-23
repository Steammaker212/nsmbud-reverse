/* sub_608ACFA8
 * address: 0x608ACFA8   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608ACFA8(int a1)
{
  int *v1; // r1
  int *v3; // r2
  int v4; // r3

  v1 = *(int **)(a1 + 20);
  if ( v1 == (int *)(a1 + 16) )
    return 0;
  v3 = (int *)v1[1];
  v4 = *v3;
  *(_DWORD *)(*v1 + 4) = v3;
  *v3 = *v1;
  FIELD_U32(v4, 4) = v1;
  *v1 = v4;
  return v1 - 6;
}
