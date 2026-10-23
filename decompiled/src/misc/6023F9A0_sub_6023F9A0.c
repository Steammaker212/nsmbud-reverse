/* sub_6023F9A0
 * address: 0x6023F9A0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6023F9A0(int a1)
{
  char v1; // r12
  int v3; // r2
  _DWORD *v4; // r5
  _DWORD *v5; // r0
  int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r0

  v3 = -83886080;
  v4 = (_DWORD *)(a1 + 6284);
  if ( FIELD_U32(a1, 80) == FIELD_U32(a1, 6284) )
    v3 = 83886080;
  FIELD_U32(a1, 156) += v3;
  if ( ((unsigned int)&unk_60C8DB10 & ~(1612970484 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8DB10) )
  {
    dword_60C8DB24 = 0x1000000;
    dword_60C8DB28 = -16777216;
    _cxa_guard_release((__guard *)&unk_60C8DB10);
  }
  FIELD_U32(a1, 160) += *((_DWORD *)&unk_60C8DB10 + *v4 + 5);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v5 = *(_DWORD **)(a1 + 6604);
  v6 = (int *)v5[3];
  v7 = v5[2];
  v8 = v5[17];
  if ( v7 > v8 )
    v6 += v8;
  Animation_update(*v6);
  JUMPOUT(0x60000CD0);
}
