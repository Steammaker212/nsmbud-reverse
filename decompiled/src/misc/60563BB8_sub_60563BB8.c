/* sub_60563BB8
 * address: 0x60563BB8   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60563BB8(int a1, int a2)
{
  int v2; // r4
  int v3; // r0

  if ( !FIELD_U8(dword_60C9A1F0, 6515) )
    return dword_60B04164[a2];
  v2 = dword_60CB061C;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 360))(a1);
  return sub_605B9F30(v2, dword_60B04164[v3]);
}
