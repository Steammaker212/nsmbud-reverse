/* sub_60733EFC
 * address: 0x60733EFC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60733EFC(int a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // t1
  int v5; // r1
  int *v6; // r1
  int v7; // r2
  int v8; // r1
  int (__fastcall ***v9)(_DWORD, int *); // r5
  int v10; // r0
  float v11; // r2
  int v12; // r1
  int v13; // r0

  v4 = FIELD_U32(a1, 6100);
  v3 = (int *)(a1 + 6100);
  v5 = **(_DWORD **)(v4 + 20);
  FIELD_F32(v5, 20) = (float)v3[169];
  FIELD_U32(v5, 28) |= 2u;
  v6 = *(int **)(*v3 + 20);
  LOWORD(v7) = 0;
  if ( *(_DWORD *)(*v3 + 16) > 1u )
    ++v6;
  HIWORD(v7) = 16688;
  v8 = *v6;
  FIELD_U32(v8, 20) = v7;
  FIELD_U32(v8, 28) |= 2u;
  v3[171] = 1065353216;
  *(v3 - 1489) = 1065353216;
  *(v3 - 1488) = 1065353216;
  *(v3 - 1487) = 1065353216;
  *((_BYTE *)v3 + 661) = 1;
  v9 = (int (__fastcall ***)(_DWORD, int *))*(v3 - 1511);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618165676 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v10 = (**v9)(v9, &StageActor_RTTI);
  if ( v10 )
    v10 = (int)v9;
  v11 = FIELD_F32(v10, 112);
  v12 = FIELD_U32(v10, 108);
  v13 = FIELD_U32(v10, 116);
  FIELD_F32(a1, 6792) = v11;
  FIELD_U32(a1, 108) = v12;
  FIELD_U32(a1, 116) = v13;
  FIELD_F32(a1, 112) = v11 + 63.0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U8(a1, 6780) = 0;
  return v11 + 63.0;
}
