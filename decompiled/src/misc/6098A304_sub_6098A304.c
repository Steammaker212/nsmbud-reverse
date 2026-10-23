/* sub_6098A304
 * address: 0x6098A304   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098A304(_DWORD *a1, unsigned int a2)
{
  int *v3; // r2
  int v4; // r5
  int v5; // r6

  v3 = (int *)a1[2];
  v4 = a1[3];
  if ( a1[1] > a2 )
    v3 += a2;
  v5 = *v3;
  if ( v4 != *v3 )
  {
    sub_608502F4(a1[3], 0);
    FIELD_U32(v4, 44) = 0;
    a1[3] = v5;
  }
  return v5;
}
