/* sub_603C8814
 * address: 0x603C8814   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_603C8814(_DWORD *a1)
{
  int v2; // r5
  void *v3; // r5
  _DWORD *v4; // r4

  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[2971] = 3;
  a1[2967] = -1;
  a1[2968] = -1;
  a1[2969] = 0;
  if ( a1[1575] == 1 )
  {
    a1[2966] = -1;
  }
  else
  {
    v2 = **(_DWORD **)(a1[1577] + 20);
    a1[2966] = 3;
    TexAnim_play(v2, a1[1576], &dword_60C98B14);
    AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), dword_60C98B1C);
    if ( (float)(FIELD_F32(v2, 24) * 0.0) < 0.0 )
      sub_6041838C((ModelAnimation *)(v2 + 4));
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 20) = 0x40000000;
    FIELD_U32(v2, 28) |= 2u;
  }
  v3 = (void *)(dword_60C9CF0C + 1340);
  a1[2979] = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 1;
  v4 = a1 + 2979;
  v4[1] = ((3342336 * (unsigned __int64)sead__Random__getU32(v3)) >> 32) + 6291456;
  v4[2] = ((3342336 * (unsigned __int64)sead__Random__getU32(v3)) >> 32) | 0x800000;
  v4[8] = sead__Random__getU32(v3) & 1;
  v4[9] = *v4;
  v4[5] = 180;
  v4[6] = 0;
  v4[7] = 0;
  *(v4 - 1) = 6;
  *(v4 - 14) = 0;
  *((_BYTE *)v4 - 5860) = 1;
  return ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(v4 + 1357));
}
