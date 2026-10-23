/* sub_605F0340
 * address: 0x605F0340   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F0340(int a1)
{
  float v2; // r0
  unsigned int v3; // r5
  int v4; // r2
  int v5; // r0
  _DWORD *v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r0
  StateBase *v11; // r1
  StateMgr *v12; // r0
  int v13; // r8
  int v14; // r10
  int v15; // r9
  int v16; // r0
  int v17; // r1
  int *v18; // r2
  unsigned int v19; // r7
  float v20; // s0
  int v21; // r0

  FIELD_U32(a1, 492) = 1124597760;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1132986368;
  FIELD_U32(a1, 504) = 1107296256;
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    v2 = FIELD_F32(a1, 108);
  }
  else
  {
    v2 = FIELD_F32(a1, 108) + -80.0;
    FIELD_F32(a1, 108) = v2;
  }
  FIELD_F32(a1, 6844) = v2;
  FIELD_U32(a1, 6848) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6852) = FIELD_U32(a1, 116);
  ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, int (*)(), int, int))loc_6069E698)(a1, 0, 0, 0, sub_605F0638, 1, 1);
  v3 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6857) = BYTE1(v3);
  FIELD_U8(a1, 6858) = -1;
  FIELD_U8(a1, 6856) = v3 & 3;
  if ( (v3 & 3) == 1 )
  {
    FIELD_U32(a1, 6892) = 600 * ((v3 >> 20) & 0x1F);
    v12 = (StateMgr *)(a1 + 6084);
    v11 = (StateBase *)&unk_60CB1FE8;
  }
  else if ( (v3 & 3) != 0 )
  {
    v13 = ((int (__fastcall *)(int))loc_60583CD4)(dword_60CAF15C);
    v14 = ((int (__fastcall *)(int))loc_605840F8)(dword_60CAF15C);
    v15 = sub_605843DC(dword_60CAF15C);
    v16 = ((int (__fastcall *)(int))loc_60584278)(dword_60CAF15C);
    v17 = v14 + v13 + v15 + v16;
    FIELD_U32(a1, 6876) = v17;
    v18 = (int *)(a1 + 6876);
    v19 = FIELD_U32(a1, 20);
    if ( ((v19 >> 4) & 1) != 0 )
      v17 = v13 + v15 + v16;
    if ( ((v19 >> 4) & 2) != 0 )
      v17 -= v13;
    if ( ((v19 >> 4) & 4) != 0 )
      v17 -= v15;
    if ( ((v19 >> 4) & 8) != 0 )
      v17 -= v16;
    if ( ((v19 >> 4) & 7) != 0 )
    {
      *v18 = v17;
    }
    else if ( ((v19 >> 7) & 1) == 1 )
    {
      *v18 = v17;
    }
    v20 = (float)(v17 * (v3 >> 28)) * 0.1;
    v21 = (int)v20;
    if ( (float)(v20 - (float)(int)v20) > 0.0 )
      ++v21;
    FIELD_U32(a1, 6880) = v21;
    v12 = (StateMgr *)(a1 + 6084);
    v11 = (StateBase *)&unk_60CB2008;
  }
  else
  {
    v4 = 0;
    v5 = dword_60C99DD4;
    FIELD_U32(a1, 6860) = 0;
    v6 = (_DWORD *)(a1 + 6860);
    if ( FIELD_U8(v5, 292) )
    {
      v4 = FIELD_U32(v5, 344);
      *v6 = v4;
    }
    if ( FIELD_U8(v5, 364) )
    {
      v4 += FIELD_U32(v5, 416);
      *v6 = v4;
    }
    if ( FIELD_U8(v5, 436) )
    {
      v4 += FIELD_U32(v5, 488);
      *v6 = v4;
    }
    if ( FIELD_U8(v5, 508) )
      v4 += FIELD_U32(v5, 560);
    v7 = 0;
    if ( FIELD_U8(v5, 508) )
      *v6 = v4;
    FIELD_U32(a1, 6868) = 10 * (HIWORD(v3) & 0xF);
    v8 = FIELD_U8(v5, 733);
    v9 = FIELD_U8(v5, 734);
    v10 = FIELD_U8(v5, 735);
    if ( v8 != 255 )
      v7 = 1;
    if ( v9 != 255 )
      ++v7;
    if ( v10 != 255 )
      ++v7;
    v11 = (StateBase *)&dword_60CB1FC8;
    FIELD_U32(a1, 6864) = v7;
    v12 = (StateMgr *)(a1 + 6084);
  }
  StateMgr__changeState(v12, v11);
  return 1;
}
