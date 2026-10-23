/* sead__Thread__ctor
 * address: 0x60908108   size: 440   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__Thread__ctor(int a1, _DWORD *a2, void *a3, int a4, int a5, int a6, unsigned int a7, int a8)
{
  int v12; // r0
  int v13; // r5
  int v14; // r7
  int v15; // r6

  sead_IDisposer_ctor((sead_IDisposer *)a1);
  FIELD_U32(a1, 16) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 20) = a2[1];
  *(_DWORD *)a1 = off_60C5CDC8;
  FIELD_U32(a1, 24) = &off_60C5CE1C;
  sub_60912E1C(a1 + 28);
  FIELD_U32(a1, 80) = a7;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 96) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 84) = 0;
  sub_608FACE4((_DWORD *)(a1 + 104));
  FIELD_U32(a1, 108) = a5;
  FIELD_U32(a1, 112) = a6;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = a4;
  FIELD_U32(a1, 92) = a1;
  sub_60912E2C(a1 + 28, a8, a3);
  FIELD_U32(a1, 132) = operator_new_8DE2C8(a7, (int)a3, 4096);
  v12 = operator_new_8DE25C(0x100u, a3, 4);
  FIELD_U32(a1, 128) = v12;
  nn__os__CreateThread_9AE840(v12, sub_609082D0);
  v13 = FIELD_U32(a1, 128);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  nn__os__SetThreadName(v13, a2[1]);
  v14 = sead__ThreadMgr__sInstance;
  if ( sead__ThreadMgr__sInstance )
  {
    sead__CriticalSection__lock(sead__ThreadMgr__sInstance + 32);
    v15 = FIELD_U32(a1, 96);
    if ( v15 )
    {
      FIELD_U32(a1, 96) = 0;
      sead__ListNode__erase((_DWORD *)(a1 + 84));
      --FIELD_U32(v15, 8);
    }
    FIELD_U32(a1, 96) = v14 + 20;
    sead__ListNode__insertFront((sead_ListNode *)(v14 + 20), (sead_ListNode *)(a1 + 84));
    ++FIELD_U32(v14, 28);
    sead__CriticalSection__unlock(v14 + 32);
  }
  return a1;
}
