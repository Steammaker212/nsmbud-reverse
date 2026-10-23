/* Actor_gurupupatapata_build_helper
 * address: 0x60359C04   size: 388   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gurupupatapata_build_helper(int a1, _DWORD *a2, int a3)
{
  int v6; // r2
  int v7; // r0
  int v8; // r1
  _BOOL4 v9; // r0

  v6 = 2;
  if ( a3 == -1 )
    v6 = ((*a2 >> 4) & 1) == 0;
  ShellEnemy__ctor((CarryableEnemy *)a1, (int)a2, v6, 0, *(_DWORD *)(a2[3] + 8) == 514);
  *(_DWORD *)a1 = &KoopaTroopa_vtable;
  FIELD_U32(a1, 6820) = 0;
  FIELD_U32(a1, 6824) = 0;
  FIELD_U32(a1, 6828) = -1;
  v7 = a2[4];
  v8 = a2[5];
  FIELD_U32(a1, 6840) = a2[6];
  FIELD_U32(a1, 6836) = v8;
  FIELD_U32(a1, 6832) = v7;
  FIELD_U32(a1, 6844) = 0;
  FIELD_U32(a1, 6848) = FIELD_U32(a1, 20) & 1;
  FIELD_U32(a1, 6864) = 0;
  FIELD_U32(a1, 6860) = 0;
  FIELD_U32(a1, 6856) = 0;
  FIELD_U32(a1, 6852) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6868));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7172));
  v9 = *(_DWORD *)(a2[3] + 8) == 514;
  FIELD_U32(a1, 7476) = v9;
  FIELD_U32(a1, 7480) = dword_60AF20D8[v9];
  FIELD_U32(a1, 7484) = (240 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  FIELD_U32(a1, 7488) = 0;
  FIELD_U32(a1, 7492) = 0;
  FIELD_U8(a1, 7496) = 0;
  FIELD_U32(a1, 7500) = 0;
  return a1;
}
