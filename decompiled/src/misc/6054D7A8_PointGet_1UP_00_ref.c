/* PointGet_1UP_00_ref
 * address: 0x6054D7A8   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall PointGet_1UP_00_ref(int a1, int a2, int a3)
{
  int v4; // r9
  int v5; // r6
  int v6; // r8
  int v7; // r5
  unsigned int v8; // r7
  bool v9; // cf
  int v10; // r3
  unsigned int v11; // r0
  unsigned int v12; // r0
  int v13; // r2
  int v14; // r0
  StateBase *v15; // r1
  unsigned int v16; // r0
  int v18; // r0
  unsigned int v19; // r0
  unsigned int v20; // r0
  _DWORD v21[10]; // [sp+0h] [bp-28h] BYREF

  v4 = 1;
  v5 = 8;
  v6 = 0;
  v7 = FIELD_U32(a1, 3792);
  if ( (unsigned int)v7 < 4 )
    goto LABEL_2;
  v8 = 2;
  if ( (v7 & 0xFFFFFFFC) == 4 )
    goto LABEL_9;
  v6 = 0;
  if ( (v7 & 0xFFFFFFF8) == 8 )
  {
    v5 = 0;
    v8 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)(v7 - 16) < 5 )
  {
    v8 = 4;
    v5 = 1;
    goto LABEL_9;
  }
  v8 = 3;
  if ( (unsigned int)(v7 - 21) < 5 )
  {
LABEL_9:
    FIELD_U32(a1, 3812) = v8;
    *(_BYTE *)(*(_DWORD *)(a1 + 4 * v8 + 3648) + 64) |= 1u;
    if ( v5 == 8 )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v7 == 26 )
  {
    v6 = 100;
    sub_603FC6B4(dword_60C99DE4, 100, a3);
LABEL_2:
    v8 = 1;
    goto LABEL_9;
  }
  v18 = 2;
  if ( (unsigned int)(v7 - 27) >= 5 )
  {
    v5 = 5;
    v18 = 3;
    v8 = 5;
    switch ( v7 )
    {
      case ' ':
        break;
      case '!':
        v19 = FIELD_U32(a1, 3716);
        v6 = 0;
        if ( v19 >= 4 )
          v19 = 0;
        sub_60773630(*(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32), 69, 0);
        v5 = 6;
        v8 = 6;
        goto LABEL_9;
      case '"':
        v20 = FIELD_U32(a1, 3716);
        v6 = 0;
        if ( v20 >= 4 )
          v20 = 0;
        sub_60773630(*(_DWORD *)(PlayerMgr_instance + 4 * v20 + 32), 69, 0);
        v5 = 7;
        v8 = 7;
        goto LABEL_9;
      case '#':
        sub_60473DE4((_DWORD *)(a1 + 40), 3u, &dword_60CACBEC, 1);
        v18 = 4;
        break;
      case '$':
        goto LABEL_9;
      default:
        v18 = 8;
        break;
    }
  }
  v8 = 8;
  v4 = 0;
  v5 = v18;
  v6 = 0;
  FIELD_U32(a1, 3812) = 8;
  if ( v18 != 8 )
LABEL_10:
    *(_BYTE *)(*(_DWORD *)(a1 + 4 * v5 + 3680) + 64) |= 1u;
LABEL_11:
  if ( v7 == 21 )
    goto LABEL_24;
  if ( (unsigned int)(v7 - 22) <= 2 )
  {
    v9 = v8 >= 8;
    v10 = dword_60B03AF4[v7];
    v11 = v8;
LABEL_21:
    if ( v9 )
      v11 = 0;
    sub_6047DEC8((_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 4 * v11 + 3648), 1, v10);
LABEL_24:
    if ( v4 != 1 )
      goto LABEL_28;
    goto LABEL_25;
  }
  if ( v7 != 25 )
  {
    if ( (unsigned int)(v7 - 33) > 1 )
    {
      if ( v4 != 1 )
        goto LABEL_28;
      if ( v7 <= 36 )
      {
        v16 = v8;
        if ( v8 >= 8 )
          v16 = 0;
        sub_6047DEC8((_DWORD *)(a1 + 40), *(_DWORD *)(a1 + 4 * v16 + 3648), 1, dword_60B03AF4[v7] + v6);
      }
      goto LABEL_25;
    }
    v9 = v8 >= 8;
    v11 = v8;
    v10 = FIELD_U32(a1, 3852);
    goto LABEL_21;
  }
  v21[0] = &sead__SafeStringBase__vtable;
  v21[1] = "PointGet_1UP_00";
  v12 = v8;
  if ( v8 >= 8 )
    v12 = 0;
  sub_6047E0EC(v21, *(_DWORD *)(a1 + 4 * v12 + 3648), 1, 1);
  if ( v4 == 1 )
  {
LABEL_25:
    v13 = FIELD_U32(a1, 3768);
    if ( v8 >= 8 )
      v8 = 0;
    v14 = *(_DWORD *)(a1 + 4 * v8 + 3648);
    FIELD_U32(v14, 48) = FIELD_U32(a1, 3764);
    FIELD_U32(v14, 52) = v13;
    FIELD_U8(v14, 64) |= 0x10u;
    sub_6054EACC(a1);
  }
LABEL_28:
  if ( dword_60CC6484 )
    FIELD_F32(a1, 3788) = FIELD_F32(dword_60CC6484, 124) + -20.0;
  FIELD_U8(a1, 3823) = 1;
  FIELD_U8(a1, 3818) = v7 == 25;
  FIELD_U32(a1, 3804) = 0;
  if ( FIELD_U8(a1, 3817) )
  {
    v15 = (StateBase *)&unk_60CACDAC;
  }
  else if ( (unsigned int)(v7 - 27) > 4 )
  {
    if ( v7 == 35 )
    {
      v15 = (StateBase *)&dword_60CACE0C;
    }
    else if ( v7 == 32 )
    {
      v15 = (StateBase *)&unk_60CACDEC;
    }
    else
    {
      FIELD_U32(a1, 3744) = 1065353216;
      FIELD_U32(a1, 3752) = 1020054733;
      FIELD_U32(a1, 3800) = 0;
      FIELD_U32(a1, 3796) = 0;
      FIELD_U32(a1, 3808) = 0;
      FIELD_U8(a1, 3820) = 0;
      FIELD_U32(a1, 3780) = 0;
      FIELD_U32(a1, 3784) = 0;
      v15 = (StateBase *)&unk_60CACD6C;
    }
  }
  else
  {
    v15 = (StateBase *)&unk_60CACDCC;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), v15);
}
