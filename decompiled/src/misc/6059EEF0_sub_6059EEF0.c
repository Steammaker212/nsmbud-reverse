/* sub_6059EEF0
 * address: 0x6059EEF0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059EEF0(_BYTE *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 72))(a1);
  result = a1[6420] & 0xFC;
  a1[6420] = result;
  return result;
}
