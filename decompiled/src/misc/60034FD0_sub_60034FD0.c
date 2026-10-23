/* sub_60034FD0
 * address: 0x60034FD0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60034FD0(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0

  v2 = (_DWORD *)a1[1775];
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  if ( (*(_BYTE *)(*(_DWORD *)v3 + 28) & 0x30) != 0 )
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C7FE3C);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 1068))(a1);
}
