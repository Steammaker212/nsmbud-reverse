/* sub_6035FD70
 * address: 0x6035FD70   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6035FD70(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int owner; // r4
  StageActor *v7; // r9
  unsigned int v8; // r1
  Actor *v9; // r0
  int ProfileId; // r0
  char v11; // r12
  int v12; // r5
  int v13; // r6

  owner = (int)FIELD_U32(a3, 0x40);
  v7 = FIELD_U32(a2, 0x40);
  if ( FIELD_U32(a3, 0x8C) == 9 )
  {
    if ( Actor__getProfileId(&FIELD_U32(a3, 0x40)) == 392 )
    {
      v8 = sub_602EF2C8(owner);
      if ( !v8 )
        goto LABEL_7;
      v9 = (Actor *)ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
      ProfileId = Actor__getProfileId(v9);
      if ( ProfileId == 816 || ProfileId == 818 || !SE_EMY_DOWN_ref_3BF62C(a1, a2, a3) )
        goto LABEL_7;
    }
    else if ( !SE_EMY_DOWN_ref_3BF62C(a1, a2, a3) )
    {
      goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  if ( Actor__getProfileId((Actor *)owner) != 392 )
    return Enemy__vf100(a1, a2, a3);
  if ( ((unsigned int)&dword_60C7B39C & ~(1614151252 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  v12 = 0;
  v13 = 0;
  if ( owner )
  {
    v13 = (**(int (__fastcall ***)(int, int *))owner)(owner, &dword_60C7B398);
    if ( v13 )
      v13 = owner;
  }
  if ( FIELD_F32(v7, 0x6C) > FIELD_F32(owner, 108) )
    v12 = 1;
  sub_602EE7B8(v13, v12, 0xFFFFFFFF);
  sub_602EE940(v13);
  return 1;
}
