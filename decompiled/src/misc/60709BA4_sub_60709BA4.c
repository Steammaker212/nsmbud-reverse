/* sub_60709BA4
 * address: 0x60709BA4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60709BA4(int a1, int a2, int a3)
{
  int (__fastcall ***v6)(_DWORD, int *); // r4
  int result; // r0
  char v8; // r12
  Actor *v9; // r8
  bool v10; // zf
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  bool v14; // zf
  int v15; // r0
  char v16; // r12

  v6 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 32))(a2, a1);
  v9 = (Actor *)result;
  v10 = v6 == 0;
  if ( v6 )
    v10 = result == 0;
  if ( !v10 )
  {
    if ( ((unsigned int)&dword_60CBC9D8 & ~(1617992684 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CBC9D8) )
    {
      dword_60CBC9D4 = (int)&off_60BD4904;
      _cxa_guard_release(&dword_60CBC9D8);
    }
    result = (**v6)(v6, &dword_60CBC9D4);
    if ( result == 1 )
    {
      sub_605B4110(a1, (unsigned __int8 *)a2, a3);
      v11 = (FIELD_U8(a2, 2528) & 0x40) == 0;
      if ( (FIELD_U8(a2, 2528) & 0x40) != 0 )
        v11 = (FIELD_U8(a2, 2536) & 0x40) == 0;
      if ( !v11 )
        goto LABEL_22;
      v12 = FIELD_U32(a2, 2532);
      v13 = (v12 & 0x8000) == 0;
      if ( (v12 & 0x8000) != 0 )
        v13 = (FIELD_U8(a2, 2541) & 0x80) == 0;
      if ( !v13 )
        goto LABEL_22;
      v14 = (v12 & 0x10000) == 0;
      if ( (v12 & 0x10000) != 0 )
        v14 = (FIELD_U8(a2, 2542) & 1) == 0;
      if ( !v14
        || (v15 = FIELD_U32(a2, 2556), (v15 & 0x8000) != 0)
        || FIELD_U32(a2, 2548) & 0x8000 | v15 & 0x10000 | FIELD_U32(a2, 2548) & 0x10000 )
      {
LABEL_22:
        SE_OBJ_WOOD_BOX_BREAK_ref_2((int)v6, (int)v9);
        FIELD_U32(a2, 2224) |= 0x1000000u;
      }
      result = Actor__getProfileId(v9);
      if ( result == 659 )
      {
        if ( ((unsigned int)&dword_60C8F37C & ~(1617992956 << v16) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F37C) )
        {
          dword_60C8F378 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C8F37C);
        }
        result = (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v9, 0x0))(v9, &dword_60C8F378);
        if ( result == 1 )
        {
          v9[78].field_48 = (int)v6;
          return 6312;
        }
      }
    }
  }
  return result;
}
