/* SE_PLY_BREAK_FREE_YOSHI_ref
 * address: 0x607C7EA0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_BREAK_FREE_YOSHI_ref(int a1)
{
  int v2; // r2
  unsigned int v3; // r0
  _DWORD v5[2]; // [sp+4h] [bp-1Ch] BYREF
  char v6; // [sp+Ch] [bp-14h]

  v2 = FIELD_U32(a1, 1228) | 0x400;
  v3 = FIELD_U32(a1, 1204) | 0x82002000;
  FIELD_U32(a1, 1224) |= 0x43C0u;
  FIELD_U32(a1, 1228) = v2;
  FIELD_U32(a1, 1204) = v3;
  FIELD_U32(a1, 12048) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 9944) = 30;
  sub_6078667C((_DWORD *)(a1 + 688), 6);
  FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
  FIELD_F32(a1, 88) = -flt_60B0A898[FIELD_U32(a1, 80)];
  v5[0] = 1077306982;
  v5[1] = 0;
  v6 = 1;
  ((void (__fastcall *)(int, _DWORD *))loc_607AF910)(a1, v5);
  return sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_BREAK_FREE_YOSHI", 0, 0);
}
