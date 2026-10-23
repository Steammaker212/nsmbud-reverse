/* sub_608C4168
 * address: 0x608C4168   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C4168(int a1, int a2)
{
  int v4; // r9
  char *v5; // r7
  char *v6; // r0
  const void *v7; // r8
  char *v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r6
  int v13; // r4
  int v14; // r0
  void *v15; // r0
  void *v16; // r0
  int v17; // r1
  int v18; // r0
  int v19; // r5
  int v20; // r4
  int v21; // r4
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  void *v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r4
  void *v31; // r0
  bool v32; // zf
  nn__audio__PerformanceInfo *v33; // r0
  int v34; // r0
  int result; // r0
  _BYTE v36[20]; // [sp+Ch] [bp-4Ch] BYREF
  _DWORD v37[2]; // [sp+20h] [bp-38h] BYREF
  __int64 v38; // [sp+28h] [bp-30h] BYREF

  v4 = a1 + 476;
  nn__os__LockMutex(a1 + 476);
  v5 = (char *)sub_608065A0();
  if ( FIELD_U8(a1, 604) )
  {
    v6 = (char *)sub_608065A0();
    nn__os__LockMutex(v6 + 1408);
    v7 = (const void *)nn__audio__SetPerformanceFrameBuffer(
                         v5 + 12,
                         *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 600) + 584),
                         FIELD_U32(a1, 596));
    v8 = (char *)sub_608065A0();
    nn__os__UnlockMutex(v8 + 1408);
    v9 = FIELD_U32(a1, 600);
    v10 = v9 + 1;
    if ( v9 > 1 )
      v10 = 0;
    FIELD_U32(a1, 600) = v10;
  }
  else
  {
    v7 = 0;
  }
  nn__os__GetSystemTick((nn__os *)&v38);
  nn__os__LockMutex(a1 + 496);
  v11 = FIELD_U32(a1, 520);
  v12 = a1 + 516;
  if ( v11 != a1 + 516 )
  {
    do
    {
      v13 = FIELD_U32(v11, 4);
      (*(void (**)(void))(*(_DWORD *)(v11 - 4) + 8))();
      v11 = v13;
    }
    while ( v13 != v12 );
  }
  v14 = sub_608CAEDC(v11);
  if ( a2 )
    sub_608CB2B8(v14);
  else
    sub_608CB2E8(v14);
  do
    v15 = sub_608C3B98();
  while ( sub_608C2D24((int)v15) );
  do
    v16 = sub_608C3B10();
  while ( sub_608C2D24((int)v16) );
  v18 = FIELD_U32(a1, 528);
  v19 = a1 + 524;
  if ( v18 != a1 + 524 )
  {
    if ( a2 )
    {
      do
      {
        v20 = FIELD_U32(v18, 4);
        (*(void (**)(void))(*(_DWORD *)(v18 - 4) + 8))();
        v18 = v20;
      }
      while ( v20 != v19 );
    }
    else
    {
      do
      {
        v21 = FIELD_U32(v18, 4);
        (*(void (**)(void))(*(_DWORD *)(v18 - 4) + 12))();
        v18 = v21;
      }
      while ( v21 != v19 );
    }
  }
  v22 = sub_608C7FF0(v18, v17);
  if ( a2 )
  {
    v23 = sub_608C83E4(v22);
    v24 = sub_608CAEDC(v23);
    sub_608CB324(v24);
  }
  else
  {
    v25 = sub_608C8444(v22);
    v26 = sub_608CAEDC(v25);
    sub_608CB37C(v26);
  }
  nn__os__UnlockMutex(a1 + 496);
  v27 = sub_608065A0();
  v28 = sub_608B661C((int)v27);
  sub_608C6D14(v28);
  nn__os__LockMutex(a1 + 496);
  v29 = FIELD_U32(a1, 520);
  if ( v29 != v12 )
  {
    do
    {
      v30 = FIELD_U32(v29, 4);
      (*(void (**)(void))(*(_DWORD *)(v29 - 4) + 12))();
      v29 = v30;
    }
    while ( v30 != v12 );
  }
  nn__os__UnlockMutex(a1 + 496);
  if ( FIELD_U32(a1, 532) )
    (*(void (__fastcall **)(_DWORD))(a1 + 532))(FIELD_U32(a1, 536));
  v31 = sub_608065A0();
  sub_608B547C((int)v31);
  nn__os__UnlockMutex(v4);
  nn__os__GetSystemTick((nn__os *)v37);
  v32 = v7 == 0;
  if ( v7 )
    v32 = FIELD_U8(a1, 604) == 0;
  if ( !v32 )
  {
    v33 = (nn__audio__PerformanceInfo *)nn__audio__PerformanceInfo__ctor((nn__audio__PerformanceInfo *)v36);
    if ( nn__audio__PerformanceInfo__SetBuffer(v33, v7, FIELD_U32(a1, 596)) == 1 )
    {
      do
        sub_608C4410(
          a1,
          v36,
          FIELD_U32(a1, 568),
          FIELD_U32(a1, 572),
          FIELD_U32(a1, 576),
          FIELD_U32(a1, 580),
          0);
      while ( nn__audio__PerformanceInfo__MoveToNextFrame((nn__audio__PerformanceInfo *)v36) );
    }
    v34 = FIELD_U32(a1, 624);
    if ( v34 )
      sub_608D291C(v34, v7, FIELD_U32(a1, 596), HIDWORD(v38), v38, HIDWORD(v38));
    nn__audio__PerformanceInfo__dtor((nn__audio__PerformanceInfo *)v36);
  }
  FIELD_U64(a1, 568) = v38;
  result = v37[0];
  FIELD_U32(a1, 580) = v37[1];
  FIELD_U32(a1, 576) = result;
  return result;
}
