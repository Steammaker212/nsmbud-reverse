/* sub_6002C728
 * address: 0x6002C728   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002C728(int a1)
{
  _DWORD **v2; // r5
  int v3; // r7
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r4

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
  FIELD_U32(a1, 7388) = FIELD_U32(a1, 112);
  if ( FIELD_U8(a1, 7426) == 11 )
  {
    v2 = (_DWORD **)(a1 + 7096);
  }
  else
  {
    v2 = (_DWORD **)(a1 + 7096);
    v3 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&dword_60C7F778);
    v4 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v5 )
      v4 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v6 = (*v2)[3];
    v7 = (*v2)[17];
    if ( (*v2)[2] > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = v3;
    FIELD_U8(a1, 7426) = 11;
  }
  FIELD_U32(a1, 3180) |= 4u;
  FIELD_U32(a1, 3188) |= 4u;
  FIELD_U32(a1, 3204) &= ~4u;
  FIELD_U32(a1, 7340) = 1077516698;
  FIELD_U32(a1, 7344) = 1070386381;
  FIELD_U32(a1, 7348) = 1075838976;
  FIELD_U32(a1, 144) = 1077516698;
  v8 = a1 + 144;
  FIELD_U32(v8, 4) = 1070386381;
  FIELD_U32(v8, 8) = 1075838976;
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v2 + 68))(**v2, v8);
  FIELD_U16(v8, 6132) = 30;
  FIELD_U8(v8, 7283) = 0;
  return 7283;
}
