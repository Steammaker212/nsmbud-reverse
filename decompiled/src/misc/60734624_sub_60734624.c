/* sub_60734624
 * address: 0x60734624   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60734624(_DWORD *a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  _DWORD *v5; // r4
  int v6; // t1
  int v7; // r1
  int v8; // s0
  unsigned int v9; // r2
  int *v10; // r1
  int v11; // r1
  int v12; // r0

  v3 = (int (__fastcall ***)(_DWORD, int *))a1[14];
  if ( ((unsigned int)&dword_60C7B364 & ~(1618167360 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = (int)(v3 + 27);
  if ( !(**v3)(v3, &StageActor_RTTI) )
    v4 = 108;
  a1[27] = *(_DWORD *)v4;
  a1[40] = 0x80000000;
  v6 = a1[1694];
  v5 = a1 + 1694;
  v7 = *(v5 - 169);
  v8 = v6;
  v9 = FIELD_U32(v7, 16);
  v10 = *(int **)(v7 + 20);
  if ( v9 > 1 )
    ++v10;
  v11 = *v10;
  FIELD_F32(v11, 20) = (float)v8;
  FIELD_U32(v11, 28) |= 2u;
  v12 = **(_DWORD **)(*(v5 - 169) + 20);
  FIELD_F32(v12, 20) = (float)(int)*v5;
  FIELD_U32(v12, 28) |= 2u;
  *((_BYTE *)v5 - 15) = 1;
  *((_BYTE *)v5 + 4) = 0;
  *(_DWORD *)(**(_DWORD **)(*(v5 - 169) + 12) + 24) = 0;
  return 0;
}
