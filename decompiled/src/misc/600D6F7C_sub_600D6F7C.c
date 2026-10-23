/* sub_600D6F7C
 * address: 0x600D6F7C   size: 668   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600D6F7C(int a1)
{
  unsigned int v2; // r1
  unsigned int *v3; // r6
  int v4; // r5
  char v5; // r12
  char v6; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  char v8; // r12
  int v9; // r5

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  v3 = (unsigned int *)(a1 + 8156);
  v2 = FIELD_U32(a1, 8156);
  if ( !v2 )
  {
    v4 = *(_DWORD *)sub_60008598(ActorMgr__instance, 126, FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C7B364 & ~(1611493340 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) != 1 )
      goto LABEL_13;
    if ( ((unsigned int)dword_60C84744 & ~(1611493456 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C84744) )
    {
      dword_60C84740 = (int)&off_60BC00E0;
      _cxa_guard_release(dword_60C84744);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C84740) == 1 )
    {
      v2 = FIELD_U32(v4, 8);
      *v3 = v2;
      if ( !v2 )
        return;
    }
    else
    {
LABEL_13:
      v2 = *v3;
      if ( !*v3 )
        return;
    }
  }
  v7 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611493624 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v9 = (**v7)(v7, &StageActor_RTTI);
    if ( v9 )
      v9 = (int)v7;
  }
  else
  {
    v9 = 0;
  }
  if ( ((unsigned int)dword_60C84744 & ~(1611493752 << v8) & 1) == 0 && _cxa_guard_acquire(dword_60C84744) )
  {
    dword_60C84740 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C84744);
  }
  if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &dword_60C84740) == 1 )
  {
    if ( FIELD_U8(v9, 6140) )
    {
      FIELD_U8(a1, 8160) = 1;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C845F8);
    }
  }
}
