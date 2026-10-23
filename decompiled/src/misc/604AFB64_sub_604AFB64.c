/* sub_604AFB64
 * address: 0x604AFB64   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AFB64(int a1)
{
  int result; // r0

  sub_607FCB00(dword_60CC6484);
  FIELD_U8(a1, 38105) = 1;
  result = AreaTask_intance;
  FIELD_U8(AreaTask_intance, 1874) = 0;
  return result;
}
