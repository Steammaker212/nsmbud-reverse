/* sub_6038D3B4
 * address: 0x6038D3B4   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6038D3B4(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r7
  StageActor *v8; // r4
  float *p_vtable; // r6
  int ProfileId; // r0
  char v11; // r12
  int v12; // r4
  int v13; // r5

  owner = FIELD_U32(a3, 0x40);
  v8 = FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C86B48 & ~(1614336988 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
  {
    dword_60C86B44 = (int)&off_60BD0CA4;
    _cxa_guard_release(&dword_60C86B48);
  }
  if ( v8 )
  {
    p_vtable = (float *)(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v8, 0x0).vtable)(v8, &dword_60C86B44);
    if ( p_vtable )
      p_vtable = (float *)&FIELD_U32(v8, 0x0).vtable;
  }
  else
  {
    p_vtable = 0;
  }
  ProfileId = Actor__getProfileId(&FIELD_U32(owner, 0x0));
  if ( ProfileId == 392 )
  {
    if ( ((unsigned int)&dword_60C7B39C & ~(1614337144 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    v12 = 0;
    v13 = 0;
    if ( owner )
    {
      v13 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B398);
      if ( v13 )
        v13 = (int)owner;
    }
    if ( p_vtable[27] >= (float)(FIELD_U32(owner, 0x6C).x + FIELD_U32(owner, 0x23C).x) )
      v12 = 1;
    sub_602EE7B8(v13, v12, 0xFFFFFFFF);
    sub_602EE940(v13);
    (*(void (__fastcall **)(float *, int *))(*(_DWORD *)p_vtable + 192))(p_vtable, &dword_60C98504);
  }
  else if ( ProfileId == 309 )
  {
    (*(void (__fastcall **)(StageActor *))(FIELD_U32(owner, 0x0).vtable + 104))(owner);
    FIELD_U32(owner, 0x0).isDeleted = 1;
    (*(void (__fastcall **)(float *, int *))(*(_DWORD *)p_vtable + 192))(p_vtable, &dword_60C98504);
  }
  return Enemy__vf100(a1, a2, a3);
}
