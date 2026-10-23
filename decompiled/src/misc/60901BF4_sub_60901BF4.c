/* sub_60901BF4
 * address: 0x60901BF4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60901BF4(int a1)
{
  void *v2; // r0
  bool v3; // zf

  *(_DWORD *)a1 = off_60C5CB48;
  v2 = (void *)FIELD_U8(a1, 16);
  v3 = ((unsigned __int8)v2 & 1) == 0;
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    v2 = *(void **)(a1 + 4);
    v3 = v2 == 0;
  }
  if ( !v3 )
    operator_delete_8DE3FC(v2);
  return a1;
}
