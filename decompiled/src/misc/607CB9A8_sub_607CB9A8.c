/* sub_607CB9A8
 * address: 0x607CB9A8   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CB9A8(int a1)
{
  char v2; // r12
  int v3; // r5
  _DWORD *v4; // r5
  CollisionMgr_Sensor v6; // [sp+0h] [bp-28h] BYREF

  v3 = 2;
  if ( sub_60789018((_DWORD *)PlayerMgr_instance, a1) == 1 )
  {
    v4 = *(_DWORD **)(a1 + 11368);
    if ( ((unsigned int)&dword_60CC4B70 & ~(1618786796 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B70) )
    {
      dword_60CC4B6C = (int)&off_60C23E58;
      _cxa_guard_release(&dword_60CC4B70);
    }
    if ( v4 && (*(int (__fastcall **)(_DWORD *, int *))(*v4 + 8))(v4, &dword_60CC4B6C) == 1 )
      v4[77] = FIELD_U32(a1, 8);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &stru_60B0D0E8, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &stru_60B0D0F4, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &stru_60B0D100, 0);
    v3 = 1;
    v6.b = 11.0;
    v6.a = 4.0;
    v6.c = -8.0;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 1328), &v6, 1);
    sub_607CD050(a1);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 144))(a1, 1, 1);
    FIELD_U32(a1, 1276) = &unk_60B0B5A4;
    FIELD_U32(a1, 1280) = &unk_60B0B61C;
    FIELD_U32(a1, 1284) = &unk_60B0B0DC;
    FIELD_U32(a1, 96) = -1065353216;
    FIELD_U32(a1, 100) = -1105618534;
    FIELD_U8(a1, 84) = -1;
    sub_6078667C((_DWORD *)(a1 + 688), 0);
    FIELD_U32(a1, 964) = -1;
    FIELD_U32(a1, 11420) = -1;
    FIELD_U32(a1, 11360) = 0;
    Player_changeState(a1, (StateBase *)&dword_60CC5634, 0);
    sub_607CFB38(a1, &dword_60CC5398);
    sub_60766314(a1, &stru_60CBF37C, 0);
    PlayerBase_vf5(a1);
    FIELD_U32(a1, 1236) |= 8u;
    FIELD_U32(a1, 1228) |= 0x80u;
    FIELD_U32(a1, 1148) = 14;
    FIELD_U32(a1, 1152) = 1;
  }
  return v3;
}
