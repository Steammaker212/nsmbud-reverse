/* sub_60101654
 * address: 0x60101654   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60101654(int a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 908))(a1);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85EB4);
  return result;
}
