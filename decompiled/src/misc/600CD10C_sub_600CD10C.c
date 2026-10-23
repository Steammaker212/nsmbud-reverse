/* sub_600CD10C
 * address: 0x600CD10C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600CD10C(int *a1)
{
  ActiveColliderMgr *v2; // r6
  char v3; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  int v5; // r0
  CircularColliderInfo info; // [sp+8h] [bp-30h] BYREF

  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  a1[1692] = 1065353216;
  a1[1693] = 1065353216;
  a1[1694] = 1065353216;
  koopaJr_clown_sphere_ref(a1);
  sub_600CD484(a1);
  memset(&info, 0, 24);
  info.radius = 10.0;
  info.rotation = 0;
  CircularCollider_init((CircularCollider *)(a1 + 1580), (StageActor *)a1, &info);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1580));
  a1[1680] = -1090519040;
  a1[1681] = 1056964608;
  *((float *)a1 + 1682) = *((float *)a1 + 37) * -12.0;
  CollisionMgr_init((CollisionMgr *)(a1 + 162), (StateActor *)a1, (CollisionMgr_Sensor *)a1 + 560, 0, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 47), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCB044, 0);
  a1[80] = 1;
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 47))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 47)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 47));
  }
  if ( a1[5] )
  {
    (*(void (__fastcall **)(int *, void *))(*a1 + 192))(a1, &unk_60C840F4);
  }
  else
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))a1[14];
    if ( ((unsigned int)&dword_60C80058 & ~(1611453064 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80058) )
    {
      dword_60C80054 = (int)&off_60BC2CD4;
      _cxa_guard_release(&dword_60C80058);
    }
    if ( v4 )
    {
      v5 = (**v4)(v4, &dword_60C80054);
      if ( v5 )
        v5 = (int)v4;
    }
    else
    {
      v5 = 0;
    }
    a1[1578] = v5;
    (*(void (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C840D4);
  }
  return 1;
}
