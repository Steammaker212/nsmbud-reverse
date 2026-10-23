/* sub_605FA7D0
 * address: 0x605FA7D0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605FA7D0(int a1)
{
  int *v1; // r1
  float result; // s0

  v1 = dword_605FA7F0;
  if ( (FIELD_U32(a1, 20) & 0xF0000000) == 0x10000000 )
    v1 = &dword_605FA7F0[1];
  result = *(float *)v1;
  FIELD_U32(a1, 116) = *v1;
  return result;
}
