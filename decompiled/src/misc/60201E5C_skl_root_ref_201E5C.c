/* skl_root_ref_201E5C
 * address: 0x60201E5C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_201E5C(int a1)
{
  int v2; // r0
  int (__fastcall *v3)(int, int *); // r2
  int v4; // r0
  int v5; // r3
  float v6; // s0
  float v7; // s6
  int a5[16]; // [sp+0h] [bp-40h] BYREF

  v2 = **(_DWORD **)(a1 + 372);
  v3 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 84);
  a5[0] = (int)&sead__SafeStringBase__vtable;
  a5[1] = (int)"skl_root";
  v4 = v3(v2, a5);
  (*(void (__fastcall **)(_DWORD, int, int *))(***(_DWORD ***)(a1 + 372) + 108))(**(_DWORD **)(a1 + 372), v4, a5);
  ((void (__fastcall *)(int, int *, int, int))sub_60237454)(a1 + 380, a5, 1, v5);
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  v6 = FIELD_F32(a1, 128) + 0.1;
  FIELD_F32(a1, 128) = v6;
  FIELD_F32(a1, 132) = FIELD_F32(a1, 132) + 0.1;
  FIELD_F32(a1, 136) = FIELD_F32(a1, 136) + 0.1;
  v7 = FIELD_F32(a1, 504);
  if ( FIELD_F32(a1, 84) > (float)(v7 + -60.0) )
    FIELD_F32(a1, 84) = v7 + -60.0;
  if ( v6 >= 3.0 )
  {
    FIELD_U32(a1, 128) = 1077936128;
    FIELD_U32(a1, 132) = 1077936128;
    FIELD_U32(a1, 136) = 1077936128;
    FIELD_U32(a1, 120) = 0;
    StateMgr__changeState((StateMgr *)(a1 + 284), &stru_60C8C418);
  }
  return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 372) + 68))(**(_DWORD **)(a1 + 372), a1 + 128);
}
