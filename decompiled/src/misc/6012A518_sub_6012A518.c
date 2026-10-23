/* sub_6012A518
 * address: 0x6012A518   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012A518(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // t1
  int result; // r0

  (*(void (__fastcall **)(_DWORD *, void *))(*a1 + 192))(a1, &unk_60C87020);
  v3 = a1[2031];
  v2 = a1 + 2031;
  result = v3 + 1;
  if ( (unsigned int)(v3 + 1) > 5 )
    result = 0;
  *v2 = result;
  return result;
}
