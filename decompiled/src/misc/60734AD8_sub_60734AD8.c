/* sub_60734AD8
 * address: 0x60734AD8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60734AD8(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r0
  float v5; // s2
  int v6; // r1
  int *v7; // r0
  int v8; // r2
  unsigned int v9; // r3
  int *v10; // r2
  int v11; // r2
  int v12; // r1
  int v13; // r1
  int v14; // r1
  unsigned int v15; // r2
  int *v16; // r1
  int v17; // r2
  int v18; // r1
  int result; // r0

  FIELD_U32(a1, 6784) = 1065353216;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618168588 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = (**v3)(v3, &StageActor_RTTI);
  if ( v4 )
    v4 = (int)v3;
  v5 = FIELD_F32(v4, 112);
  v6 = FIELD_U32(v4, 116);
  FIELD_U32(a1, 108) = FIELD_U32(v4, 108);
  FIELD_U32(a1, 116) = v6;
  FIELD_F32(a1, 112) = v5 + 63.0;
  v7 = (int *)(a1 + 6776);
  v8 = FIELD_U32(a1, 6100);
  v9 = FIELD_U32(v8, 16);
  v10 = *(int **)(v8 + 20);
  if ( v9 > 1 )
    ++v10;
  v11 = *v10;
  FIELD_F32(v11, 20) = (float)FIELD_S32(a1, 6776);
  FIELD_U32(v11, 28) |= 2u;
  v12 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  FIELD_F32(v12, 20) = (float)*v7;
  FIELD_U32(v12, 28) |= 2u;
  FIELD_U32(a1, 116) = 1142292480;
  v13 = **(_DWORD **)(FIELD_U32(a1, 6100) + 20);
  FIELD_F32(v13, 20) = (float)*v7;
  FIELD_U32(v13, 28) |= 2u;
  v14 = FIELD_U32(a1, 6100);
  v15 = FIELD_U32(v14, 16);
  v16 = *(int **)(v14 + 20);
  if ( v15 > 1 )
    ++v16;
  v18 = *v16;
  FIELD_F32(v18, 20) = (float)*v7;
  FIELD_U32(v18, 28) |= 2u;
  v17 = 20;
  FIELD_U8(a1, 6761) = 1;
  LOWORD(v18) = -6616;
  if ( FIELD_U8(a1, 6808) )
    v17 = 40;
  HIWORD(v18) = -1;
  FIELD_U32(a1, 6764) = v17;
  *(int *)((char *)v7 + v18) = 0;
  FIELD_U8(a1, 6780) = 0;
  result = **(_DWORD **)(FIELD_U32(a1, 6100) + 12);
  FIELD_U32(result, 24) = 0;
  return result;
}
