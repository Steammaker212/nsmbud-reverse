/* LargeGoomba_vf198
 * address: 0x603418C8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf198(_BYTE *a1)
{
  int result; // r0

  sub_602A3EFC((int)(a1 + 6920), 24, 0.0625);
  if ( (a1[2872] & 1) != 0 )
    return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9468C);
  result = (unsigned __int8)a1[6397];
  if ( a1[6397] )
    return (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9468C);
  return result;
}
