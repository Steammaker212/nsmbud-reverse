/* sub_608B44A8
 * address: 0x608B44A8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B44A8(int *a1)
{
  int v2; // r0
  _BOOL4 v3; // r0
  int v4; // r7
  int *v5; // r6
  _BOOL4 v6; // r4
  int i; // r5
  _BOOL4 v8; // r0

  v2 = *a1;
  if ( !v2 )
    return 0;
  v3 = sub_608A9984(v2);
  v4 = a1[3];
  v5 = a1 + 2;
  v6 = v3;
  for ( i = 1; (int *)v4 != v5; i &= v8 )
  {
    v8 = sub_608A9984(FIELD_U32(v4, 12));
    v4 = FIELD_U32(v4, 4);
  }
  return v6 & i;
}
