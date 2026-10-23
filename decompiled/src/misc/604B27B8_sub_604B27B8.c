/* sub_604B27B8
 * address: 0x604B27B8   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B27B8(int a1)
{
  float v2; // s0
  int result; // r0

  sub_6047EABC((_DWORD *)(a1 + 24));
  if ( !FIELD_U8(a1, 14792) )
    sub_6047823C(**(_DWORD ***)(a1 + 16), v2);
  if ( !FIELD_U8(a1, 14793) )
    sub_6047823C(*(_DWORD **)(FIELD_U32(a1, 16) + 4), v2);
  if ( !FIELD_U8(a1, 14794) )
    sub_6047823C(*(_DWORD **)(FIELD_U32(a1, 16) + 8), v2);
  if ( !FIELD_U8(a1, 14795) )
    sub_6047823C(*(_DWORD **)(FIELD_U32(a1, 16) + 12), v2);
  if ( !FIELD_U8(a1, 14796) )
    sub_6047823C(*(_DWORD **)(FIELD_U32(a1, 16) + 16), v2);
  if ( !FIELD_U8(a1, 14797) )
    sub_6047823C(*(_DWORD **)(FIELD_U32(a1, 16) + 20), v2);
  result = AreaTask_intance;
  FIELD_U8(AreaTask_intance, 1873) = 0;
  return result;
}
