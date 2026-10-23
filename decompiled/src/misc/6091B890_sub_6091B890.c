/* sub_6091B890
 * address: 0x6091B890   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091B890(_DWORD *a1, int a2, int a3, int a4)
{
  return dword_60CC793C(
           FIELD_U32(a2, 192),
           4 * a3,
           FIELD_U32(dword_60CD0B68, 96),
           FIELD_U32(dword_60CD0B68, 100),
           FIELD_U32(dword_60CD0B68, 28),
           *a1,
           4 * a3,
           a4);
}
