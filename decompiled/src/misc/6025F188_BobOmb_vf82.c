/* BobOmb_vf82
 * address: 0x6025F188   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf82(int a1, int a2, int a3)
{
  _BOOL4 v4; // r1
  int v5; // s0
  __int16 v6; // r2
  int v7; // r6

  v4 = *(float *)(FIELD_U32(a3, 64) + 120) < 0.0;
  FIELD_U32(a1, 80) = v4;
  v5 = byte_60AFE3F4[v4];
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v4];
  FIELD_F32(a1, 120) = (float)v5 * 0.5;
  FIELD_U32(a1, 124) = 1069547520;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  if ( FIELD_S32(a1, 6456) <= 0 )
  {
    v6 = FIELD_U16(a1, 6364);
    if ( (v6 & 4) == 0 )
    {
      FIELD_U16(a1, 6364) = v6 | 4;
      FIELD_U32(a1, 6456) = 240;
      v7 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
      sub_6041838C((ModelAnimation *)(v7 + 4));
      AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
      FIELD_U32(v7, 20) = 0;
      FIELD_U32(v7, 28) |= 2u;
      FIELD_U32(v7, 24) = 1065353216;
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
  }
  return 1;
}
