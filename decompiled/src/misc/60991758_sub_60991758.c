/* sub_60991758
 * address: 0x60991758   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991758(unsigned __int8 *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r4

  v2 = a1[28];
  if ( v2 == 4 )
    return (a1[30] >> 6) & 1;
  v3 = v2 == 3;
  v4 = 1;
  if ( v2 != 3 )
    v3 = v2 == 1;
  if ( v3 )
  {
    (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 88))(a1);
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 2);
    return 1;
  }
  return v4;
}
