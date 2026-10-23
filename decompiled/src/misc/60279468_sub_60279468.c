/* sub_60279468
 * address: 0x60279468   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60279468(int a1, float a2)
{
  int v3; // r0
  int *v4; // r1
  bool v5; // cc
  int result; // r0
  float v7; // s0
  unsigned int v8; // r0
  int v9; // r5
  int Area; // r0
  int v11; // r1
  float v12; // s10
  int v13; // r1
  float v14; // s10
  int v15; // r1
  float v16; // s10
  int v17; // r1
  float v18; // s10
  float v19; // [sp+0h] [bp-20h] BYREF
  float v20; // [sp+4h] [bp-1Ch]
  float v21; // [sp+8h] [bp-18h]
  float v22; // [sp+Ch] [bp-14h]

  v4 = (int *)(a1 + 8548);
  v3 = FIELD_U32(a1, 8548);
  v5 = v3 <= 1;
  result = v3 - 1;
  *v4 = result;
  if ( !v5 )
    return result;
  v7 = CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  result = FIELD_U32(a1, 2872);
  if ( (result & 1) != 0 || (result & 0x10400) == 0x400 || (result & 0x440000) != 0 && (result & 0x10000000) == 0 )
    return result;
  if ( (result & 0x880000) != 0 )
  {
    result &= 0x20000000u;
    if ( !result )
      return result;
  }
  v8 = FIELD_U32(a1, 20);
  if ( (v8 & 1) != 0 )
    return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v7);
  if ( !HIBYTE(v8) )
  {
    result = ((int (__fastcall *)(int, float))loc_6027C218)(a1, v7);
    if ( result != 1 )
      return result;
    return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v7);
  }
  v9 = HIBYTE(v8);
  v19 = 3.4028e38;
  v20 = 3.4028e38;
  v21 = -3.4028e38;
  v22 = -3.4028e38;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  LevelArea_getLocation(Area, &v19, v9);
  result = PlayerMgr_instance;
  v11 = FIELD_U32(PlayerMgr_instance, 48);
  if ( v11 )
  {
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v11, 84))) != 0 )
    {
      v12 = FIELD_F32(v11, 112);
      if ( v12 <= v22 && v19 <= FIELD_F32(v11, 108) && FIELD_F32(v11, 108) <= v21 && v20 <= v12 )
        return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v22);
    }
  }
  v13 = FIELD_U32(PlayerMgr_instance, 52);
  if ( v13 )
  {
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v13, 84))) != 0 )
    {
      v14 = FIELD_F32(v13, 112);
      if ( v14 <= v22 && v19 <= FIELD_F32(v13, 108) && FIELD_F32(v13, 108) <= v21 && v20 <= v14 )
        return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v22);
    }
  }
  v15 = FIELD_U32(PlayerMgr_instance, 56);
  if ( v15 )
  {
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v15, 84))) != 0 )
    {
      v16 = FIELD_F32(v15, 112);
      if ( v16 <= v22 && v19 <= FIELD_F32(v15, 108) && FIELD_F32(v15, 108) <= v21 && v20 <= v16 )
        return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v22);
    }
  }
  v17 = FIELD_U32(PlayerMgr_instance, 60);
  if ( v17 )
  {
    result = FIELD_U16(PlayerMgr_instance, 66) & (1 << FIELD_U8(v17, 84));
    if ( (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v17, 84))) != 0 )
    {
      v18 = FIELD_F32(v17, 112);
      result = v20 <= v18;
      if ( v18 <= v22 )
      {
        result = (v19 <= FIELD_F32(v17, 108) && FIELD_F32(v17, 108) <= v21) & (unsigned __int8)result;
        if ( result )
          return (*(int (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EE58, v22);
      }
    }
  }
  return result;
}
