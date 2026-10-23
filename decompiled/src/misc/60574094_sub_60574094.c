/* sub_60574094
 * address: 0x60574094   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60574094(int a1)
{
  float v2; // s16
  float v3; // s18
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  unsigned int v6; // r0
  float *v7; // r2
  float v8; // s6
  float v9; // s8
  float v10; // s2
  float v11; // s0
  float v12; // s2
  int v13; // r0
  ColliderBase *v14; // r5
  _DWORD v16[10]; // [sp+0h] [bp-28h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  if ( FIELD_U8(a1, 7312) && !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
    ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60CAEAC8 & ~(1616331012 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEAC8) )
  {
    dword_60CAEAC4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAEAC8);
  }
  if ( v4 && (**v4)(v4, &dword_60CAEAC4) == 1 )
  {
    sub_606D8338(v4, v16, FIELD_U8(a1, 7396));
    FIELD_U32(a1, 7388) = v16[0];
    FIELD_U32(a1, 7392) = v16[1];
  }
  v6 = FIELD_U32(a1, 164) + dword_60CAEAB8;
  FIELD_U32(a1, 164) = v6;
  v7 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v8 = *v7;
  v9 = v7[1];
  v10 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v11 = FIELD_F32(a1, 7388) + (float)((float)(v7[2] + (float)(v10 * v7[3])) * 4.0);
  FIELD_F32(a1, 108) = v11;
  v12 = FIELD_F32(a1, 6796)
      + (float)((float)(FIELD_F32(a1, 7392) + -8.0) + (float)((float)(v8 + (float)(v9 * v10)) * 4.0));
  FIELD_F32(a1, 112) = v12;
  if ( (float)((float)((float)(v12 - v3) * (float)(v12 - v3)) + (float)((float)(v11 - v2) * (float)(v11 - v2))) <= 65536.0 )
  {
    v14 = (ColliderBase *)(a1 + 6120);
  }
  else
  {
    FIELD_F32(a1, 108) = v11;
    FIELD_F32(a1, 112) = v12;
    v13 = FIELD_U32(a1, 116);
    FIELD_F32(a1, 584) = v11;
    FIELD_F32(a1, 588) = v12;
    FIELD_U32(a1, 592) = v13;
    FIELD_U32(a1, 616) = v13;
    FIELD_F32(a1, 608) = v11;
    FIELD_F32(a1, 612) = v12;
    v14 = (ColliderBase *)(a1 + 6120);
    sub_60160948((_DWORD *)(a1 + 6120));
    v6 = FIELD_U32(a1, 164);
  }
  FIELD_U32(a1, 6364) = v6;
  ShapedCollider_execute(v14);
  sub_605B2D70(a1);
  return 1;
}
