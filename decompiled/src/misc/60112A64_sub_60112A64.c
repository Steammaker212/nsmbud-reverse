/* sub_60112A64
 * address: 0x60112A64   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60112A64(int a1)
{
  int v2; // r5
  int v3; // r2
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r1
  const char *v7; // r2
  int *v8; // r1
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int (__fastcall ***v15)(_DWORD, int *); // r5
  char v16; // r12
  int v17; // r0
  _DWORD v19[6]; // [sp+0h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = (*(int (**)(void))(dword_60C86B04 + 8))();
  v5 = a1 + 7100;
  v4 = *(_DWORD **)(a1 + 7100);
  v6 = FIELD_U32(a1, 7096);
  v19[0] = &sead__SafeStringBase__vtable;
  if ( v2 == v3 )
    v7 = "jc_delight";
  else
    v7 = "jcm_delight";
  v19[1] = v7;
  sub_60421938(v4, v6, (int)v19);
  v8 = *(int **)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += v9;
  v10 = *v8;
  FIELD_U32(v10, 20) = 0;
  FIELD_U32(v10, 28) |= 2u;
  v11 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v12 )
    v11 += 4 * v12;
  *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
  v13 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v14 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v14 )
    v13 += 4 * v14;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
  v15 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 7244);
  if ( ((unsigned int)&dword_60C86B30 & ~(1611738000 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v15 )
  {
    v17 = (**v15)(v15, &dword_60C86B2C);
    if ( v17 )
      v17 = (int)v15;
  }
  else
  {
    v17 = 0;
  }
  jcm_delight_ref(v17);
  sub_60813578(a1 + 6332, "mVoiceLabel");
  sub_60813430(a1 + 6332, "SE_VOC_JR_PROV2", 0);
  FIELD_U32(a1, 7092) = 16779445;
  FIELD_U32(a1, 7648) = 1;
  return 7648;
}
