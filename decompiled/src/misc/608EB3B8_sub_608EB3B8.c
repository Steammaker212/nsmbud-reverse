/* sub_608EB3B8
 * address: 0x608EB3B8   size: 768   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB3B8(int a1)
{
  __int64 v2; // r4
  float v3; // s16
  __int64 v4; // r0
  __int64 v5; // r2
  __int64 v6; // kr00_8
  int v7; // r8
  void (__fastcall *v8)(_DWORD); // r1
  unsigned int v9; // r5
  __int64 v10; // r6
  unsigned int v11; // r5
  __int64 v12; // kr08_8
  void (__fastcall *v13)(int); // r1
  _QWORD v15[6]; // [sp+0h] [bp-30h] BYREF

  if ( (FIELD_U8(a1, 346) & 3) == 3 )
  {
    v2 = FIELD_U64(a1, 168);
    v3 = (float)FIELD_U32(a1, 80);
    nn__os__GetSystemTick((nn__os *)v15);
    v4 = (__int64)(float)((float)qword_60CCFB50 * (float)((float)(v3 * 0.5) / 60.0)) + v2 - v15[0];
    if ( v4 >= 1 )
      LODWORD(v4) = sub_609085CC(v4, HIDWORD(v4), (unsigned __int64)(v4 - 1) >> 32, HIDWORD(v15[0]));
  }
  else
  {
    if ( FIELD_U8(a1, 347) )
    {
      if ( !FIELD_U8(a1, 345) )
      {
        v5 = qword_60CCFB50 % 1000;
        v6 = qword_60CCFB50 / 1000;
        do
          sub_609085CC(v6, HIDWORD(v6), v5, HIDWORD(v5));
        while ( !FIELD_U8(a1, 345) );
      }
      v7 = dword_60CCF464 + 236;
      sead__CriticalSection__lock(dword_60CCF464 + 236);
      v8 = *(void (__fastcall **)(_DWORD))(a1 + 220);
      if ( v8 )
        v8(0);
      if ( FIELD_U32(a1, 40) == 2 )
      {
        sub_608F1B60(FIELD_U32(a1, 216));
      }
      else
      {
        nn__os__WaitSystemEvent(a1 + 312);
        v11 = FIELD_U32(a1, 80);
        if ( v11 >= 2 )
        {
          nn__os__GetSystemTick((nn__os *)v15);
          v12 = (__int64)(float)((float)(0.99 / (float)(60.0 / (float)v11)) * (float)qword_60CCFB50);
          while ( v15[0] - FIELD_U64(a1, 168) < v12 )
          {
            nn__os__WaitSystemEvent(a1 + 312);
            nn__os__GetSystemTick((nn__os *)v15);
          }
        }
      }
      dword_60CC79F0(FIELD_U32(a1, 288), dword_60CC79F0, -1, -1, v15[0]);
      v13 = *(void (__fastcall **)(int))(a1 + 220);
      if ( v13 )
        v13(1);
      sead__CriticalSection__unlock(v7);
    }
    else if ( FIELD_U32(a1, 80) )
    {
      nn__os__WaitSystemEvent(a1 + 312);
      v9 = FIELD_U32(a1, 80);
      if ( v9 >= 2 )
      {
        nn__os__GetSystemTick((nn__os *)v15);
        v10 = (__int64)(float)((float)(0.99 / (float)(60.0 / (float)v9)) * (float)qword_60CCFB50);
        while ( v15[0] - FIELD_U64(a1, 168) < v10 )
        {
          nn__os__WaitSystemEvent(a1 + 312);
          nn__os__GetSystemTick((nn__os *)v15);
        }
      }
    }
    sub_608F1BFC(FIELD_U32(a1, 216));
    LODWORD(v4) = FIELD_U8(a1, 111);
    if ( FIELD_U8(a1, 111) )
      LODWORD(v4) = sub_608F2924(dword_60CCF464);
  }
  return v4;
}
