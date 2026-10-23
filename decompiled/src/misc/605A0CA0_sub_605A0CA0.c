/* sub_605A0CA0
 * address: 0x605A0CA0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_605A0CA0(float *result)
{
  float v1; // s0

  v1 = result[31];
  if ( v1 < 2.0 )
    result[31] = v1 - result[1579];
  if ( result[28] >= (float)(result[1577] + -16.0) )
    return (float *)(*(int (__fastcall **)(float *, void *))(*(_DWORD *)result + 192))(result, &unk_60CAFDD4);
  return result;
}
