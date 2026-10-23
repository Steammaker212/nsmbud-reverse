/* sub_6098DBCC
 * address: 0x6098DBCC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098DBCC(_DWORD *a1, int a2)
{
  FIELD_U32(a2, 84) = -1;
  FIELD_U32(a2, 80) = *a1;
  return sub_608E6B4C((_BYTE *)a2, a2 + 88);
}
