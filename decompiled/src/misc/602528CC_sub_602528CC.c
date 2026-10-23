/* sub_602528CC
 * address: 0x602528CC   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602528CC(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r5
  int v8; // r0
  int v9; // r0
  ActiveCollider *v10; // r4
  ActiveColliderMgr *v11; // r5
  _DWORD v12[5]; // [sp+0h] [bp-38h] BYREF
  char v13; // [sp+14h] [bp-24h]
  int v14; // [sp+18h] [bp-20h]
  char playerId; // [sp+1Ch] [bp-1Ch]

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613048052 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
  {
    v8 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 204))(a1, SBYTE1(owner[2]._.settigns2)) == 1 )
          SE_SYS_NICE_S_ref();
        Enemy__vf178(a1, owner);
      }
      v9 = FIELD_U32(a1, 80);
      v12[0] = dword_60AFE3F8[v9];
      v12[1] = 1077936128;
      v12[2] = -1065353216;
      v12[3] = -1103101952;
      v12[4] = &stru_60C90710;
      v13 = -1;
      v14 = v9;
      playerId = FIELD_U8(owner, 0x54);
      sub_602A852C(a1 + 6104, v12);
      v10 = (ActiveCollider *)(a1 + 188);
      v11 = ActiveColliderMgr_instance;
      ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v10);
      ActiveColldierMgr_removeFromCreateList(v11, v10);
      ActiveColldierMgr_removeFromList3(v11, (int)v10);
    }
    else if ( !sub_6075EDF8(owner) )
    {
      FIELD_U8(a1, 6356) = FIELD_U8(owner, 0x54);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DF34);
    }
  }
}
