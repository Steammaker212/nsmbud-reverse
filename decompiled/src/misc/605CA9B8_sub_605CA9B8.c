/* sub_605CA9B8
 * address: 0x605CA9B8   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CA9B8(int result, int a2)
{
  int v2; // r7
  char v3; // r12
  int v4; // r4
  int v6; // r5
  bool v7; // zf
  bool v8; // zf

  v4 = result;
  v6 = FIELD_U32(result, 144);
  v7 = v6 == 0;
  if ( v6 )
  {
    v2 = FIELD_U32(a2, 2196);
    v7 = v2 == 0;
  }
  if ( v7 )
    return result;
  if ( (FIELD_U8(a2, 2558) & 1) != 0 )
  {
    FIELD_U32(a2, 2224) |= 0x20u;
LABEL_13:
    SE_OBJ_TARU_BREAK_ref(v6, 0);
    FIELD_U8(v4, 220) = 1;
    return 1;
  }
  if ( (unsigned __int8)(FIELD_U8(v2, 533) - 1) <= 1u )
  {
    if ( ((unsigned int)&dword_60C7B37C & ~(1616685576 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378) == 1 && (FIELD_U8(v2, 1210) & 0x11) != 0 )
    {
      SE_OBJ_TARU_BREAK_ref(v6, 0);
      FIELD_U8(v4, 220) = 1;
      result = FIELD_U32(a2, 2224) | 0x20;
      FIELD_U32(a2, 2224) = result;
      return result;
    }
  }
  result = Actor__getProfileId((Actor *)v2);
  v8 = result == 324;
  if ( result == 324 )
  {
    result = FIELD_U8(v2, 19);
    v8 = result == 0;
  }
  if ( v8 )
  {
    SE_OBJ_WOOD_BOX_BREAK_ref_2(v2, v6);
    goto LABEL_13;
  }
  return result;
}
