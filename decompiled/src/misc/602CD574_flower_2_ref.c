/* flower_2_ref
 * address: 0x602CD574   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall flower_2_ref(int a1)
{
  _DWORD **v2; // r5
  int v3; // r0
  int (__fastcall *v4)(int, _DWORD *); // r2
  int v5; // r0
  _DWORD v7[16]; // [sp+0h] [bp-40h] BYREF

  v2 = (_DWORD **)(a1 + 6320);
  v3 = **(_DWORD **)(a1 + 6320);
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = "flower_2";
  v5 = v4(v3, v7);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v2 + 108))(**v2, v5, v7);
  sub_60236DF4(858, v7, 0);
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  sub_602CF048(4.0);
  FIELD_U16(a1, 6550) = 0;
  FIELD_U16(a1, 6552) = 0;
  FIELD_U8(a1, 6584) = 1;
  return 6584;
}
