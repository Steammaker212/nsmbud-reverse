/* sub_60395FC4
 * address: 0x60395FC4   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60395FC4(int a1)
{
  int v2; // r6
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  _DWORD *v5; // r5
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  __int16 v12; // r1
  int v13; // r4
  _DWORD *v14; // t1
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r1
  unsigned int v18; // r0
  _DWORD v19[2]; // [sp+8h] [bp-20h] BYREF
  int v20; // [sp+10h] [bp-18h] BYREF
  int v21; // [sp+14h] [bp-14h] BYREF

  v2 = FIELD_U32(a1, 112);
  sub_6039AF5C(a1, 0, 0.0);
  v3.n64_u32[0] = FIELD_U32(a1, 124);
  v4.n64_u32[0] = -1.0;
  FIELD_U32(a1, 124) = vmax_f32(v3, v4).n64_u32[0];
  v5 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) )
  {
    FIELD_U32(a1, 112) = v2;
    if ( (FIELD_U8(a1, 6321) & 1) != 0 )
    {
      v21 = 1070386381;
      v20 = 1085276160;
      v6 = sub_60378E4C(a1 + 6444);
      v7 = FIELD_U32(a1, 6452);
      if ( v7 >= 2 )
        v7 = 0;
      v8 = *(unsigned __int16 *)(v6 + 8 * v7 + 4);
      v9 = sub_60378E30(a1 + 6444);
      v19[0] = FIELD_U32(v9, 16);
      v19[1] = FIELD_U32(v9, 20);
      ((void (__fastcall *)(int, int *, int *, _DWORD *, int))loc_6039DD78)(a1, &v21, &v20, v19, v8);
      FIELD_U32(a1, 6376) = v21;
      FIELD_U32(a1, 6380) = v20;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C971E0);
    }
  }
  else
  {
    v10 = FIELD_U16(a1, 6332);
    v11 = v10 == 0;
    if ( FIELD_U16(a1, 6332) )
    {
      v12 = v10 - 1;
      FIELD_U16(a1, 6332) = v12;
      v11 = v12 == 0;
    }
    if ( v11 )
    {
      *v5 = 3;
      v14 = *(_DWORD **)(a1 + 6304);
      v13 = a1 + 6304;
      sub_60421938(v14, *(_DWORD *)(v13 - 4), (int)&dword_60C96F58);
      v15 = *(_DWORD *)(*(_DWORD *)v13 + 12);
      v16 = *(_DWORD *)(*(_DWORD *)v13 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v13 + 8) > v16 )
        v15 += 4 * v16;
      *(_DWORD *)(*(_DWORD *)v15 + 24) = dword_60C96F28[4 * *v5 + 2];
      v17 = *(_DWORD *)(*(_DWORD *)v13 + 12);
      v18 = *(_DWORD *)(*(_DWORD *)v13 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v13 + 8) > v18 )
        v17 += 4 * v18;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v17 + 4), dword_60C96F28[4 * *v5 + 3]);
    }
  }
}
