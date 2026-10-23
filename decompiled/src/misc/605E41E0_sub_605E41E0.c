/* sub_605E41E0
 * address: 0x605E41E0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E41E0(int result, int a2)
{
  char v2; // r12
  int v4; // r4
  bool v5; // zf
  int v6; // r1

  v4 = result;
  v5 = a2 == 0;
  if ( a2 )
  {
    result = FIELD_U32(result, 6260) & 0x800;
    v5 = (FIELD_U32(v4, 6260) & 0x800) == 0;
  }
  if ( !v5 )
  {
    if ( ((unsigned int)&dword_60C7B408 & ~(1616790032 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    result = (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B404);
    if ( result == 1 )
    {
      if ( (FIELD_U8(a2, 1231) & 4) != 0 )
      {
        return (int)sub_605E0870(v4, (StateBase *)&dword_60CB19E0, 1);
      }
      else
      {
        result = v4 + 6264;
        v6 = FIELD_U32(v4, 6264);
        if ( (v6 & 0x20000000) != 0 )
        {
          if ( FIELD_U8(a2, 84) == 255 )
          {
            FIELD_U8(v4, 19) = 1;
            return 1;
          }
          else
          {
            *(_DWORD *)result = v6 | 0x40000000;
          }
        }
        else
        {
          return sub_605DCF1C(v4, a2);
        }
      }
    }
  }
  return result;
}
