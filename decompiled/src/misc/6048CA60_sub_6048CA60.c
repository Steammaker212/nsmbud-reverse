/* sub_6048CA60
 * address: 0x6048CA60   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048CA60(int *a1)
{
  int *v2; // r7
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r1
  int *v7; // r7
  int v8; // r0
  int *v9; // r7
  int v10; // r0
  int result; // r0
  int *v12; // r7

  v2 = a1 + 11942;
  v3 = dword_60CC6E04;
  if ( a1[11942] != 2 )
  {
    v4 = 0;
    v5 = sub_60828E70(dword_60CC6E04, 0);
    v6 = *v2;
    if ( v5 < *v2 )
      goto LABEL_9;
  }
  v7 = a1 + 11943;
  if ( a1[11943] != 2 )
  {
    v4 = 1;
    v8 = sub_60828E70(v3, 1);
    v6 = *v7;
    if ( v8 < *v7 )
      goto LABEL_9;
  }
  v9 = a1 + 11944;
  if ( a1[11944] != 2 )
  {
    v4 = 2;
    v10 = sub_60828E70(v3, 2);
    v6 = *v9;
    if ( v10 < *v9 )
      goto LABEL_9;
  }
  v12 = a1 + 11945;
  result = a1[11945];
  if ( result != 2 )
  {
    v4 = 3;
    result = sub_60828E70(v3, 3);
    v6 = *v12;
    if ( result < *v12 )
    {
LABEL_9:
      a1[11946] = v6;
      a1[11947] = v4;
      return 47788;
    }
  }
  return result;
}
