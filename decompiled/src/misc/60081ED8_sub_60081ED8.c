/* sub_60081ED8
 * address: 0x60081ED8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60081ED8(_WORD *a1)
{
  _WORD *v2; // r5
  int result; // r0

  v2 = a1 + 3138;
  (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 1068))(a1);
  result = (unsigned __int16)*v2;
  if ( !*v2 )
    return (*(int (__fastcall **)(_WORD *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C819E8);
  return result;
}
