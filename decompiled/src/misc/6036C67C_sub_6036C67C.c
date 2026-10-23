/* sub_6036C67C
 * address: 0x6036C67C   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6036C67C(int a1, int a2)
{
  char v2; // r12
  _BYTE *v3; // r4
  unsigned int result; // r0
  int v6; // r6
  bool v7; // zf
  char v8; // r12
  _BYTE *v9; // r4
  char v10; // t1

  v3 = *(_BYTE **)(a1 + 144);
  result = (unsigned __int8)v3[7309];
  if ( !v3[7309] )
  {
    result = (unsigned __int8)v3[7310];
    if ( !v3[7310] )
    {
      v6 = FIELD_U32(a2, 2196);
      v7 = (FIELD_U8(a2, 2545) & 2) == 0;
      if ( (FIELD_U8(a2, 2545) & 2) == 0 )
        v7 = (FIELD_U32(a2, 2548) & 0x18000) == 0;
      if ( !v7 )
        goto LABEL_7;
      if ( (unsigned __int8)(FIELD_U8(v6, 533) - 1) > 1u )
        goto LABEL_19;
      if ( ((unsigned int)&dword_60C7B37C & ~(1614202628 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1 )
        goto LABEL_7;
      if ( FIELD_U8(v6, 533) != 1 )
        goto LABEL_19;
      if ( ((unsigned int)&dword_60C7B37C & ~(1614202748 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B378) == 1
        && (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1204))(v6) == 1 )
      {
LABEL_7:
        SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(v3, v6);
        result = FIELD_U32(a2, 2224) | 0x4000;
        FIELD_U32(a2, 2224) = result;
      }
      else
      {
LABEL_19:
        result = Actor__getProfileId((Actor *)v6);
        if ( result == 476 )
        {
          v10 = v3[7308];
          v9 = v3 + 7308;
          result = (unsigned __int8)(v10 - 1);
          if ( result <= 1 )
          {
            *v9 = 3;
            return 3;
          }
        }
      }
    }
  }
  return result;
}
