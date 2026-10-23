/* sub_60267A60
 * address: 0x60267A60   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60267A60(unsigned __int16 *a1)
{
  _WORD *v1; // r1
  int v2; // r2

  v1 = a1 + 3484;
  v2 = a1[3484];
  if ( !a1[3484] )
    return (*(int (__fastcall **)(unsigned __int16 *, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C8E69C);
  *v1 = v2 - 1;
  return v2 - 1;
}
