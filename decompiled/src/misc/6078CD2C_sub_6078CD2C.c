/* sub_6078CD2C
 * address: 0x6078CD2C   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078CD2C(int a1, int a2, _DWORD *a3)
{
  unsigned int v6; // r4
  int v7; // r11
  int v8; // r0
  int v9; // r1
  int i; // r2

  v6 = 0;
  while ( 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v7 = a3[1];
    (*(void (__fastcall **)(int *))(dword_60CC4380[2 * v6] + 12))(&dword_60CC4380[2 * v6]);
    v8 = dword_60CC4380[2 * v6 + 1];
    if ( v7 == v8 )
      break;
    v9 = a3[1];
    for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v9 + i - 1) )
        goto LABEL_13;
      if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v8 + i) )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        goto LABEL_13;
    }
    if ( (int)++v6 >= 24 )
    {
      v6 = 0;
      break;
    }
  }
LABEL_13:
  if ( v6 >= 0x18 )
    v6 = 0;
  return sub_60793EB4(a1, a2, *(_DWORD *)(a1 + 4 * v6 + 308));
}
