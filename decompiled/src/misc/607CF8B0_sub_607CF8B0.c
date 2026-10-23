/* sub_607CF8B0
 * address: 0x607CF8B0   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF8B0(_DWORD *a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD *v4; // r6
  int v5; // r5
  int result; // r0

  a1[2855] = *((char *)a1 + 84);
  a1[309] |= 0x4000000u;
  a1[2856] = a1[20];
  a1[2862] = 0;
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[2839]);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618802972 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
    {
      v4 = *(_DWORD **)(v2 + 620);
      if ( v4 )
      {
        v4[2] = a1[2];
        v5 = *((char *)a1 + 84);
        (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 68))(a1, a1[2855]);
        (*(void (__fastcall **)(_DWORD *, _DWORD *))(*v4 + 20))(v4, a1);
        if ( (int)a1[2866] >= 5 || *((_BYTE *)a1 + 11468) )
          (*(void (__fastcall **)(_DWORD *, int))(*a1 + 624))(a1, 7);
        (*(void (__fastcall **)(_DWORD *, int))(*a1 + 68))(a1, v5);
      }
    }
  }
  sub_607D0F8C(a1);
  *(_DWORD *)(a1[2842] + 208) |= 0x40u;
  SE_VOC_YS_EAT_ref(a1, 1);
  result = a1[2866];
  if ( result < 5 )
  {
    result = *((unsigned __int8 *)a1 + 11468);
    if ( !*((_BYTE *)a1 + 11468) )
    {
      a1[161] = 5;
      return 5;
    }
  }
  return result;
}
