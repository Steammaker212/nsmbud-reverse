/* SE_PLY_CATCH_ref
 * address: 0x607C02A0   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_CATCH_ref(unsigned __int8 *a1)
{
  float v2; // s16
  unsigned int v3; // r0
  int v4; // r1
  int result; // r0
  const char *v6; // r1

  v2 = *((float *)a1 + 22);
  *((_DWORD *)a1 + 307) |= 0x400u;
  *((_DWORD *)a1 + 308) |= 0x40000000u;
  *((_DWORD *)a1 + 303) |= 0x10000u;
  *((_DWORD *)a1 + 25) = 0;
  *((_DWORD *)a1 + 22) = 0;
  *((_DWORD *)a1 + 26) = 0;
  *((_DWORD *)a1 + 23) = 0;
  *((_DWORD *)a1 + 30) = 0;
  *((_DWORD *)a1 + 31) = 0;
  *((_DWORD *)a1 + 3207) = 0;
  *((_DWORD *)a1 + 3215) = 0;
  (*(void (__fastcall **)(unsigned __int8 *, float))(*(_DWORD *)a1 + 1088))(a1, 400.0);
  v3 = a1[6786];
  if ( v3 <= 2 )
    *((_DWORD *)a1 + 3206) = v3;
  v4 = *((_DWORD *)a1 + 2484);
  if ( v4 == 2 )
  {
    *((_DWORD *)a1 + 303) &= ~0x10000u;
    *((_DWORD *)a1 + 40) = 0x80000000;
    PlayerBase_dispatchVirtual3((int)(a1 + 11356), 64, 0.0);
    sub_60773630((int)a1, 34, 0);
    sub_6075F970((int)a1, 1);
    result = 9940;
    *((_DWORD *)a1 + 2485) = 5;
  }
  else
  {
    result = (int)(a1 + 1328);
    if ( v4 == 1 )
    {
      sub_601549C4(result, v2);
      *((_DWORD *)a1 + 40) = 0x80000000;
      *((_DWORD *)a1 + 2485) = 4;
      if ( (*((_DWORD *)a1 + 3206) | 2) == 2 )
        v6 = "SE_PLY_CATCH_ROPE";
      else
        v6 = "SE_PLY_CATCH_KUSARI";
      goto LABEL_14;
    }
    if ( !v4 )
    {
      sub_601549C4(result, v2);
      *((_DWORD *)a1 + 40) = sub_60773FCC((int)a1, *((_DWORD *)a1 + 20));
      PlayerBase_dispatchVirtual3((int)(a1 + 11356), 45, 0.0);
      *((_DWORD *)a1 + 2485) = 0;
      if ( (*((_DWORD *)a1 + 3206) | 2) == 2 )
        v6 = "SE_PLY_CATCH_ROPE";
      else
        v6 = "SE_PLY_CATCH_KUSARI";
LABEL_14:
      sub_607734E8(a1, (int)v6, 0, 0);
      return sub_60773630((int)a1, 28, 0);
    }
  }
  return result;
}
