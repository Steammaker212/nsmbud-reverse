/* sub_6092251C
 * address: 0x6092251C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6092251C(char *a1)
{
  _DWORD *v2; // r5

  *(_DWORD *)a1 = &off_60C5D71C;
  v2 = a1 + 248;
  if ( *((_DWORD *)a1 + 62) )
  {
    dword_60CC7464(a1 + 8);
    a1[64] = 0;
    a1[76] = 0;
    a1[88] = 0;
    a1[100] = 0;
    a1[112] = 0;
    a1[124] = 0;
    a1[136] = 0;
    a1[148] = 0;
    a1[160] = 0;
    a1[172] = 0;
    a1[184] = 0;
    a1[196] = 0;
    a1[208] = 0;
    a1[220] = 0;
    a1[232] = 0;
    a1[244] = 0;
    sub_60913AD4(v2);
  }
  operator_delete(a1);
}
