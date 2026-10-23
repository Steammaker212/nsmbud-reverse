/* sub_607098E4
 * address: 0x607098E4   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607098E4(int a1, int a2)
{
  int v4; // r4
  int result; // r0
  char v6; // r12
  int v7; // r5
  bool v8; // zf
  char v9; // r12
  int v10; // r1
  _BOOL4 v11; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  int v15; // r1
  bool v16; // zf
  int v17; // r2
  char v18; // r12

  v4 = FIELD_U32(a1, 144);
  result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  v7 = result;
  v8 = v4 == 0;
  if ( v4 )
    v8 = result == 0;
  if ( !v8 )
  {
    if ( ((unsigned int)&dword_60CBC9D8 & ~(1617991980 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC9D8) )
    {
      dword_60CBC9D4 = (int)&off_60BD4904;
      _cxa_guard_release(&dword_60CBC9D8);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60CBC9D4);
    if ( result == 1 )
    {
      if ( !FIELD_U8(v4, 7035) )
      {
        FIELD_U32(v4, 7036) = 1092616192;
        v10 = FIELD_U32(v4, 7040);
        if ( (unsigned int)(v10 - 1073741825) <= 0x7FFFFFFE )
          FIELD_U32(v4, 7040) = -v10 ^ 0x80000000;
      }
      FIELD_U8(v4, 7034) = 1;
      if ( ((unsigned int)&dword_60C7B37C & ~(1617992164 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
      {
        sub_605B30CC(a1, a2);
        v11 = 0;
        if ( (FIELD_U8(v7, 1210) & 1) != 0 )
          v11 = FIELD_U32(v7, 1320) == 0 || FIELD_U32(v7, 1320) == 3;
        v12 = FIELD_U8(a2, 2552);
        v13 = (v12 & 0x40) == 0;
        if ( (v12 & 0x40) == 0 )
        {
          v12 = FIELD_U32(a2, 2556);
          v13 = (v12 & 0x8000) == 0;
        }
        if ( !v13 )
          goto LABEL_24;
        v14 = v12 & 0x10000;
        v15 = FIELD_U32(a2, 2548);
        v17 = v15 & 0x8000 | v14;
        v16 = v17 == 0;
        if ( !v17 )
          v16 = (v11 | ((v15 & 0x10000u) >> 16)) == 0;
        if ( !v16 )
        {
LABEL_24:
          SE_OBJ_WOOD_BOX_BREAK_ref_2(v4, v7);
          FIELD_U32(a2, 2224) |= 0x20u;
        }
      }
      result = Actor__getProfileId((Actor *)v7);
      if ( result == 659 )
      {
        if ( ((unsigned int)&dword_60C8F37C & ~(1617992436 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
        {
          dword_60C8F378 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C8F37C);
        }
        result = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C8F378);
        if ( result == 1 )
        {
          FIELD_U32(v7, 6312) = v4;
          return 6312;
        }
      }
    }
  }
  return result;
}
