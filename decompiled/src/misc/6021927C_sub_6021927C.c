/* sub_6021927C
 * address: 0x6021927C   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021927C(_DWORD *a1)
{
  char v1; // r12
  int v3; // r0
  int v4; // r0
  int v5; // r0
  char v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int result; // r0

  v3 = a1[4];
  if ( v3 )
  {
    v4 = v3 - 1;
    a1[4] = v4;
    if ( v4 == 60 )
    {
      v5 = a1[5];
      v6 = v5 + 1;
      if ( v5 > 10 )
        v6 = 0;
      v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[7]);
      if ( v7 && ((0xA4Au >> v6) & 1) == 0 )
        FIELD_U8(v7, 534) = 1;
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[8]);
      if ( v8 && ((0x552u >> v6) & 1) == 0 )
        FIELD_U8(v8, 534) = 1;
      v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[9]);
      if ( v9 && ((0x495u >> v6) & 1) == 0 )
        FIELD_U8(v9, 534) = 1;
      v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[10]);
      if ( v10 && ((0x2A9u >> v6) & 1) == 0 )
        FIELD_U8(v10, 534) = 1;
    }
  }
  else
  {
    v11 = a1[5];
    v12 = v11 + 1;
    if ( v11 > 10 )
      v12 = 0;
    a1[5] = v12;
    v13 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[7]);
    if ( v13 )
    {
      if ( ((0xA4Au >> a1[5]) & 1) != 0 )
        sub_602187D4(v13);
      else
        sub_602187C8(v13);
    }
    v14 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[8]);
    if ( v14 )
    {
      if ( ((0x552u >> a1[5]) & 1) != 0 )
        sub_602187D4(v14);
      else
        sub_602187C8(v14);
    }
    v15 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[9]);
    if ( v15 )
    {
      if ( ((0x495u >> a1[5]) & 1) != 0 )
        sub_602187D4(v15);
      else
        sub_602187C8(v15);
    }
    v16 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[10]);
    if ( v16 )
    {
      if ( ((0x2A9u >> a1[5]) & 1) != 0 )
        sub_602187D4(v16);
      else
        sub_602187C8(v16);
    }
    a1[4] = 180;
  }
  if ( ((unsigned int)&dword_60C8D3F4 & ~(1612813492 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D3F4) )
  {
    dword_60C8D3F8 = -997539840;
    unk_60C8D3FC = 0;
    unk_60C8D400 = 1156087808;
    _cxa_guard_release(&dword_60C8D3F4);
  }
  result = a1[6];
  if ( result < 0 )
  {
    result = sub_601E4EA4(dword_60C8B13C, 71, 0, (int)&dword_60C8D3F8, 1);
    a1[6] = result;
  }
  return result;
}
