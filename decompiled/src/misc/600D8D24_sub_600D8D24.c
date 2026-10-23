/* sub_600D8D24
 * address: 0x600D8D24   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D8D24(int a1)
{
  int result; // r0
  int v3; // r1

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    return 40;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  result = 1;
  if ( v3 == 1 )
    return 40;
  return result;
}
