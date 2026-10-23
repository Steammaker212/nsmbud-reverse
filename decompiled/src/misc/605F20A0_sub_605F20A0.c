/* sub_605F20A0
 * address: 0x605F20A0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F20A0(_BYTE *a1)
{
  int result; // r0

  if ( sub_605D01D4((int)a1) == 1 )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 336))(a1);
  result = (unsigned __int8)a1[7481];
  if ( a1[7481] )
  {
    *((_DWORD *)a1 + 1849) = 1;
    *((_DWORD *)a1 + 1847) = 3;
    return (*(int (__fastcall **)(_BYTE *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAED6C);
  }
  return result;
}
