/* sub_60460280
 * address: 0x60460280   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60460280(int a1)
{
  unsigned int result; // r0
  char v3; // r12
  int v4; // r5

  result = sub_60461AA0();
  v4 = FIELD_U32(a1, 56);
  if ( v4 )
  {
    if ( ((unsigned int)dword_60C95248 & ~(1615200936 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C95248) )
    {
      dword_60C95244 = (int)&off_60BC04AC;
      _cxa_guard_release(dword_60C95248);
    }
    result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C95244);
    if ( result == 1 )
    {
      result = (unsigned __int8)(FIELD_U8(v4, 6433) - 1);
      if ( result <= 1 )
      {
        FIELD_U8(a1, 6201) = 0;
        FIELD_U32(a1, 6812) = 0;
        FIELD_U32(a1, 80) = FIELD_U32(v4, 80);
        Actor__removeChild((Actor *)v4, (Actor *)a1);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9D278);
        result = FIELD_U8(v4, 6433);
        if ( result == 2 )
        {
          FIELD_U32(a1, 124) = 0x40000000;
          return 0x40000000;
        }
      }
    }
  }
  return result;
}
