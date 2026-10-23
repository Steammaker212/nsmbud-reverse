/* sub_6002BE04
 * address: 0x6002BE04   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002BE04(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r6
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r7
  int v10; // r6
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C7F908 + 8))() )
  {
    if ( FIELD_U8(a1, 7426) != 5 )
    {
      v9 = a1 + 7096;
      v10 = FIELD_U32(a1, 7380);
      sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F748);
      v11 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
      v12 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v12 )
        v11 += 4 * v12;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
      v13 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v14 = *(_DWORD *)(*(_DWORD *)v9 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v9 + 8) > v14 )
        v13 += 4 * v14;
      *(_DWORD *)(*(_DWORD *)v13 + 24) = v10;
      FIELD_U8(a1, 7426) = 5;
    }
    v15 = FIELD_U32(a1, 80);
    if ( FIELD_F32(a1, 108) >= FIELD_F32(dword_60CC6484, 116) )
    {
      if ( v15 == 1 )
      {
LABEL_19:
        FIELD_U8(a1, 7433) = 1;
        goto LABEL_20;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_19;
    }
    FIELD_U32(a1, 80) = v15 ^ 1;
    goto LABEL_19;
  }
  FIELD_U8(a1, 7433) = 0;
  if ( FIELD_U8(a1, 7426) != 15 )
  {
    v3 = a1 + 7096;
    v4 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F798);
    v5 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v6 )
      v5 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v5 + 4), 0);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
      v7 += 4 * v8;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = v4;
    FIELD_U8(a1, 7426) = 15;
  }
LABEL_20:
  FIELD_U8(a1, 7427) = 0;
  return 7427;
}
