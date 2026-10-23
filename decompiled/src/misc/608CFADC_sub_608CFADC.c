/* sub_608CFADC
 * address: 0x608CFADC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFADC(int a1)
{
  int v2; // r5

  v2 = a1 + 28;
  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1) )
    v2 = a1 + 16;
  return *(_DWORD *)v2;
}
