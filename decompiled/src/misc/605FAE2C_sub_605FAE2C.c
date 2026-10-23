/* sub_605FAE2C
 * address: 0x605FAE2C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605FAE2C(int a1)
{
  int *v1; // r1
  float result; // s0

  v1 = dword_605FAE4C;
  if ( (FIELD_U32(a1, 20) & 0xF00000) == 0x100000 )
    v1 = &dword_605FAE4C[1];
  result = *(float *)v1;
  FIELD_U32(a1, 116) = *v1;
  return result;
}
