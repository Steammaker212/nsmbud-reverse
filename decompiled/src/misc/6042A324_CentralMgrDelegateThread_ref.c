/* CentralMgrDelegateThread_ref
 * address: 0x6042A324   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall CentralMgrDelegateThread_ref(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[8]; // [sp+18h] [bp-20h] BYREF

  *a1 = off_60BFA528;
  sub_6042C574(a1 + 6);
  *((_BYTE *)a1 + 720) = 0;
  memset(a1 + 181, 0, 340);
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 187));
  a1[197] = 0;
  a1[198] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 201));
  a1[211] = 0;
  a1[212] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 215));
  a1[225] = 0;
  a1[226] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 229));
  a1[239] = 0;
  a1[240] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 243));
  a1[253] = 0;
  a1[254] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 257));
  a1[266] = 0;
  a1[267] = 0;
  a1[268] = 0;
  a1[269] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 270));
  a1[279] = 0;
  a1[281] = a1;
  a1[282] = sub_6042A53C;
  a1[283] = 0;
  a1[280] = off_60BFA53C;
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "CentralMgrDelegateThread";
  sub_6090891C(a1 + 284, v4, a1 + 280, 0, dword_60C9C100, 1, 0x7FFFFFFF, 0x10000, 32);
  a1[321] = a1 + 325;
  a1[322] = 32;
  a1[323] = 0;
  a1[324] = 0;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 357));
  memset(a1 + 366, 0, 48);
  a1[378] = -1072902963;
  a1[379] = 0;
  a1[380] = 1036831949;
  a1[381] = 1034281812;
  a1[382] = 1036831949;
  sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v2 = operator_new(0x15B0u);
  a1[181] = sub_6042EBB8(v2);
  a1[182] = 0;
  a1[196] = 0;
  a1[210] = 0;
  a1[224] = 0;
  a1[238] = 0;
  a1[252] = 0;
  v4[0] = 2;
  sub_60908478(a1 + 284, v4);
  sub_609085F8(a1 + 284);
  return a1;
}
