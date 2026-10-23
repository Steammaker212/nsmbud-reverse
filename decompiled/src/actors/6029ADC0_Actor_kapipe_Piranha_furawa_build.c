/* Actor_kapipe_Piranha_furawa_build
 * address: 0x6029ADC0   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int Actor_kapipe_Piranha_furawa_build()
{
  int v0; // r5

  v0 = operator_new(0x1D50u);
  sub_60295C50();
  *(_DWORD *)v0 = &off_60BE0D5C;
  FIELD_U16(v0, 7500) = 3;
  sub_60295C70((_DWORD *)v0);
  FIELD_U32(v0, 572) = 0;
  FIELD_U32(v0, 576) = 1107296256;
  FIELD_U32(v0, 580) = 0;
  FIELD_U32(v0, 492) = 0;
  FIELD_U32(v0, 496) = 1098907648;
  FIELD_U32(v0, 164) = 0;
  FIELD_U32(v0, 6744) = 0;
  return v0;
}
