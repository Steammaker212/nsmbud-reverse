/* sub_6025B1A8
 * address: 0x6025B1A8   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025B1A8(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  char v9; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r6
  int (__fastcall ***v11)(_DWORD, int *); // r5
  int v12; // r0

  v3 = FIELD_U32(a1, 6360);
  v2 = (_DWORD *)(a1 + 6360);
  if ( v3 == 2 )
  {
    v4 = *(_DWORD **)(a1 + 6352);
    v5 = (int *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    if ( *(float *)(*v5 + 24) < 0.0 )
      sub_6041838C((ModelAnimation *)(v8 + 4));
    FIELD_U32(v8, 24) = 1065353216;
  }
  else
  {
    *v2 = 2;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  CarryableEnemy__vf294(a1);
  v10 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613083216 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v10 )
  {
    v11 = (int (__fastcall ***)(_DWORD, int *))(**v10)(v10, &StageActor_RTTI);
    if ( v11 )
      v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  if ( ((unsigned int)&dword_60C80040 & ~(1613083344 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  if ( v11 )
  {
    v12 = (**v11)(v11, &dword_60C8003C);
    if ( v12 )
      v12 = (int)v11;
  }
  else
  {
    v12 = 0;
  }
  FIELD_U32(a1, 6752) = v12;
  FIELD_U32(a1, 6464) = 1;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  return sub_6015913C((ActiveCollider *)(a1 + 188), 2048);
}
