/* sub_6062E508
 * address: 0x6062E508   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062E508(int a1)
{
  int v1; // r4
  int result; // r0
  bool v4; // zf
  _BOOL4 v5; // r5
  char v6; // r12

  result = FIELD_U8(a1, 2872);
  if ( (result & 0x21) != 0 )
  {
    result = sub_6014B69C(a1 + 648);
    v4 = result == 0;
    if ( result )
    {
      v1 = FIELD_U32(result, 144);
      v4 = v1 == 0;
    }
    if ( !v4 )
    {
      v5 = FIELD_F32(a1, 108) >= FIELD_F32(v1, 108);
      result = Actor__getProfileId((Actor *)v1);
      if ( result == 392 )
      {
        if ( ((unsigned int)&dword_60C7B39C & ~(1617094008 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
        {
          dword_60C7B398 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C7B39C);
        }
        result = (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C7B398);
        if ( result == 1 )
          return sub_602EE7B8(v1, v5, 0xFFFFFFFF);
      }
    }
  }
  return result;
}
