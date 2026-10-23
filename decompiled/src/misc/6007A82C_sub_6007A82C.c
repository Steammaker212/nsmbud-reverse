/* sub_6007A82C
 * address: 0x6007A82C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6007A82C(int a1)
{
  float v1; // s2
  _BOOL4 result; // r0
  float v3; // s0

  v1 = FIELD_F32(a1, 6204);
  result = 1;
  v3 = v1 + -48.0;
  if ( **(float **)(dword_60CBF354 + 32) < (float)(v1 + -48.0)
    && **(float **)(dword_60CBF354 + 36) < v3
    && **(float **)(dword_60CBF354 + 40) < v3 )
  {
    return **(float **)(dword_60CBF354 + 44) >= v3;
  }
  return result;
}
