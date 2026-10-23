/* sub_60901C30
 * address: 0x60901C30   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60901C30(_DWORD *a1)
{
  void *v2; // r0
  bool v3; // zf

  *a1 = off_60C5CB48;
  v2 = (void *)*((unsigned __int8 *)a1 + 16);
  v3 = ((unsigned __int8)v2 & 1) == 0;
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    v2 = (void *)a1[1];
    v3 = v2 == 0;
  }
  if ( !v3 )
    operator_delete_8DE3FC(v2);
  operator_delete(a1);
}
