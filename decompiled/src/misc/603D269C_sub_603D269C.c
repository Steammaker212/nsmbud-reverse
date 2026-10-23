/* sub_603D269C
 * address: 0x603D269C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D269C(int a1)
{
  int Area; // r0

  FIELD_U8(a1, 537) = 0;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  LevelArea_getLocation(Area, (float *)(a1 + 648), (unsigned __int8)(FIELD_U32(a1, 20) >> 12));
  return 1;
}
