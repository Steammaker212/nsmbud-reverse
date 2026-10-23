/* sub_6025B9D4
 * address: 0x6025B9D4   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025B9D4(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int v4; // t1
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0
  int v9; // r5
  int (__fastcall ***v10)(_DWORD, int *); // r6
  int (__fastcall ***v11)(_DWORD, int *); // r5
  int v12; // r0

  v4 = a1[1590];
  v3 = a1 + 1590;
  if ( v4 == 1 )
  {
    v5 = (_DWORD *)a1[1588];
    v6 = (int *)v5[3];
    v7 = v5[2];
    v8 = v5[17];
    if ( v7 > v8 )
      v6 += v8;
    v9 = *v6;
    if ( (float)(*(float *)(*v6 + 24) * 0.0) < 0.0 )
      sub_6041838C((ModelAnimation *)(v9 + 4));
    FIELD_U32(v9, 24) = 0;
  }
  else
  {
    *v3 = 1;
    sub_60421AD4(a1[1588]);
  }
  v10 = (int (__fastcall ***)(_DWORD, int *))a1[14];
  if ( ((unsigned int)&dword_60C7B364 & ~(1613085308 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
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
  if ( ((unsigned int)&dword_60C80040 & ~(1613085436 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  v12 = 0;
  if ( v11 )
  {
    v12 = (**v11)(v11, &dword_60C8003C);
    if ( v12 )
      v12 = (int)v11;
  }
  a1[1688] = v12;
  a1[1616] = 1;
  a1[36] = 0;
  a1[37] = 0;
  a1[38] = 0;
  sub_6025FC2C(a1);
  return sub_6015913C((ActiveCollider *)(a1 + 47), 2048);
}
