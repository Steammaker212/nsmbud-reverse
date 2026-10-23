/* sub_6085B874
 * address: 0x6085B874   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085B874(int result, int a2)
{
  int v3; // r5
  int v4; // r6
  int *v5; // r1
  int v6; // r2

  v3 = result;
  while ( 1 )
  {
    v4 = FIELD_U32(v3, 4);
    if ( v4 == v3 )
      break;
    sub_6085C0E0(v4 + 16, a2, FIELD_U8(v4, 48) == 0);
    v5 = *(int **)(v4 + 4);
    v6 = *v5;
    *(_DWORD *)(*(_DWORD *)v4 + 4) = v5;
    *v5 = *(_DWORD *)v4;
    FIELD_U32(v6, 4) = v4;
    *(_DWORD *)v4 = v6;
    result = sub_60855BF0(v4);
  }
  return result;
}
