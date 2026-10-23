/* sub_60007DB0
 * address: 0x60007DB0   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60007DB0(int a1)
{
  int result; // r0
  char v3; // r12

  result = Actor__getProfileId((Actor *)a1);
  if ( result != 444 )
  {
    result = Actor__getProfileId((Actor *)a1);
    if ( result != 443 )
    {
      if ( Actor__getProfileId((Actor *)a1) != 442 )
        goto LABEL_25;
      if ( ((unsigned int)&dword_60C7B408 & ~(1610645016 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      if ( !a1
        || (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B404) != 1
        || (result = FIELD_U8(a1, 84), result == 255) )
      {
LABEL_25:
        if ( ((unsigned int)&dword_60C7B410 & ~(1610645144 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
        {
          dword_60C7B40C = (int)&off_60BC00D4;
          _cxa_guard_release(&dword_60C7B410);
        }
        if ( !a1
          || (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B40C) != 1
          || (result = FIELD_U32(a1, 6792)) == 0 )
        {
          if ( ((unsigned int)&dword_60C7B418 & ~(1610645276 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
          {
            dword_60C7B414 = (int)&off_60BC00C8;
            _cxa_guard_release(&dword_60C7B418);
          }
          if ( !a1
            || (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C7B414) != 1
            || (result = sub_60464D3C(a1)) == 0 )
          {
            FIELD_U8(a1, 19) = 1;
            return 1;
          }
        }
      }
    }
  }
  return result;
}
