/* sub_60029108
 * address: 0x60029108   size: 624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60029108(int a1)
{
  _BYTE *v2; // r7
  _DWORD *v3; // r6
  int v4; // r5
  int v5; // r0
  bool v6; // zf
  int v7; // r5
  int v8; // r8
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r5
  __int16 v14; // r1
  int v15; // r5
  _BYTE *v16; // r5
  int v17; // r5
  int v18; // r0
  int v19; // r5
  int v20; // r0

  v2 = (_BYTE *)(a1 + 7426);
  v3 = (_DWORD *)(a1 + 6096);
  if ( FIELD_U8(a1, 7426) != 1 )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    v5 = (*(int (**)(void))(dword_60C7F8A8 + 8))();
    v6 = v4 == v5;
    if ( v4 != v5 )
      v6 = *v2 == 0;
    if ( !v6 )
    {
      v7 = a1 + 7096;
      v8 = FIELD_U32(a1, 7380);
      sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F720);
      v9 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
      v10 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v10 )
        v9 += 4 * v10;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 1);
      v11 = *(_DWORD *)(*(_DWORD *)v7 + 12);
      v12 = *(_DWORD *)(*(_DWORD *)v7 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v12 )
        v11 += 4 * v12;
      *(_DWORD *)(*(_DWORD *)v11 + 24) = v8;
      *v2 = 0;
    }
  }
  v13 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
  if ( v13 == (*(int (**)(void))(dword_60C7F868 + 8))() )
  {
    FIELD_U32(a1, 7092) = 1;
    v14 = 15;
LABEL_21:
    FIELD_U16(a1, 7412) = v14;
    goto LABEL_22;
  }
  v15 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
  if ( v15 != (*(int (**)(void))(dword_60C7F8A8 + 8))() )
  {
    v17 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
    if ( v17 == (*(int (**)(void))(dword_60C7F808 + 8))() )
    {
      v14 = 15;
      v18 = 0;
    }
    else
    {
      v19 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v3 + 8))(*v3);
      v20 = (*(int (**)(void))(dword_60C7FB60 + 8))();
      v14 = 75;
      if ( v19 != v20 )
        goto LABEL_21;
      v14 = 45;
      v18 = 4;
    }
    FIELD_U32(a1, 7092) = v18;
    goto LABEL_21;
  }
  FIELD_U32(a1, 7092) = 2;
  FIELD_U16(a1, 7412) = 30;
  if ( FIELD_U8(a1, 7430) == 1 )
  {
    FIELD_U8(a1, 7441) = (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) != 0;
    v16 = (_BYTE *)(a1 + 7441);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) )
    {
      *v16 = 1;
    }
    else if ( FIELD_U8(a1, 7435) )
    {
      *v16 = 0;
    }
  }
LABEL_22:
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return 0;
}
