/* sub_6005636C
 * address: 0x6005636C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005636C(_WORD *a1)
{
  if ( a1[3139] )
    JUMPOUT(0x6004E7EC);
  (*(void (__fastcall **)(_WORD *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C809C8);
  (*(void (__fastcall **)(_WORD *))(*(_DWORD *)a1 + 1276))(a1);
  return sub_6004E178((int)a1);
}
