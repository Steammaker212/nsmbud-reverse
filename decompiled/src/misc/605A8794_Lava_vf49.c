/* Lava_vf49
 * address: 0x605A8794   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall Lava_vf49(int a1)
{
  int *v1; // r2
  float result; // s0

  v1 = dword_605A87B0;
  if ( (FIELD_U32(a1, 20) & 0x400) != 0 )
    v1 = &dword_605A87B0[1];
  result = *(float *)v1;
  FIELD_U32(a1, 116) = *v1;
  return result;
}
