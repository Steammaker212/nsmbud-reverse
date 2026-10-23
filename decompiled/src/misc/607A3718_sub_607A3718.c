/* sub_607A3718
 * address: 0x607A3718   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A3718(_BYTE *a1)
{
  unsigned int v2; // r2
  _BOOL4 v3; // r1
  int v4; // r0
  bool v5; // cf
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r4
  int v12; // r1
  int result; // r0
  int v14; // r0
  int v15; // t1

  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 632))(a1);
  FIELD_U32(PlayerMgr_instance, 152) &= ~(1 << a1[84]);
  if ( sub_6078A50C() != 1 )
  {
    v2 = (unsigned __int8)a1[84];
    v3 = 0;
    v4 = (char)v2;
    v5 = v2 >= 6;
    v6 = 0;
    if ( !v5 )
      v6 = v4;
    v7 = dword_60C99DD4 + 72 * v6;
    if ( FIELD_U8(v7, 292) )
      v3 = FIELD_U32(v7, 296) < 1;
    v8 = *((_DWORD *)a1 + 304);
    if ( (v8 & 0x8000000) != 0 || v3 | ((unsigned __int8)(a1[1205] & 0x40) >> 6) )
    {
      FIELD_U32(PlayerMgr_instance, 152) |= 1 << v4;
      v8 = *((_DWORD *)a1 + 304);
    }
    if ( (v8 & 0x8000000) == 0 && (a1[1205] & 0x40) != 0 )
    {
      *((_DWORD *)a1 + 330) = 0;
      *((_DWORD *)a1 + 2847) = 0;
      *((_DWORD *)a1 + 2846) = 0;
      (*(void (__fastcall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)a1 + 144))(a1, 0, 0);
    }
  }
  if ( !sub_6079DF08((int)a1) )
    sub_6079EA38(a1);
  *((_DWORD *)a1 + 301) |= 0x40u;
  sub_60768030(a1);
  *((_DWORD *)a1 + 301) &= ~0x40u;
  if ( !sub_607C7184(a1) )
    sub_60767E68((int)a1);
  v9 = dword_60C99DD4;
  v10 = (unsigned __int8)a1[84];
  v11 = 0;
  v12 = FIELD_U32(dword_60CC6D78, 32);
  if ( v10 < 6 )
    v11 = (char)v10;
  result = FIELD_U32(dword_60CC6D78, 32);
  if ( v12 == 3 )
  {
    result = FIELD_U8(dword_60CBFA90, 340);
    if ( !FIELD_U8(dword_60CBFA90, 340) )
    {
      result = dword_60C99DD4 + 72 * v11;
      FIELD_U32(result, 300) = 0;
    }
  }
  else if ( v12 == 2 )
  {
    result = sub_6040E274(LevelInfo_instance);
    if ( result == 1 )
    {
      result = FIELD_U8(dword_60CC6D78, 109032);
      if ( !FIELD_U8(dword_60CC6D78, 109032) )
      {
        v14 = v9 + 72 * v11;
        v15 = FIELD_U32(v14, 300);
        result = v14 + 300;
        if ( v15 == 8 )
          *(_DWORD *)result = 7;
      }
    }
  }
  return result;
}
