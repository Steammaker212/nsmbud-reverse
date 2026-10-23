/* sub_60009EC0
 * address: 0x60009EC0   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60009EC0(sead_ListNode *a1)
{
  char v1; // r12
  sead_ListNode *next; // r5
  sead_ListNode *v4; // r7
  sead_ListNode *v5; // r4
  sead_ListNode *v6; // r0
  int i; // r10
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int *v11; // r5
  int v12; // r6
  char v13; // r12
  sead_ListNode *v14; // r4
  int result; // r0
  int j; // r6
  int k; // r5
  float v18; // s16
  int v19; // r0
  int v20; // r2
  bool v21; // zf
  int v22; // r0
  int v23; // r0
  int v24; // r7
  bool v25; // zf
  int v26; // r0
  int m; // r5
  int v28; // r0
  bool v29; // zf
  int v30; // r0
  sead_ListNode *v31; // [sp+14h] [bp-4Ch]
  sead_ListNode *v32; // [sp+18h] [bp-48h]

  next = a1[121].next;
  v4 = a1 + 121;
  if ( next != &a1[121] )
  {
    do
    {
      v5 = FIELD_U32(next, 0x4);
      sead__ListNode__erase(next);
      --a1[122].previous;
      next[-1].next = a1[122].next;
      v6 = (sead_ListNode *)((char *)next - 4);
      next = v5;
      a1[122].next = v6;
    }
    while ( v5 != v4 );
  }
  v31 = v4;
  v32 = a1;
  if ( ((unsigned int)&unk_60C7B440 & ~(1610653492 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C7B440) )
  {
    dword_60C7B444 = 497;
    dword_60C7B448 = 498;
    dword_60C7B44C = 492;
    dword_60C7B450 = 495;
    dword_60C7B454 = 496;
    dword_60C7B458 = 493;
    dword_60C7B45C = 494;
    _cxa_guard_release((__guard *)&unk_60C7B440);
  }
  for ( i = 0; i != 7; ++i )
  {
    v8 = ActorMgr__instance;
    v9 = FIELD_U32(ActorMgr__instance, 27172);
    v10 = *((_DWORD *)&unk_60C7B440 + i + 1);
    while ( 1 )
    {
      v11 = (int *)sub_60008598(v8, v10, v9);
      v12 = *v11;
      if ( ((unsigned int)&dword_60C7B428 & ~(1610653824 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B428) )
      {
        dword_60C7B424 = (int)&off_60BC04AC;
        _cxa_guard_release(&dword_60C7B428);
      }
      if ( !v12 || (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C7B424) != 1 )
        break;
      if ( !FIELD_U8(v12, 8480) && !FIELD_U8(v12, 6136) )
      {
        v14 = v32[122].next;
        if ( v14 )
          v32[122].next = FIELD_U32(v14, 0x0);
        else
          v14 = 0;
        FIELD_U32(v14, 0x0) = 0;
        FIELD_U32(v14, 0x4) = 0;
        v14[1].previous = 0;
        sead__ListNode__insertFront(v4, (sead_ListNode *)&FIELD_U32(v14, 0x4));
        ++v32[122].previous;
        FIELD_U32(v14, 0x0) = (sead_ListNode *)v12;
      }
      v9 = (int)(v11 + 1);
      v10 = *((_DWORD *)&unk_60C7B440 + i + 1);
      v8 = ActorMgr__instance;
    }
  }
  result = (int)v32[122].previous;
  if ( result >= 1 )
  {
    for ( j = 0; j < result; ++j )
    {
      for ( k = j; k < result; ++k )
      {
        v23 = sub_608DE61C(v31, j);
        v24 = v23;
        if ( v23 )
        {
          v26 = v23 - 4;
          v25 = v24 == 4;
          if ( v24 != 4 )
          {
            v26 = *(_DWORD *)v26;
            v25 = v26 == 0;
          }
          if ( !v25 && !FIELD_U8(v26, 8480) )
          {
            v18 = FIELD_F32(v26, 112);
            v19 = sub_608DE61C(v31, k);
            v20 = v19;
            if ( v19 )
            {
              v22 = v19 - 4;
              v21 = v20 == 4;
              if ( v20 != 4 )
              {
                v22 = *(_DWORD *)v22;
                v21 = v22 == 0;
              }
              if ( !v21 && !FIELD_U8(v22, 8480) && FIELD_F32(v22, 112) < v18 )
                sub_608DE6F4(v31, v24);
            }
          }
        }
        result = (int)v32[122].previous;
      }
    }
    if ( result >= 1 )
    {
      for ( m = 0; m < result; ++m )
      {
        v28 = sub_608DE61C(v31, m);
        if ( v28 )
        {
          v30 = v28 - 4;
          v29 = v30 == 0;
          if ( v30 )
          {
            v30 = *(_DWORD *)v30;
            v29 = v30 == 0;
          }
          if ( !v29 )
            FIELD_F32(v30, 116) = (float)((float)m * -32.0) + 1500.0;
        }
        result = (int)v32[122].previous;
      }
    }
  }
  return result;
}
