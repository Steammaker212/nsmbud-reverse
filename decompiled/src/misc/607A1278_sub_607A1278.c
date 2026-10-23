/* sub_607A1278
 * address: 0x607A1278   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A1278(int a1, int a2, int a3)
{
  int v6; // r0
  bool v7; // zf
  _BOOL4 v8; // r2

  if ( a2 == 2 )
  {
    v6 = FIELD_U32(a1, 1320);
    v7 = v6 == 0;
    if ( v6 )
      v7 = v6 == 3;
    if ( v7 )
    {
      sub_60777FB4(dword_60CBFA90, (int *)a1, 0);
      return 1;
    }
    sub_607A2894(a1, v6 != 1);
    FIELD_U32(a1, 9572) = 127;
  }
  v8 = 0;
  if ( a3 )
  {
    v8 = 0;
    if ( a2 != 5 )
    {
      if ( a2 == 7 )
        v8 = FIELD_U32(a3, 80) == FIELD_U32(a1, 80);
      else
        v8 = (float)((float)(FIELD_F32(a3, 584) - FIELD_F32(a1, 584)) * flt_60B0A898[FIELD_U32(a1, 80)]) < 0.0;
    }
  }
  return (*(int (__fastcall **)(int, int, _BOOL4, _DWORD, _DWORD))(*(_DWORD *)a1 + 1420))(a1, a2, v8, 0, 0);
}
