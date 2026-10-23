/* sub_607C40E8
 * address: 0x607C40E8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C40E8(int a1, int a2, int a3, float a4)
{
  _DWORD *v6; // r0
  _DWORD **v7; // r5
  float v9; // s0
  float v10; // s1

  v7 = (_DWORD **)(a1 + 11360);
  v6 = *(_DWORD **)(a1 + 11360);
  if ( v6[7] == a2 )
    return sub_60793088(v6, a4);
  if ( a3 == 1 )
  {
    v9 = (*(float (__fastcall **)(_DWORD *, int))(*v6 + 80))(v6, a2);
    v6 = *v7;
    v10 = v9;
  }
  else
  {
    v10 = 0.0;
  }
  return (*(int (__fastcall **)(_DWORD *, int, float, float, float))(*v6 + 84))(v6, a2, a4, v10, 0.0);
}
