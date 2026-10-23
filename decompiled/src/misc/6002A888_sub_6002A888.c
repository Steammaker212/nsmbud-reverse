/* sub_6002A888
 * address: 0x6002A888   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002A888(int a1)
{
  char v2; // r2
  int v3; // r0
  char *v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // r1
  unsigned int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  char v11; // r0
  int v12; // r7
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0

  FIELD_U32(a1, 120) = 0;
  FIELD_U8(a1, 7433) = 1;
  v2 = FIELD_U8(a1, 7430) + 1;
  FIELD_U8(a1, 7430) = v2;
  FIELD_U32(a1, 116) = 1153138688;
  v4 = (char *)(a1 + 7426);
  v3 = FIELD_U8(a1, 7426);
  v5 = *(_DWORD *)(v4 - 46);
  if ( (v2 & 0xFEu) < 2 )
  {
    if ( v3 != 4 )
    {
      v12 = a1 + 7096;
      sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F740);
      v13 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
      v14 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
      if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v14 )
        v13 += 4 * v14;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
      v15 = *(_DWORD *)(*(_DWORD *)v12 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v12 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v12 + 8) > v16 )
        v15 += 4 * v16;
      *(_DWORD *)(*(_DWORD *)v15 + 24) = v5;
      v11 = 4;
      goto LABEL_14;
    }
  }
  else if ( v3 != 3 )
  {
    v6 = a1 + 7096;
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F738);
    v7 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v8 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v8 )
      v7 += 4 * v8;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 0);
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    v10 = *(_DWORD *)(*(_DWORD *)v6 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v10 )
      v9 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v9 + 24) = v5;
    v11 = 3;
LABEL_14:
    *v4 = v11;
  }
  FIELD_U8(a1, 7427) = 0;
  return 7427;
}
