/* sub_601C4404
 * address: 0x601C4404   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601C4404(_DWORD *a1)
{
  int v2; // r1
  char v3; // r12
  _BOOL4 result; // r0
  int v5; // r1
  bool v6; // zf
  int v7; // [sp+4h] [bp-14h]

  v2 = sub_601916EC(dword_60C8996C) - 34;
  result = 1;
  switch ( v2 )
  {
    case 0:
    case 1:
    case 3:
    case 14:
    case 52:
    case 53:
      return result;
    default:
      v5 = a1[66] | 1;
      v6 = v5 == 7;
      if ( v5 == 7 )
        v6 = a1[69] == 0;
      if ( !v6 || a1[68] )
      {
        if ( ((unsigned int)&dword_60C8AEA0 & ~(1612465480 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AEA0) )
        {
          dword_60C8AEA4 = 0;
          dword_60C8AEA8 = 58;
          dword_60C8AEAC = 23;
          dword_60C8AEB0 = 21;
          dword_60C8AEB4 = 22;
          dword_60C8AEB8 = 180;
          dword_60C8AEBC = 155;
          dword_60C8AEC0 = 150;
          dword_60C8AEC4 = 151;
          _cxa_guard_release(&dword_60C8AEA0);
        }
        v7 = sub_6019112C(dword_60C8996C);
        result = 1;
        if ( v7 != dword_60C8AEA4
          && v7 != dword_60C8AEA8
          && v7 != dword_60C8AEAC
          && v7 != dword_60C8AEB0
          && v7 != dword_60C8AEB4
          && v7 != dword_60C8AEB8
          && v7 != dword_60C8AEBC
          && v7 != dword_60C8AEC0 )
        {
          result = v7 == dword_60C8AEC4;
        }
      }
      break;
  }
  return result;
}
