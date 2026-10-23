/* sub_60255064
 * address: 0x60255064   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60255064(_DWORD *a1, int *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r7
  int (__fastcall ***v8)(_DWORD, int *); // r7
  char v9; // r12
  int v10; // r6
  int *v11; // r1
  int *v12; // r2
  int v13; // r0
  int v14; // r0
  int v16; // [sp+0h] [bp-30h] BYREF
  int speed[2]; // [sp+4h] [bp-2Ch] BYREF
  int v18[9]; // [sp+Ch] [bp-24h] BYREF

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[3];
  v7 = a2[4];
  speed[1] = a2[2];
  v18[0] = v6;
  v18[1] = v7;
  a1[2] = v4;
  a1[3] = v5;
  v8 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[11]);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613058232 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v8 )
  {
    v10 = (**v8)(v8, &StageActor_RTTI);
    if ( v10 )
      v10 = (int)v8;
  }
  else
  {
    v10 = 0;
  }
  speed[0] = 41943040;
  moveValueTo(a1 + 6, v18, speed);
  v11 = a2 + 7;
  if ( a2[7] && a2[6] == 1 )
  {
    speed[0] = a2[7];
    v11 = speed;
    v12 = &v16;
    v16 = 0x8000000;
  }
  else
  {
    v12 = speed;
    speed[0] = 0x8000000;
  }
  moveValueTo(a1 + 13, v11, v12);
  if ( !v10 )
  {
    v14 = 0;
    goto LABEL_17;
  }
  v13 = a1[13];
  a1[14] = v13;
  if ( FIELD_U32(v10, 80) == 1 )
  {
    v14 = -v13;
LABEL_17:
    a1[14] = v14;
  }
  SE_EMY_BIG_HANACHAN_DIVE_NUMA_ref(a1);
  return 1;
}
