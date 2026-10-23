/* sub_60029C94
 * address: 0x60029C94   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60029C94(int a1)
{
  float v2; // s0
  int v3; // r0
  int v4; // r7
  int v5; // r6
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // t1

  FIELD_U32(a1, 120) = 0;
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_U32(a1, 80);
  if ( v2 >= FIELD_F32(dword_60CC6484, 116) )
  {
    if ( v3 == 1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v3 )
  {
LABEL_5:
    FIELD_U32(a1, 80) = v3 ^ 1;
    FIELD_U8(a1, 7433) = 1;
  }
LABEL_6:
  if ( FIELD_U8(a1, 7426) != 5 )
  {
    v4 = a1 + 7096;
    v5 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F748);
    v6 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 0);
    v8 = *(_DWORD *)(*(_DWORD *)v4 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v9 )
      v8 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = v5;
    FIELD_U8(a1, 7426) = 5;
  }
  FIELD_U16(a1, 7416) = 0;
  FIELD_U8(a1, 7427) = 0;
  v10 = FIELD_U8(a1, 7428);
  FIELD_U8(a1, 7428) = v10 + 1;
  return v10 + 1;
}
