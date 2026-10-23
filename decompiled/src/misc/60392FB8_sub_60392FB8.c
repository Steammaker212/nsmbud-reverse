/* sub_60392FB8
 * address: 0x60392FB8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60392FB8(int a1)
{
  int v1; // r6
  int v2; // r5
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  int v11; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v12[8]; // [sp+8h] [bp-28h] BYREF
  int v13; // [sp+10h] [bp-20h] BYREF
  int v14; // [sp+14h] [bp-1Ch] BYREF

  v1 = 1070386381;
  v2 = 1085276160;
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 88) = 0;
  v14 = 1070386381;
  v13 = 1085276160;
  if ( sub_6039DC14(a1, v12, &v11) == 1 )
  {
    ((void (__fastcall *)(int, int *, int *, _BYTE *, int))loc_6039DD78)(a1, &v14, &v13, v12, v11);
    v2 = v13;
    v1 = v14;
  }
  FIELD_U32(a1, 6376) = v1;
  FIELD_U32(a1, 6380) = v2;
  v4 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 3 )
  {
    *v4 = 3;
    v5 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96F58);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v7 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v7 )
      v6 += 4 * v7;
    *(_DWORD *)(*(_DWORD *)v6 + 24) = dword_60C96F28[4 * *v4 + 2];
    v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
    v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
      v8 += 4 * v9;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), dword_60C96F28[4 * *v4 + 3]);
  }
  result = FIELD_U8(a1, 6401);
  if ( FIELD_U8(a1, 6401) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    FIELD_U8(a1, 6401) = 0;
    return 0;
  }
  return result;
}
