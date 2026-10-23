/* sub_606DEB9C
 * address: 0x606DEB9C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606DEB9C(float *a1)
{
  float *v1; // r4
  float v2; // s16
  float v3; // s0

  v1 = a1 + 1527;
  v2 = FIELD_F32(dword_60CC6484, 116);
  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 240))(a1);
  if ( v2 > *v1 )
    return *v1 - v2;
  if ( v2 >= v3 )
    return 0.0;
  return v3 - v2;
}
