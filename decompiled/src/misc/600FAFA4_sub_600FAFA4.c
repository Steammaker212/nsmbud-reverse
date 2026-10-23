/* sub_600FAFA4
 * address: 0x600FAFA4   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600FAFA4(int a1)
{
  _BYTE *v2; // r9
  _DWORD *v3; // r6
  unsigned int v4; // r5
  int v5; // r7
  int v6; // r0
  unsigned int v7; // r5
  int v8; // r7
  int v9; // r0
  signed int result; // r0
  unsigned int v11; // r5
  int v12; // r7
  int v13; // [sp+0h] [bp-28h] BYREF
  int target[9]; // [sp+4h] [bp-24h] BYREF

  v2 = (_BYTE *)(a1 + 6104);
  v3 = (_DWORD *)(a1 + 6112);
  if ( FIELD_U8(a1, 6171) )
  {
    v4 = FIELD_U32(a1, 6156);
    if ( v4 <= 3 )
    {
      v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32);
      if ( v5 )
      {
        if ( *v3 == v4
          || !*v2
          && PlayerMgr_hasPlayer(PlayerMgr_instance, FIELD_U32(a1, 6156)) == 1
          && (v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v4 + 32)) != 0
          && !sub_6075EDF8(v6) )
        {
          v13 = 35791394;
          target[0] = 0;
          moveValueTo((int *)(a1 + 6176), target, &v13);
          FIELD_U32(v5, 160) = FIELD_U32(a1, 6176);
        }
      }
    }
  }
  if ( FIELD_U8(a1, 6172) )
  {
    v7 = FIELD_U32(a1, 6160);
    if ( v7 <= 3 )
    {
      v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
      if ( v8 )
      {
        if ( *v3 == v7
          || !*v2
          && PlayerMgr_hasPlayer(PlayerMgr_instance, FIELD_U32(a1, 6160)) == 1
          && (v9 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32)) != 0
          && !sub_6075EDF8(v9) )
        {
          v13 = 35791394;
          target[0] = 0;
          moveValueTo((int *)(a1 + 6180), target, &v13);
          FIELD_U32(v8, 160) = FIELD_U32(a1, 6180);
        }
      }
    }
  }
  result = FIELD_U8(a1, 6173);
  if ( FIELD_U8(a1, 6173) )
  {
    result = 6164;
    v11 = FIELD_U32(a1, 6164);
    if ( v11 <= 3 )
    {
      result = PlayerMgr_instance;
      v12 = *(_DWORD *)(PlayerMgr_instance + 4 * v11 + 32);
      if ( v12 )
      {
        if ( *v3 == v11
          || !*v2
          && (result = PlayerMgr_hasPlayer(PlayerMgr_instance, FIELD_U32(a1, 6164)), result == 1)
          && (result = *(_DWORD *)(PlayerMgr_instance + 4 * v11 + 32)) != 0
          && (result = sub_6075EDF8(result)) == 0 )
        {
          v13 = 35791394;
          target[0] = 0;
          moveValueTo((int *)(a1 + 6184), target, &v13);
          result = FIELD_U32(a1, 6184);
          FIELD_U32(v12, 160) = result;
        }
      }
    }
  }
  return result;
}
