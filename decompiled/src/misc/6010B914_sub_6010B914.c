/* sub_6010B914
 * address: 0x6010B914   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6010B914(_DWORD *a1)
{
  int *v1; // r2
  int v2; // r1
  float result; // s0

  if ( !a1[80] )
  {
    v1 = &dword_6010B958;
    LOWORD(v2) = 0;
    if ( a1[20] == 1 )
      v1 = &dword_6010B95C;
    HIWORD(v2) = 16736;
    result = *(float *)v1;
    a1[76] = *v1;
    a1[77] = v2;
    a1[78] = 1099956224;
    a1[79] = v2;
  }
  return result;
}
