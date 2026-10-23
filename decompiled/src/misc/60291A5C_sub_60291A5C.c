/* sub_60291A5C
 * address: 0x60291A5C   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60291A5C(int a1)
{
  char v2; // r12
  int v3; // r3
  int result; // r0
  __guard *v5; // r0
  _BOOL4 v6; // r5
  int *v7; // r7
  int v8; // r1
  ActiveColliderMgr *v9; // r6
  ActiveColliderMgr *v10; // r6
  bool v11; // cc
  int speed[9]; // [sp+4h] [bp-24h] BYREF

  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 772))(a1) == 1 )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    v3 = 0x8000000;
    LOBYTE(result) = FIELD_U8(a1, 6740) + 1;
    if ( FIELD_U8(a1, 6740) % 0x14u > 0xA )
      v3 = -134217728;
    FIELD_U32(a1, 160) += v3;
    FIELD_U8(a1, 6740) = result;
    result = (unsigned __int8)result;
    if ( (unsigned __int8)result >= 0x1Fu )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F958);
  }
  else
  {
    if ( ((unsigned int)dword_60C8FA60 & ~(1613306696 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C8FA60) )
    {
      dword_60C8FA60[1] = 0;
      dword_60C8FA60[2] = 1065353216;
      dword_60C8FA6C = 0;
      dword_60C8FA70 = -1082130432;
      dword_60C8FA74 = 1065353216;
      dword_60C8FA78 = 0;
      dword_60C8FA7C = -1082130432;
      dword_60C8FA80 = 0;
      _cxa_guard_release(dword_60C8FA60);
    }
    v5 = &dword_60C8FA60[2 * FIELD_U32(a1, 6668)];
    FIELD_U32(a1, 120) = v5[1];
    FIELD_U32(a1, 124) = v5[2];
    FIELD_U32(a1, 128) = 0;
    sub_602918C0(a1);
    memset(speed, 0, 12);
    sub_60292D70(a1, speed);
    v6 = *(float *)speed < 0.0;
    FIELD_U32(a1, 80) = v6;
    speed[0] = 153354240;
    v7 = (int *)(a1 + 6664);
    result = FIELD_U32(a1, 6664);
    if ( result < 4 )
    {
      moveValueTo((int *)(a1 + 160), &dword_60C8F8E4[v6], speed);
      result = *v7;
    }
    else
    {
      FIELD_U32(a1, 160) += 153354240 * byte_60AFDF88[FIELD_U32(a1, 7524)];
    }
    v8 = result - 1;
    *v7 = result - 1;
    if ( result <= 19 )
    {
      FIELD_U8(a1, 6673) = 1;
      v9 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
        && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 6360)) )
      {
        ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 6360));
      }
      v10 = ActiveColliderMgr_instance;
      result = ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7164));
      if ( !result )
      {
        result = ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 7164));
        if ( !result )
          result = (int)ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 7164));
      }
      v8 = *v7;
    }
    v11 = v8 <= 10;
    if ( v8 <= 10 )
    {
      result = 6848;
      FIELD_U8(a1, 6848) = 1;
      v11 = v8 <= 0;
    }
    if ( v11 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F934);
  }
  return result;
}
