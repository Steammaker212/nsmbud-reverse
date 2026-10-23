/* sub_6072A794
 * address: 0x6072A794   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072A794(int a1, unsigned int a2, int *a3)
{
  int result; // r0
  int v4; // r1

  if ( a2 >= 0x40 )
    a2 = 0;
  result = a1 + 24 * a2;
  FIELD_U32(result, 800) = a3[2];
  FIELD_U8(result, 808) = *((_BYTE *)a3 + 16);
  v4 = *a3;
  FIELD_U32(result, 796) = a3[1];
  FIELD_U32(result, 792) = v4;
  FIELD_U32(result, 804) = a3[3];
  FIELD_U8(result, 809) = 1;
  return result;
}
