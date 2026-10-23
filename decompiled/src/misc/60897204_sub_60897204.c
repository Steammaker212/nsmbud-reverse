/* sub_60897204
 * address: 0x60897204   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60897204(int a1)
{
  int *v2; // r0
  int *v3; // r3
  int v4; // r4
  int *v5; // r1

  v2 = (int *)(a1 + 384);
  while ( 1 )
  {
    v5 = *(int **)(a1 + 388);
    if ( v5 == v2 )
      break;
    v3 = (int *)v5[1];
    v4 = *v3;
    *(_DWORD *)(*v5 + 4) = v3;
    *v3 = *v5;
    FIELD_U32(v4, 4) = v5;
    *v5 = v4;
  }
  sub_60835494(a1 + 8);
  return sub_60836614(a1 + 80);
}
