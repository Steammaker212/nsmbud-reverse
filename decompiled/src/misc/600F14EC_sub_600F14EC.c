/* sub_600F14EC
 * address: 0x600F14EC   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600F14EC(unsigned __int8 *a1)
{
  _BYTE *v2; // r7
  _DWORD *v3; // r5
  _DWORD *v4; // r1
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  signed int result; // r0
  bool v12; // zf

  a1[8428] = 0;
  v2 = a1 + 8428;
  v3 = a1 + 8424;
  v4 = (_DWORD *)PlayerMgr_instance;
  v5 = FIELD_U32(PlayerMgr_instance, 32);
  v6 = v5 == 0;
  if ( v5 )
    v6 = (FIELD_U8(v5, 3552) & 1) == 0;
  if ( !v6 && FIELD_U8(v5, 532) == a1[532] )
  {
    Player_stun(v5, 1);
    *v3 = 60;
    *v2 = 1;
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  a1[8429] = 0;
  v7 = v4[9];
  v8 = v7 == 0;
  if ( v7 )
    v8 = (FIELD_U8(v7, 3552) & 1) == 0;
  if ( !v8 && FIELD_U8(v7, 532) == a1[532] )
  {
    Player_stun(v7, 1);
    *v3 = 60;
    a1[8429] = 1;
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  a1[8430] = 0;
  v9 = v4[10];
  v10 = v9 == 0;
  if ( v9 )
    v10 = (FIELD_U8(v9, 3552) & 1) == 0;
  if ( !v10 && FIELD_U8(v9, 532) == a1[532] )
  {
    Player_stun(v9, 1);
    *v3 = 60;
    a1[8430] = 1;
    v4 = (_DWORD *)PlayerMgr_instance;
  }
  a1[8431] = 0;
  result = v4[11];
  v12 = result == 0;
  if ( result )
    v12 = (FIELD_U8(result, 3552) & 1) == 0;
  if ( !v12 && FIELD_U8(result, 532) == a1[532] )
  {
    Player_stun(result, 1);
    *v3 = 60;
    a1[8431] = 1;
    return 60;
  }
  return result;
}
