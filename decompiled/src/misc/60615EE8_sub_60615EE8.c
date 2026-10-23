/* sub_60615EE8
 * address: 0x60615EE8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60615EE8(int a1)
{
  unsigned int result; // r0

  result = FIELD_U32(a1, 6156);
  if ( result == 1 )
  {
    result = FIELD_U8(dword_60C9A1F0, 6529);
    if ( !FIELD_U8(dword_60C9A1F0, 6529) )
      return result;
    goto LABEL_6;
  }
  if ( result == 2 )
  {
    result = sub_603FC744(dword_60C99DE4);
    if ( result > 9 )
    {
LABEL_6:
      FIELD_U8(a1, 535) = 1;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CB3274);
    }
  }
  return result;
}
