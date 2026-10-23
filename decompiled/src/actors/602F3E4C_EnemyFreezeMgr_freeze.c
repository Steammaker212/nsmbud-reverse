/* EnemyFreezeMgr_freeze
 * address: 0x602F3E4C   size: 472   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall EnemyFreezeMgr_freeze(EnemyFreezeMgr *this, void *info, unsigned int count)
{
  unsigned int count_; // r4
  signed int result; // r0
  int v6; // r0
  int v7; // r0
  _UNKNOWN **iceActors; // r10
  char *v9; // r8
  Actor *iceActor; // r11
  char v11; // r12
  int defaultSettings; // [sp+1Ch] [bp-54h]
  ActorBuildInfo buildInfo; // [sp+20h] [bp-50h] BYREF

  count_ = count;
  result = 0;
  if ( count - 1 > 0xB )
    return result;
  v6 = (unsigned __int8)FIELD_U8(this, 0x34);
  defaultSettings = ((unsigned __int8)FIELD_U8(this, 0x48) << 24) & 0xF000000;
  if ( v6 == 2 )
  {
    v7 = defaultSettings | 0x10000000;
    goto LABEL_6;
  }
  if ( v6 == 4 )
  {
    v7 = defaultSettings | 0x100;
LABEL_6:
    defaultSettings = v7;
  }
  FIELD_U8(this, 0x0) = count;
  result = 1;
  if ( count >= 0xC )
    count_ = 12;
  if ( count_ )
  {
    iceActors = FIELD_U32(this, 0x4);
    v9 = (char *)info + 0x1C;
    do
    {
      memset(&buildInfo.settings2, 0, 40);
      buildInfo.settings1 = *((_DWORD *)v9 - 7) | defaultSettings;
      buildInfo.parentId = FIELD_U32(FIELD_U32(this, 0x3C), 0x8);
      buildInfo.profile = Profile__get(0x188u);
      buildInfo.position = *(Vec3 *)(v9 - 2);
      iceActor = (Actor *)ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
      if ( ((unsigned int)&dword_60C7B39C & ~(1613709216 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
      {
        dword_60C7B398 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C7B39C);
      }
      if ( iceActor )
      {
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(iceActor, 0x0))(iceActor, &dword_60C7B398) == 1 )
        {
          IceActor_setScale((int)iceActor, (float *)v9 - 3);
          *iceActors = (_UNKNOWN *)FIELD_U32(iceActor, 0x8);
        }
      }
      ++iceActors;
      --count_;
      v9 += 32;
    }
    while ( count_ );
    return 1;
  }
  return result;
}
