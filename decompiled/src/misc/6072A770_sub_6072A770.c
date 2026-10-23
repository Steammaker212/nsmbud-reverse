/* sub_6072A770
 * address: 0x6072A770   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6072A770(int a1, unsigned int a2, int a3)
{
  int *v3; // r0
  int v4; // t1
  int v5; // r3
  int *result; // r0

  v4 = FIELD_U32(a1, 2332);
  v3 = (int *)(a1 + 2332);
  v5 = v4 | (1 << a2);
  if ( a2 >= 3 )
    a2 = 0;
  *v3 = v5;
  result = &v3[a2];
  result[4] = a3;
  result[1] = 1;
  return result;
}
