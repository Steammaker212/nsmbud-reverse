/* sub_606AA628
 * address: 0x606AA628   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606AA628(int a1)
{
  char v2; // r4
  int *v3; // r7
  int result; // r0
  int *v5; // r5
  int v6; // [sp+4h] [bp-5Ch] BYREF
  _BYTE v7[88]; // [sp+8h] [bp-58h] BYREF

  memset(v7, 0, 64);
  v6 = 0;
  v2 = sub_606BAB1C(v7, &v6, a1 + 6248);
  v3 = (int *)(a1 + 6632);
  result = 6660;
  v5 = (int *)(a1 + 6660);
  if ( (v2 & 1) != 0 )
  {
    result = PlayerMgr_instance;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, 0);
      if ( result )
      {
        (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)result + 748))(
          result,
          1,
          0,
          2,
          5.0,
          FIELD_F32(result, 88));
        result = *v5;
        *v3 = *v5;
      }
    }
  }
  if ( (v2 & 2) != 0 )
  {
    result = PlayerMgr_instance;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 2) != 0 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, 1);
      if ( result )
      {
        (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)result + 748))(
          result,
          1,
          0,
          2,
          5.0,
          FIELD_F32(result, 88));
        result = *v5;
        *v3 = *v5;
      }
    }
  }
  if ( (v2 & 4) != 0 )
  {
    result = PlayerMgr_instance;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 4) != 0 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, 2);
      if ( result )
      {
        (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)result + 748))(
          result,
          1,
          0,
          2,
          5.0,
          FIELD_F32(result, 88));
        result = *v5;
        *v3 = *v5;
      }
    }
  }
  if ( (v2 & 8) != 0 )
  {
    result = PlayerMgr_instance;
    if ( (FIELD_U8(PlayerMgr_instance, 66) & 8) != 0 )
    {
      result = Player_getActorSlotChecked(PlayerMgr_instance, 3);
      if ( result )
      {
        (*(void (__fastcall **)(int, int, _DWORD, int, float, float))(*(_DWORD *)result + 748))(
          result,
          1,
          0,
          2,
          5.0,
          FIELD_F32(result, 88));
        result = *v5;
        *v3 = *v5;
      }
    }
  }
  return result;
}
