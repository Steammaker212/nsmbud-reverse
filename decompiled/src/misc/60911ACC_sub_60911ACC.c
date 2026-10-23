/* sub_60911ACC
 * address: 0x60911ACC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911ACC(_DWORD *a1)
{
  void *v2; // r0
  char v3; // r12
  float v4; // s0
  int v5; // r1
  int v6; // r2
  int result; // r0
  bool v8; // zf
  bool v9; // zf
  int (__fastcall ***v10)(_DWORD, int *); // r5
  int v11; // r0

  v2 = sub_608065A0();
  v4 = *((float *)v2 + 36);
  v5 = *((_DWORD *)v2 + 37);
  v6 = *((_DWORD *)v2 + 38);
  if ( v6 < v5 )
    v4 = *((float *)v2 + 35) + (float)((float)((float)v6 * (float)(v4 - *((float *)v2 + 35))) / (float)v5);
  result = a1[3];
  v8 = v4 == 0.0;
  if ( v4 == 0.0 )
    v8 = result == 1;
  if ( v8 )
  {
    a1[3] = 2;
    return 2;
  }
  else if ( result != 2 )
  {
    v9 = v4 == 0.0;
    if ( v4 == 0.0 )
    {
      result = a1[2];
      v9 = result == 1;
    }
    if ( v9 )
    {
      v10 = *(int (__fastcall ****)(_DWORD, int *))(a1[1] + 28);
      if ( ((unsigned int)&dword_60CC64A4 & ~(1620122456 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC64A4) )
      {
        dword_60CC64A0 = (int)off_60C28008;
        _cxa_guard_release(&dword_60CC64A4);
      }
      if ( v10 )
      {
        v11 = (**v10)(v10, &dword_60CC64A0);
        if ( v11 )
          v11 = (int)v10;
      }
      else
      {
        v11 = 0;
      }
      sub_608DAA48(v11, 0);
      a1[2] = 2;
      return 2;
    }
  }
  return result;
}
