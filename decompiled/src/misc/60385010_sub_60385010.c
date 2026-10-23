/* sub_60385010
 * address: 0x60385010   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60385010(_DWORD *a1)
{
  int *v1; // r2
  unsigned int v2; // r3

  if ( a1[1577] != 2 )
    return (*(int (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C96B84);
  v1 = &dword_60C96ABC[18 * a1[1582] + 2 * (a1[1578] % 9)];
  a1[30] = *v1;
  a1[31] = v1[1];
  a1[32] = 0;
  v2 = a1[142] & 0xFFFFFFCF | 0x10;
  if ( (a1[5] & 0x100) != 0 )
    v2 = a1[142] | 0x20;
  a1[142] = v2;
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C96BC4);
}
