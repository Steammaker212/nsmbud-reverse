/* sub_6002394C
 * address: 0x6002394C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6002394C()
{
  int *result; // r0

  if ( dword_60C7F53C )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C7F53C + 4))(dword_60C7F53C);
    dword_60C7F53C = 0;
  }
  if ( dword_60C7F540 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C7F540 + 4))(dword_60C7F540);
    dword_60C7F540 = 0;
  }
  if ( dword_60C7F544 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C7F544 + 4))(dword_60C7F544);
    dword_60C7F544 = 0;
  }
  result = (int *)dword_60C7F548;
  if ( dword_60C7F548 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)dword_60C7F548 + 4))(dword_60C7F548);
    dword_60C7F548 = 0;
    return &dword_60C7F53C;
  }
  return result;
}
