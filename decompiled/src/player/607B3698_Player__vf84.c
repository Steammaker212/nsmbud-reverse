/* Player__vf84
 * address: 0x607B3698   size: 596   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_607B3698(int a1)
{
  _DWORD *result; // r0
  int v3; // r0
  int v4; // r0
  float v5; // s0
  _DWORD *v6; // r4
  int v7; // [sp+4h] [bp-Ch] BYREF

  if ( FIELD_S8(dword_60C9CF0C, 1404) < 0 || FIELD_U8(dword_60C9CF0C, 1406) )
    FIELD_U32(a1, 15068) = 10;
  ((void (__fastcall *)(int))loc_60796004)(a1);
  sub_607AA784(a1);
  sub_6076F25C(a1);
  sub_6076F18C((_DWORD *)a1);
  sub_6076FDD8(a1);
  sub_607ADF60(a1);
  result = (_DWORD *)sub_607A293C(a1);
  if ( !result )
  {
    ((void (__fastcall *)(int))loc_6076617C)(a1);
    if ( (FIELD_U8(a1, 1204) & 8) == 0 )
    {
      sub_607BB7D8(a1);
      Player_setupRingNode_7B6D90(a1);
      (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11360) + 148))(FIELD_U32(a1, 11360));
      ((void (__fastcall *)(int))loc_6079D390)(a1);
    }
    sub_60773968((unsigned __int8 *)a1);
    sub_607B6B04(a1);
    sub_607BA4F4(a1);
    SE_SYS_STAR_FINISH_ref(a1);
    sub_6079B650(a1);
    v3 = sub_607C7184(a1);
    if ( v3 )
    {
      result = (_DWORD *)sub_60766708(v3);
      if ( result )
        return result;
    }
    else if ( sub_6076645C((StateMgr *)a1) == 1 )
    {
      JUMPOUT(0x6079F548);
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1052))(a1);
    sub_607965CC((unsigned __int8 *)a1);
    v4 = FIELD_U32(a1, 1228);
    if ( FIELD_F32(a1, 124) < 0.75 )
    {
      v4 &= ~0x200u;
      FIELD_U32(a1, 1228) = v4;
    }
    FIELD_U32(a1, 1248) = FIELD_U32(a1, 80);
    if ( (v4 & 0x600) == 0
      && (sub_60454C78(dword_60C9CF0C) || !FIELD_U8(a1, 825))
      && sub_607868D4(a1 + 688, &v7) == 1 )
    {
      FIELD_U32(a1, 80) = v7;
    }
    sub_60773F18(a1);
    sub_607A90F8((_DWORD *)a1);
    sub_607BA8E0(a1);
    sub_6079C470(a1);
    ((void (__fastcall *)(int))loc_6075EEA0)(a1);
    v5 = sub_60760110(a1);
    ((void (__fastcall *)(int, float))loc_6079F548)(a1, v5);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) == 1 )
      sub_60764FD8((_DWORD *)a1);
    ((void (__fastcall *)(int, _DWORD))loc_60799BA0)(a1, 0);
    sub_607612CC(a1, 1);
    sub_6076370C(a1);
    FIELD_U32(a1, 1236) |= 0x2000u;
    v6 = (_DWORD *)(a1 + 688);
    result = (_DWORD *)sub_60786C94((int)v6);
    if ( result == (_DWORD *)1 )
      return sub_6078667C(v6, 9);
  }
  return result;
}
