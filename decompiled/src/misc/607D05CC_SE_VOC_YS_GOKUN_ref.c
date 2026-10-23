/* SE_VOC_YS_GOKUN_ref
 * address: 0x607D05CC   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_YS_GOKUN_ref(unsigned __int8 *a1)
{
  unsigned int *v2; // r7
  int v3; // r5
  char v4; // r12
  int v5; // r5
  int v6; // r6
  int v7; // r5
  char v8; // r12
  int v9; // r0
  int v10; // r0
  int result; // r0

  v2 = (unsigned int *)(a1 + 11356);
  v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *((_DWORD *)a1 + 2839));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618806284 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1 )
    {
      v5 = FIELD_U32(v3, 620);
      if ( v5 )
      {
        v6 = (char)a1[84];
        (*(void (__fastcall **)(unsigned __int8 *, _DWORD))(*(_DWORD *)a1 + 68))(a1, *((_DWORD *)a1 + 2855));
        (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)v5 + 36))(v5, a1);
        (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 68))(a1, v6);
      }
    }
  }
  v7 = ActorMgrRelated_getById(ActorMgr__instance + 27168, *v2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618806512 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
    {
      v9 = FIELD_U32(v7, 620);
      if ( v9 )
      {
        FIELD_U32(v9, 8) = 0;
        FIELD_U32(v9, 12) = 0;
      }
    }
  }
  v10 = sub_607CBC00((int)a1);
  if ( v10 )
    FIELD_U32(v10, 324) = 0;
  *v2 = 0;
  sub_607734E8(a1, (int)"SE_VOC_YS_GOKUN", 0, 0);
  result = sub_607CBC00((int)a1);
  if ( result )
    FIELD_U32(result, 324) = 0;
  return result;
}
