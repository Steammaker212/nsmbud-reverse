/* sub_6007C5E4
 * address: 0x6007C5E4   size: 1064   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6007C5E4(int a1)
{
  int v2; // r8
  int v3; // r5
  char v4; // r12
  float v5; // s16
  signed int hasPlayer; // r5
  int v7; // r9
  signed int v8; // r6
  float v9; // s16
  int (__fastcall ***v10)(_DWORD, int *); // r5
  char v11; // r12
  int v12; // r0
  int v13; // r3
  __int64 v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r0
  _BYTE *v20; // r4

  FIELD_U8(EnemyCounterMaybe_instance, 20) = 1;
  FIELD_U32(dword_60C99D88, 32) = 1;
  sub_6077A260(dword_60CBFA90);
  FIELD_U8(dword_60C9CF0C, 1393) = 1;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  v2 = dword_60CC6484;
  v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, *(_DWORD *)(ActorMgr__instance + 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611122316 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C81734) == 1 )
    FIELD_U32(a1, 6208) = FIELD_U32(v3, 108);
  v5 = FIELD_F32(a1, 6208);
  hasPlayer = PlayerMgr_hasPlayer(PlayerMgr_instance, 0);
  v7 = 1;
  v8 = PlayerMgr_hasPlayer(PlayerMgr_instance, 1u);
  if ( !hasPlayer )
    --v8;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) )
    ++v8;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) )
    ++v8;
  v9 = (float)(v5 + -112.0) + (float)((float)v8 * 12.0);
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) )
  {
    v7 = 0;
    FIELD_F32(a1, 6184) = v9;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) )
    FIELD_F32(a1, 6188) = v9 + (float)((float)(v7 ^ 1) * -24.0);
  else
    ++v7;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) )
    FIELD_F32(a1, 6192) = v9 + (float)((float)(2 - v7) * -24.0);
  else
    ++v7;
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1 )
    FIELD_F32(a1, 6196) = v9 + (float)((float)(3 - v7) * -24.0);
  v10 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6112));
  if ( ((unsigned int)&dword_60C81760 & ~(1611122840 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  if ( v10 && (**v10)(v10, &dword_60C8175C) )
    sub_60088D58(v10);
  v12 = FIELD_U8(a1, 539);
  if ( FIELD_U8(a1, 539) )
  {
    v13 = v12 - 33;
    HIDWORD(v14) = 1u >> (33 - v12);
    LODWORD(v14) = 1 << (v12 - 1);
    if ( v13 >= 0 )
    {
      HIDWORD(v14) = 1 << v13;
      LODWORD(v14) = 0;
    }
    *(_QWORD *)(EventMgr__instance + 16) &= ~v14;
  }
  FIELD_U32(a1, 6168) = 1075838976;
  FIELD_U32(a1, 6172) = 1050253722;
  v15 = (_DWORD *)PlayerMgr_instance;
  v16 = FIELD_U32(PlayerMgr_instance, 32);
  if ( v16 )
    FIELD_U32(v16, 1236) |= 2u;
  v17 = v15[9];
  if ( v17 )
    FIELD_U32(v17, 1236) |= 2u;
  v18 = v15[10];
  if ( v18 )
    FIELD_U32(v18, 1236) |= 2u;
  v19 = v15[11];
  if ( v19 )
    FIELD_U32(v19, 1236) |= 2u;
  FIELD_U32(a1, 6180) = FIELD_U32(v2, 256);
  FIELD_U8(a1, 6219) = 0;
  v20 = (_BYTE *)(a1 + 6219);
  v20[3] = 0;
  v20[2] = 0;
  v20[1] = 0;
  v20[4] = 0;
  *(_DWORD *)(v20 - 19) = 1;
  return 1;
}
