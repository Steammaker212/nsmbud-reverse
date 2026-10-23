/* sub_60778AAC
 * address: 0x60778AAC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60778AAC(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0
  int v5; // r1
  bool v6; // zf
  _BOOL4 v7; // r2
  int v8; // r1
  bool v9; // zf

  v2 = FIELD_U32(a1, 72);
  v3 = FIELD_U32(a1, 212);
  if ( v3 < v2 )
  {
    v5 = v2 - 1;
    v6 = v3 == v5;
    if ( v3 == v5 )
      v6 = FIELD_U32(a1, 220) == 0;
    if ( v6 )
    {
      v7 = 1;
      v8 = FIELD_U32(dword_60C99DD4, 764);
      if ( v8 == 4 )
        v7 = FIELD_U8(dword_60C9A1F0, 6559) != 3;
      if ( v7 && !FIELD_U8(dword_60CC6D78, 109032) )
      {
        if ( v8 == 4 )
          sub_603FBAB8(dword_60C99DD4);
        else
          sub_603FBAA0(dword_60C99DD4);
        STRM_BGM_COURSE_CLEAR_ref(dword_60CC6B68, FIELD_U8(a1, 273) != 0);
      }
      ++FIELD_U32(a1, 220);
    }
    result = FIELD_U32(a1, 56);
    if ( !result )
    {
      result = sub_608DE61C(a1 + 136, FIELD_U32(a1, 212));
      v9 = result == 0;
      if ( result )
      {
        result -= 4;
        v9 = result == 0;
      }
      if ( !v9 )
      {
        result = Player_getActorSlotChecked(PlayerMgr_instance, *(_DWORD *)result);
        if ( result )
        {
          FIELD_U32(result, 1232) |= 1u;
          FIELD_U32(a1, 56) = 10;
          result = FIELD_U32(a1, 212) + 1;
          FIELD_U32(a1, 212) = result;
        }
      }
    }
  }
  else
  {
    FIELD_U32(a1, 52) = 6;
    return 6;
  }
  return result;
}
