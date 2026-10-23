/* sub_607180CC
 * address: 0x607180CC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607180CC(int a1, char a2)
{
  int *result; // r0
  int v3; // t1
  int v4; // r2
  int v5; // r2

  v3 = FIELD_U32(a1, 16268);
  result = (int *)(a1 + 16268);
  *((_BYTE *)result + v3 - 100) = a2;
  v4 = 50;
  if ( *result > 49 )
    v4 = -50;
  *((_BYTE *)result + v4 + *result - 100) = -1;
  v5 = *result + 1;
  if ( *result > 98 )
    v5 = 0;
  *result = v5;
  return result;
}
