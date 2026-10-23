/* sub_605AFA20
 * address: 0x605AFA20   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605AFA20(int a1)
{
  int *v1; // r2
  float result; // s0

  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1130364928;
  v1 = dword_605AFA90;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v1 = &dword_605AFA90[1];
  result = *(float *)v1 + 256.0;
  FIELD_F32(a1, 516) = result;
  FIELD_F32(a1, 520) = result;
  FIELD_F32(a1, 524) = 80.0 + 0.0;
  FIELD_F32(a1, 528) = 80.0 + 0.0;
  return result;
}
