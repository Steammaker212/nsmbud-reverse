/* sub_608CAE64
 * address: 0x608CAE64   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CAE64(int result, int a2, int a3, int a4)
{
  int v5; // r4
  int v8; // r7
  _DWORD v9[16]; // [sp+8h] [bp-40h] BYREF

  v5 = 0;
  v8 = result;
  memset(v9, 0, 28);
  if ( a3 >= 1 )
  {
    do
    {
      result = ((int (__fastcall *)(int, int, int, int, int, _DWORD *))sub_608D514C)(v5, v8, a2, a4, 14, v9);
      v5 += 14;
    }
    while ( v5 < a3 );
  }
  return result;
}
