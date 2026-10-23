/* sub_609A8080
 * address: 0x609A8080   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A8080(int a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r4
  int v5; // r5
  int v6; // r3
  int v7; // r3

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = FIELD_U32(a1, 176);
  if ( v6 == 3 )
  {
    v7 = 1;
  }
  else
  {
    if ( v6 != 4 )
      return MultiFilterReduce_ref(a1, a2, a3, v6);
    v7 = 2;
  }
  MultiFilterReduce_ref(a1, a2, a3, v7);
  a1 = v3;
  a2 = v5;
  a3 = v4;
  v6 = 2;
  return MultiFilterReduce_ref(a1, a2, a3, v6);
}
