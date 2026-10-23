/* sub_608AC4B4
 * address: 0x608AC4B4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC4B4(int a1, int a2)
{
  _BYTE *v4; // r6
  int result; // r0
  _DWORD *v6; // r0

  v4 = sub_608C3B10();
  result = (unsigned __int8)*v4;
  if ( *v4 )
  {
    v6 = (_DWORD *)sub_608C2698(v4, 24, 1);
    v6[1] = 66;
    v6[4] = a1;
    v6[5] = a2;
    return sub_608C2C1C(v4);
  }
  return result;
}
