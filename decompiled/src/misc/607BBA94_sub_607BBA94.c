/* sub_607BBA94
 * address: 0x607BBA94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BBA94(int a1, float a2, float a3)
{
  int v6; // r5

  v6 = 0;
  if ( (FIELD_U8(a1, 6902) & 4) != 0 && sub_607BBAF0(a1) == 1 )
  {
    v6 = 1;
    FIELD_F32(a1, 124) = a2;
    FIELD_F32(a1, 88) = a3;
    FIELD_U32(a1, 12408) = 20;
  }
  return v6;
}
