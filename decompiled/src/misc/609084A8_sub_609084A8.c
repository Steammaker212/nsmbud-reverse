/* sub_609084A8
 * address: 0x609084A8   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609084A8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  _DWORD *v4; // r5
  void *v5; // r0
  void *v6; // r0

  *a1 = off_60C5CDC8;
  a1[6] = &off_60C5CE1C;
  v2 = sead__ThreadMgr__sInstance;
  if ( sead__ThreadMgr__sInstance )
  {
    if ( *(_DWORD **)(sead__ThreadMgr__sInstance + 68) != a1 )
    {
      sead__CriticalSection__lock(sead__ThreadMgr__sInstance + 32);
      if ( a1[24] )
      {
        a1[24] = 0;
        sead__ListNode__erase(a1 + 21);
        --FIELD_U32(v2, 28);
      }
      sead__CriticalSection__unlock(v2 + 32);
      v3 = a1[30];
      if ( (unsigned int)(v3 - 2) >= 2 )
      {
        if ( v3 == 1 )
          (*(void (__fastcall **)(_DWORD *, _DWORD))(*a1 + 40))(a1, 0);
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
      }
      nn__os__DestroyThread(a1[32]);
      v5 = (void *)a1[32];
      if ( v5 )
        operator_delete(v5);
      v6 = (void *)a1[33];
      if ( v6 )
        operator_delete_8DE3FC(v6);
    }
    v4 = a1 + 7;
    sub_60912E7C(a1 + 7);
  }
  else
  {
    v4 = a1 + 7;
  }
  nullsub_1366(v4);
  return sead__IDisposer__dtor(a1);
}
