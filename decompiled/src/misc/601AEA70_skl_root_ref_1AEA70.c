/* skl_root_ref_1AEA70
 * address: 0x601AEA70   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_1AEA70(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  int v10; // r0
  int (__fastcall *v11)(int, _DWORD *); // r2
  int v12; // r0
  int result; // r0
  _DWORD v14[16]; // [sp+0h] [bp-40h] BYREF

  FIELD_U32(a1, 552) ^= 1u;
  FIELD_U32(a1, 548) = sub_608336A8();
  FIELD_F32(a1, 556) = -FIELD_F32(a1, 556);
  FIELD_U32(a1, 560) = 1048576000;
  if ( FIELD_U8(a1, 600) != 1 )
  {
    sub_60421938(*(_DWORD **)(a1 + 372), FIELD_U32(a1, 380), (int)&unk_60C8A6A4);
    v2 = *(_DWORD **)(a1 + 372);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 0);
    v6 = *(_DWORD **)(a1 + 372);
    v7 = v6[3];
    v8 = v6[2];
    v9 = v6[17];
    if ( v8 > v9 )
      v7 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    FIELD_U8(a1, 600) = 1;
  }
  v10 = **(_DWORD **)(a1 + 372);
  v11 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v10 + 84);
  v14[0] = &sead__SafeStringBase__vtable;
  v14[1] = "skl_root";
  v12 = v11(v10, v14);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(***(_DWORD ***)(a1 + 372) + 108))(**(_DWORD **)(a1 + 372), v12, v14);
  result = sub_602372C0(a1 + 384, 904, v14, 1);
  if ( FIELD_S32(a1, 364) >= 0 )
  {
    sub_601E4F60(dword_60C8B13C);
    FIELD_U32(a1, 364) = -1;
    return -1;
  }
  return result;
}
