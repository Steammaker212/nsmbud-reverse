/* sub_600D0E0C
 * address: 0x600D0E0C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600D0E0C(int a1)
{
  float v1; // s2
  float result; // s0

  FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.975;
  v1 = FIELD_F32(a1, 124);
  if ( v1 > 0.0 )
    FIELD_F32(a1, 124) = v1 * 0.975;
  LODWORD(result) = (int)(float)((float)FIELD_S32(a1, 6784) * 0.9);
  FIELD_F32(a1, 6784) = result;
  return result;
}
