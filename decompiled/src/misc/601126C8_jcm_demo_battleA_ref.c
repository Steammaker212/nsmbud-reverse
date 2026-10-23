/* jcm_demo_battleA_ref
 * address: 0x601126C8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall jcm_demo_battleA_ref(int a1)
{
  _DWORD *v1; // r0
  int v2; // r4
  int v3; // r1
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r4
  char v12; // r12
  _DWORD v13[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1 + 7100;
  v1 = *(_DWORD **)(a1 + 7100);
  v3 = *(_DWORD *)(v2 - 4);
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = "jcm_demo_battleA";
  sub_60421938(v1, v3, (int)v13);
  v4 = *(int **)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += v5;
  v6 = *v4;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  v7 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v8 )
    v7 += 4 * v8;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
  v9 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
    v9 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
  FIELD_U8(v2, 164) = 0;
  FIELD_U32(v2, 548) = 1;
  v11 = FIELD_U32(v2, 144);
  if ( ((unsigned int)&dword_60C86B30 & ~(1611736996 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v11 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C86B2C) == 1 )
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v11 + 192))(v11, &dword_60C86BE4);
  }
}
