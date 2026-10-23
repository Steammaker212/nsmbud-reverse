/* sub_6020762C
 * address: 0x6020762C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020762C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD v5[4]; // [sp+8h] [bp-10h] BYREF

  FIELD_U32(a1, 236) = 0;
  ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, int *))loc_60185F9C)(
    a1,
    a1 + 328,
    0,
    15,
    5.0,
    FIELD_F32(a1, 344),
    FIELD_F32(a1, 344),
    15,
    &dword_60B3B974);
  v2 = *(_DWORD **)(a1 + 268);
  v3 = FIELD_U32(a1, 272);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "jumpA";
  return sub_60421938(v2, v3, (int)v5);
}
