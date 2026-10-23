/* sub_602E642C
 * address: 0x602E642C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E642C(int a1)
{
  return (*(unsigned __int8 *)(**(_DWORD **)(*(_DWORD *)a1 + 20) + 28) >> 5) & 1;
}
