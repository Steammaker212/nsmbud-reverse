/* sub_60732F4C
 * address: 0x60732F4C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60732F4C(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r5
  int v8; // r1
  bool v9; // zf
  int v10; // r1
  bool v11; // zf
  int v12; // r1
  bool v13; // zf
  bool v14; // zf

  result = FIELD_U8(a1, 112);
  if ( result == 2 )
  {
    if ( FIELD_U8(a1, 108) )
      sub_60733114();
    else
      sub_6073322C();
LABEL_36:
    result = FIELD_U8(a1, 112) + 1;
    goto LABEL_37;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
    v3 = (_DWORD *)PlayerMgr_instance;
    v4 = FIELD_U32(PlayerMgr_instance, 32);
    if ( v4 && (FIELD_U8(v4, 1219) & 8) == 0 )
    {
      sub_60768F28(FIELD_U32(PlayerMgr_instance, 32), 0, 0);
      FIELD_U32(v4, 1208) |= 0x2000000u;
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v5 = v3[9];
    if ( v5 && (FIELD_U8(v5, 1219) & 8) == 0 )
    {
      sub_60768F28(v3[9], 0, 0);
      FIELD_U32(v5, 1208) |= 0x2000000u;
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v6 = v3[10];
    if ( v6 && (FIELD_U8(v6, 1219) & 8) == 0 )
    {
      sub_60768F28(v3[10], 0, 0);
      FIELD_U32(v6, 1208) |= 0x2000000u;
      v3 = (_DWORD *)PlayerMgr_instance;
    }
    v7 = v3[11];
    if ( v7 )
    {
      if ( (FIELD_U8(v7, 1219) & 8) == 0 )
      {
        sub_60768F28(v7, 0, 0);
        FIELD_U32(v7, 1208) |= 0x2000000u;
      }
    }
    goto LABEL_36;
  }
  result = PlayerMgr_instance;
  v8 = FIELD_U32(PlayerMgr_instance, 32);
  v9 = v8 == 0;
  if ( v8 )
    v9 = FIELD_U32(v8, 160) == 0;
  if ( v9 )
  {
    v10 = FIELD_U32(PlayerMgr_instance, 36);
    v11 = v10 == 0;
    if ( v10 )
      v11 = FIELD_U32(v10, 160) == 0;
    if ( v11 )
    {
      v12 = FIELD_U32(PlayerMgr_instance, 40);
      v13 = v12 == 0;
      if ( v12 )
        v13 = FIELD_U32(v12, 160) == 0;
      if ( v13 )
      {
        result = FIELD_U32(PlayerMgr_instance, 44);
        v14 = result == 0;
        if ( result )
        {
          result = FIELD_U32(result, 160);
          v14 = result == 0;
        }
        if ( v14 )
        {
          result = 2;
LABEL_37:
          FIELD_U8(a1, 112) = result;
        }
      }
    }
  }
  return result;
}
