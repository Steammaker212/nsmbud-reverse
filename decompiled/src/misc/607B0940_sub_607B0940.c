/* sub_607B0940
 * address: 0x607B0940   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B0940(int a1)
{
  int v2; // r1
  int result; // r0

  v2 = FIELD_U32(a1, 1224);
  FIELD_U32(a1, 1204) |= 0x40000000u;
  FIELD_U32(a1, 1224) = v2 | 0x4FC4;
  FIELD_U32(a1, 1228) |= 0x4000u;
  FIELD_U32(a1, 12048) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 132) = 0;
  result = FIELD_U32(a1, 9936);
  switch ( result )
  {
    case 2:
      goto LABEL_7;
    case 1:
      ((void (__fastcall *)(int, float, float))loc_6075F54C)(a1, FIELD_F32(a1, 7116), 10.0);
LABEL_7:
      PlayerBase_dispatchVirtual3(a1 + 11356, 124, 0.0);
      result = sub_60773F3C(a1, FIELD_U32(a1, 80));
      FIELD_U32(a1, 160) = result;
      return result;
    case 0:
      ((void (__fastcall *)(int, _DWORD))loc_607AF910)(a1, 0);
      return sub_60774A4C(a1);
  }
  return result;
}
