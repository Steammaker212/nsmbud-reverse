/* sub_60709720
 * address: 0x60709720   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60709720(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int result; // r0
  char v5; // r12
  Actor *v6; // r5
  bool v7; // zf
  bool v8; // zf
  int v9; // r0
  char v10; // r12

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
  v6 = (Actor *)result;
  v7 = v3 == 0;
  if ( v3 )
    v7 = result == 0;
  if ( !v7 )
  {
    if ( ((unsigned int)&dword_60CBC9D8 & ~(1617991524 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC9D8) )
    {
      dword_60CBC9D4 = (int)&off_60BD4904;
      _cxa_guard_release(&dword_60CBC9D8);
    }
    result = (**v3)(v3, &dword_60CBC9D4);
    if ( result == 1 )
    {
      if ( (FIELD_U8(a2, 2544) & 0x40) != 0 )
        goto LABEL_15;
      v8 = (FIELD_U8(a2, 2528) & 0x40) == 0;
      if ( (FIELD_U8(a2, 2528) & 0x40) != 0 )
        v8 = (FIELD_U8(a2, 2536) & 0x40) == 0;
      if ( !v8
        || (v9 = FIELD_U32(a2, 2556), (v9 & 0x8000) != 0)
        || FIELD_U32(a2, 2548) & 0x8000 | v9 & 0x10000 | FIELD_U32(a2, 2548) & 0x10000 )
      {
LABEL_15:
        SE_OBJ_WOOD_BOX_BREAK_ref_2((int)v3, (int)v6);
        FIELD_U32(a2, 2224) |= 0x4000u;
      }
      result = Actor__getProfileId(v6);
      if ( result == 659 )
      {
        if ( ((unsigned int)&dword_60C8F37C & ~(1617991756 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
        {
          dword_60C8F378 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C8F37C);
        }
        result = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C8F378);
        if ( result == 1 )
        {
          v6[78].field_48 = (int)v3;
          return 6312;
        }
      }
    }
  }
  return result;
}
