/* Iggy__vf690
 * address: 0x6009F238   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Iggy__vf690(int a1)
{
  int v1; // r4
  const char *v2; // r1

  v1 = a1 + 6332;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) == 1 )
    v2 = "SE_VOC_IGG_MAGIC_MAKE_FAST";
  else
    v2 = "SE_VOC_IGG_MAGIC_MAKE";
  return sub_60813430(v1, v2, 0);
}
