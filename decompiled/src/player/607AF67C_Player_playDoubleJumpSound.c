/* Player_playDoubleJumpSound
 * address: 0x607AF67C   size: 560   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Player_playDoubleJumpSound(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  const char *v6; // r1
  int v7; // r0
  _BOOL4 v8; // r0
  bool v9; // zf
  int v10; // r1
  unsigned __int8 *v11; // r0
  int v12; // r2

  if ( ((unsigned int)&unk_60CC4B80 & ~(1618671256 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CC4B80) )
  {
    dword_60CC4B8C = (int)"SE_PLY_JUMP";
    dword_60CC4B90 = (int)"SE_PLY_2NDJUMP";
    dword_60CC4B94 = (int)"SE_PLY_3RDJUMP";
    _cxa_guard_release((__guard *)&unk_60CC4B80);
  }
  if ( ((unsigned int)dword_60CC4B84 & ~(1618671348 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CC4B84) )
  {
    dword_60CC4B98 = (int)"SE_PLY_JUMP_S";
    dword_60CC4B9C = (int)"SE_PLY_2NDJUMP_S";
    dword_60CC4BA0 = (int)"SE_PLY_3RDJUMP_S";
    _cxa_guard_release(dword_60CC4B84);
  }
  if ( ((unsigned int)&dword_60CC4B84[1] & ~(1618671448 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC4B84[1]) )
  {
    dword_60CC4BA4 = (int)"SE_PLY_JUMP_SS";
    dword_60CC4BA8 = (int)"SE_PLY_2NDJUMP_SS";
    dword_60CC4BAC = (int)"SE_PLY_3RDJUMP_SS";
    _cxa_guard_release(&dword_60CC4B84[1]);
  }
  if ( a2 == 2 )
  {
    a2 = sub_60786934(a1 + 688);
    if ( a2 )
      a2 = 2;
  }
  if ( a2 == 2 )
  {
    v7 = FIELD_U32(a1, 1320);
    if ( v7 == 3 )
    {
      v6 = "SE_PLY_JUMP_S_HIGH";
    }
    else if ( v7 )
    {
      v6 = "SE_PLY_JUMP_HIGH";
    }
    else
    {
      v6 = "SE_PLY_JUMP_SS_HIGH";
    }
    v11 = (unsigned __int8 *)a1;
    v12 = 0;
  }
  else
  {
    if ( a2 != 1 )
      return;
    v5 = FIELD_U32(a1, 1320);
    if ( v5 == 3 )
    {
      v6 = *((const char **)&unk_60CC4B80 + FIELD_U32(a1, 12072) + 9);
    }
    else if ( v5 )
    {
      v8 = sub_6075EDF8(a1);
      v9 = v8;
      v10 = FIELD_U32(a1, 12072);
      if ( v8 )
        v9 = v10 == 2;
      if ( v9 )
        v6 = "SE_PLY_3RDJUMP_TT";
      else
        v6 = *((const char **)&unk_60CC4B80 + v10 + 3);
    }
    else
    {
      v6 = *((const char **)&unk_60CC4B80 + FIELD_U32(a1, 12072) + 6);
    }
    v11 = (unsigned __int8 *)a1;
    v12 = 1;
  }
  sub_607734E8(v11, (int)v6, v12, 0);
}
