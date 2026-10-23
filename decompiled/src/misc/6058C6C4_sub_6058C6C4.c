/* sub_6058C6C4
 * address: 0x6058C6C4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058C6C4(int a1)
{
  float v2; // s18
  float v3; // s16
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12
  unsigned int v6; // r0
  float *v7; // r2
  float v8; // s4
  float v9; // s6
  float v10; // s0
  float v11; // s2
  int v12; // r0
  ColliderBase *v13; // r5
  _DWORD v15[10]; // [sp+0h] [bp-28h] BYREF

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  sub_605D006C(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v4 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60CAEAC8 & ~(1616430848 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEAC8) )
  {
    dword_60CAEAC4 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60CAEAC8);
  }
  if ( v4 && (**v4)(v4, &dword_60CAEAC4) == 1 )
  {
    sub_606D8338(v4, v15, FIELD_U8(a1, 7504));
    FIELD_U32(a1, 7484) = v15[0];
    FIELD_U32(a1, 7488) = v15[1];
  }
  v6 = FIELD_U32(a1, 164) + dword_60CAF440;
  FIELD_U32(a1, 164) = v6;
  v7 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
  v8 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v9 = *v7 + (float)(v7[1] * v8);
  v10 = FIELD_F32(a1, 7484) + (float)((float)(v7[2] + (float)(v8 * v7[3])) * 4.0);
  FIELD_F32(a1, 108) = v10;
  v11 = FIELD_F32(a1, 7488) + (float)(v9 * 4.0);
  FIELD_F32(a1, 112) = v11;
  if ( (float)((float)((float)(v10 - v2) * (float)(v10 - v2)) + (float)((float)(v11 - v3) * (float)(v11 - v3))) <= 65536.0 )
  {
    v13 = (ColliderBase *)(a1 + 6120);
  }
  else
  {
    FIELD_F32(a1, 108) = v10;
    FIELD_F32(a1, 112) = v11;
    v12 = FIELD_U32(a1, 116);
    FIELD_F32(a1, 584) = v10;
    FIELD_F32(a1, 588) = v11;
    FIELD_U32(a1, 592) = v12;
    FIELD_U32(a1, 616) = v12;
    FIELD_F32(a1, 608) = v10;
    FIELD_F32(a1, 612) = v11;
    v13 = (ColliderBase *)(a1 + 6120);
    sub_60160948((_DWORD *)(a1 + 6120));
    v6 = FIELD_U32(a1, 164);
  }
  FIELD_U32(a1, 6364) = v6;
  ShapedCollider_execute(v13);
  return 1;
}
