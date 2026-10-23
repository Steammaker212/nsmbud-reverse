/* sub_60202F84
 * address: 0x60202F84   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60202F84(int a1)
{
  int v2; // r0
  float v3; // r2
  float v4; // r3
  int v5; // r1
  int v6; // lr
  int *v7; // r0
  float v8; // s4
  int *v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  int *v12; // r1
  int v13; // r1
  float v14; // r1
  int *v15; // r2
  int v16; // r0

  pukupuku_ref();
  v2 = sub_608336A8(FIELD_U32(a1, 560));
  FIELD_U32(a1, 180) = v2;
  FIELD_U32(a1, 192) = v2;
  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 208) = -1046478848;
  v3 = FIELD_F32(a1, 80);
  FIELD_F32(a1, 500) = v3;
  v4 = FIELD_F32(a1, 84);
  FIELD_F32(a1, 504) = v4;
  v5 = FIELD_U32(a1, 88);
  FIELD_U32(a1, 508) = v5;
  v6 = FIELD_U32(a1, 352);
  v7 = dword_60203110;
  if ( !v6 )
    v7 = &dword_60203110[1];
  FIELD_F32(a1, 512) = v3 + *(float *)v7;
  FIELD_F32(a1, 516) = v4;
  FIELD_U32(a1, 520) = v5;
  if ( FIELD_U32(a1, 580) )
  {
    v8 = 10.0;
  }
  else
  {
    v9 = dword_60203118;
    v8 = -200.0;
    if ( !v6 )
      v9 = &dword_60203118[1];
    FIELD_F32(a1, 80) = v3 + *(float *)v9;
  }
  FIELD_F32(a1, 84) = v4 + v8;
  v10 = FIELD_U32(a1, 584);
  if ( v10 >= 2 )
    v10 = 0;
  v11 = dword_60C8C5E4 + 4 * v10;
  v12 = (int *)(v11 + 44);
  if ( !v6 )
    v12 = (int *)(v11 + 36);
  v13 = *v12;
  FIELD_U32(a1, 488) = 2;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = v13;
  v16 = sub_601DFFE4(a1 + 488);
  v14 = FIELD_F32(v16, 72);
  FIELD_F32(a1, 536) = v14;
  FIELD_U32(a1, 540) = FIELD_U32(v16, 76);
  FIELD_U32(a1, 544) = FIELD_U32(v16, 80);
  v15 = dword_60203128;
  LOWORD(v16) = 0;
  if ( !FIELD_U32(a1, 352) )
    v15 = &dword_60203128[1];
  HIWORD(v16) = 17327;
  FIELD_F32(a1, 536) = v14 + *(float *)v15;
  FIELD_U32(a1, 212) = v16;
  sub_6017793C((_DWORD *)(a1 + 324), a1, &dword_60C8C5D0);
  *(_DWORD *)(**(_DWORD **)(a1 + 372) + 348) &= ~4u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 148))(a1);
  StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C8C3D8);
  return 1;
}
