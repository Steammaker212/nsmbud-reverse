/* skl_root_ref_2026B4
 * address: 0x602026B4   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_2026B4(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, _DWORD *); // r2
  int v4; // r0
  int v5; // r3
  float v6; // s2
  _DWORD v8[16]; // [sp+0h] [bp-40h] BYREF

  v2 = **(_DWORD **)(a1 + 372);
  v3 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v2 + 84);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "skl_root";
  v4 = v3(v2, v8);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 372) + 108))(**(_DWORD **)(a1 + 372), v4, v8);
  ((void (__fastcall *)(int, _DWORD *, int, int))sub_60237454)(a1 + 380, v8, 1, v5);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  v6 = FIELD_F32(a1, 128) + -0.1;
  FIELD_F32(a1, 128) = v6;
  FIELD_F32(a1, 132) = FIELD_F32(a1, 132) + -0.1;
  FIELD_F32(a1, 136) = FIELD_F32(a1, 136) + -0.1;
  if ( v6 <= 0.0 )
  {
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 136) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U8(a1, 216) |= 2u;
    FIELD_U8(a1, 19) = 1;
  }
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
}
