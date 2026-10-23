/* nn__g3d__SkeletalAnimObj__Calculate
 * address: 0x60878630   size: 100   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall nn__g3d__SkeletalAnimObj__Calculate(float *a1)
{
  float *result; // r0

  result = *((float **)a1 + 1);
  if ( a1[11] != *result )
  {
    ((void (__fastcall *)(char *))*(&off_60C5A858
                                  + 2
                                  * ((*((_DWORD *)a1 + 20) >> 5) & 1
                                   | (*(_DWORD *)(*((_DWORD *)a1 + 17) + 72) >> 11) & 0xE)))(
      (char *)a1
    + ((int)*(&off_60C5A858
            + 2 * ((*((_DWORD *)a1 + 20) >> 5) & 1 | (*(_DWORD *)(*((_DWORD *)a1 + 17) + 72) >> 11) & 0xE)
            + 1) >> 1));
    result = **((float ***)a1 + 1);
    *((_DWORD *)a1 + 11) = result;
  }
  return result;
}
