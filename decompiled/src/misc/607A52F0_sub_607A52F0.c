/* sub_607A52F0
 * address: 0x607A52F0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607A52F0(int a1)
{
  int v1; // r1

  v1 = FIELD_U32(a1, 1320);
  switch ( v1 )
  {
    case 0:
      return 20.0;
    case 4:
      return FIELD_F32(a1, 1244) + 8.0;
    case 3:
      return 12.0;
  }
  return FIELD_F32(a1, 1244);
}
