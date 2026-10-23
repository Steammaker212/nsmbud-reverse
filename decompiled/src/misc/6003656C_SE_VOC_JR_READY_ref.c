/* SE_VOC_JR_READY_ref
 * address: 0x6003656C   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_JR_READY_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  int v5; // r6
  unsigned int v6; // r3
  int v7; // r1
  int v8; // r1
  int *v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  _DWORD *v16; // r0
  int v17; // r5
  _DWORD *v18; // r1
  unsigned int v19; // r2
  unsigned int v20; // r0
  int v21; // r1
  _DWORD *v22; // r1
  unsigned int v23; // r0
  _DWORD v25[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 7772);
  v2 = FIELD_U32(a1, 7772);
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      v5 = a1 + 7100;
      v4 = *(_DWORD **)(a1 + 7100);
      v6 = v4[17];
      v7 = v4[3];
      if ( v4[2] > v6 )
        v7 += 4 * v6;
      if ( (*(_BYTE *)(*(_DWORD *)v7 + 28) & 0x10) != 0 )
      {
        v8 = FIELD_U32(a1, 7096);
        v25[0] = &sead__SafeStringBase__vtable;
        v25[1] = "jc_demo_W7_punch";
        sub_60421938(v4, v8, (int)v25);
        v9 = *(int **)(*(_DWORD *)v5 + 12);
        v10 = *(_DWORD *)(*(_DWORD *)v5 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v10 )
          v9 += v10;
        v11 = *v9;
        FIELD_U32(v11, 20) = 0;
        FIELD_U32(v11, 28) |= 2u;
        v12 = *(_DWORD *)(*(_DWORD *)v5 + 12);
        v13 = *(_DWORD *)(*(_DWORD *)v5 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v13 )
          v12 += 4 * v13;
        *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
        v14 = *(_DWORD *)(*(_DWORD *)v5 + 12);
        v15 = *(_DWORD *)(*(_DWORD *)v5 + 68);
        if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v15 )
          v14 += 4 * v15;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v14 + 4), 0);
        (*(void (__fastcall **)(_DWORD, int *))(**(_DWORD **)(a1 + 7912) + 192))(
          FIELD_U32(a1, 7912),
          &dword_60CB8454);
        sub_600D3F14(FIELD_U32(a1, 7916));
        PlayerLookTargetList_add(PlayerLookTargetList_instance, a1 + 6644);
        *v3 = 2;
      }
    }
    goto LABEL_24;
  }
  if ( *(_BYTE *)(FIELD_U32(a1, 7912) + 7672) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8001C);
  v17 = a1 + 7100;
  v16 = *(_DWORD **)(a1 + 7100);
  v18 = (_DWORD *)v16[3];
  v19 = v16[2];
  v20 = v16[17];
  if ( v19 > v20 )
    v18 += v20;
  if ( sub_60418548(*v18 + 4) )
  {
    sub_60813430(a1 + 6332, "SE_VOC_JR_READY", 0);
    LOWORD(v21) = 3285;
LABEL_23:
    HIWORD(v21) = 256;
    FIELD_U32(a1, 7092) = v21;
    goto LABEL_24;
  }
  v22 = *(_DWORD **)(*(_DWORD *)v17 + 12);
  v23 = *(_DWORD *)(*(_DWORD *)v17 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v17 + 8) > v23 )
    v22 += v23;
  if ( sub_60418548(*v22 + 4) )
  {
    sub_60813430(a1 + 6332, "SE_VOC_JR_GO", 0);
    LOWORD(v21) = 2231;
    goto LABEL_23;
  }
LABEL_24:
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1068))(a1);
  return sub_600CE584(a1);
}
