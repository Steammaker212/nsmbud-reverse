/* sub_60677DE4
 * address: 0x60677DE4   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60677DE4(int a1)
{
  int v1; // r4
  int *v2; // r0

  v1 = a1 + 6100;
  Animation_update(**(_DWORD **)(FIELD_U32(a1, 6100) + 28));
  v2 = *(int **)(*(_DWORD *)v1 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 24) > 1u )
    ++v2;
  return Animation_update(*v2);
}
