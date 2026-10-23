/* sub_605F8A4C
 * address: 0x605F8A4C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605F8A4C(int a1)
{
  unsigned int result; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 708))(a1);
  result = FIELD_U32(a1, 6312);
  if ( result )
  {
    result = FIELD_U32(a1, 6304) - 1;
    if ( result <= 1 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB23E8);
  }
  return result;
}
