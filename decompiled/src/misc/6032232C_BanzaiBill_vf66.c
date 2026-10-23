/* BanzaiBill_vf66
 * address: 0x6032232C   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall BanzaiBill_vf66(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  int v8; // r0
  StageActor *v9; // r0
  __int64 v10; // [sp+0h] [bp-38h] BYREF
  int v11; // [sp+8h] [bp-30h]
  int v12; // [sp+Ch] [bp-2Ch]
  State *v13; // [sp+10h] [bp-28h]
  char v14; // [sp+14h] [bp-24h]
  int v15; // [sp+18h] [bp-20h]
  char playerId; // [sp+1Ch] [bp-1Ch]

  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613898580 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner && (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
  {
    if ( FIELD_U32(a1, 6308) == 1
      && FIELD_U8(FIELD_U32(a3, 0x40), 0x215) == 1
      && sub_6075F914(owner) == 1
      && (owner[1].profileFlags & 0x20000) != 0 )
    {
      (*(void (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0) + 1164))(owner, a2, a3);
    }
    else if ( FIELD_U32(a2, 0x40) == (StageActor *)a1 && (v8 = Enemy__processCollision((Enemy *)a1, a2, a3, 0)) != 0 )
    {
      if ( v8 != 2 )
      {
        v9 = FIELD_U32(a3, 0x40);
        FIELD_U32(a1, 7300) = 0;
        v10 = FIELD_U64(a1, 120);
        v11 = -1065353216;
        v12 = unk_60C906E8;
        v13 = &stru_60C906EC;
        v14 = -1;
        v15 = FIELD_U32(a1, 6284);
        playerId = FIELD_U8(v9, 0x54);
        sub_602A852C(a1 + 6104, &v10);
      }
    }
    else if ( FIELD_U32(a3, 0x88) != 15
           && (*(int (__fastcall **)(StageActor *, ActiveCollider *, ActiveCollider *))(FIELD_U32(owner, 0x0) + 1164))(
                owner,
                a2,
                a3) == 1
           && !FIELD_U32(a1, 6308) )
    {
      FIELD_U16(a1, 6344) = 24;
    }
  }
}
