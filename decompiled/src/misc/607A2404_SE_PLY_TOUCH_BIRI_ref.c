/* SE_PLY_TOUCH_BIRI_ref
 * address: 0x607A2404   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_PLY_TOUCH_BIRI_ref(int a1)
{
  int *v2; // r0

  sub_60773630(a1, 47, 0);
  v2 = sub_60002B90(FIELD_S8(a1, 84), unk_60C263E8);
  sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_TOUCH_BIRI", 0, (int)v2);
  PlayerBase_dispatchVirtual3(a1 + 11356, 82, 0.0);
  FIELD_U32(a1, 9944) = 60;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 1);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 1204) |= 0x20000u;
  return sub_6078667C((_DWORD *)(a1 + 688), 1);
}
