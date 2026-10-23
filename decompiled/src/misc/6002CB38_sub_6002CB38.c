/* sub_6002CB38
 * address: 0x6002CB38   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002CB38(int a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int result; // r0

  FIELD_U32(a1, 6308) = FIELD_U32(a1, 7404);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
  FIELD_U8(a1, 7435) = 1;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U32(a1, 100) = -1093874483;
  FIELD_U32(a1, 124) = 1090519040;
  FIELD_U32(a1, 7388) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 3204) |= 4u;
  if ( FIELD_U8(a1, 7426) != 11 )
  {
    v2 = a1 + 7096;
    v3 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F778);
    v4 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = *(_DWORD *)(*(_DWORD *)v2 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = v3;
    FIELD_U8(a1, 7426) = 11;
  }
  FIELD_U32(a1, 3180) |= 4u;
  result = FIELD_U32(a1, 3188) | 4;
  FIELD_U32(a1, 3188) = result;
  return result;
}
