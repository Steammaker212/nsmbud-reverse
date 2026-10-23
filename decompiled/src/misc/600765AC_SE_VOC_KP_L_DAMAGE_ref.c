/* SE_VOC_KP_L_DAMAGE_ref
 * address: 0x600765AC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_VOC_KP_L_DAMAGE_ref(_DWORD *a1, int a2)
{
  int v2; // r2
  int v3; // r1

  v2 = a1[1575] % a1[1576];
  v3 = v2 + a2;
  if ( v2 <= 50 && v3 >= 51 )
    return sub_60813430(a1 + 1583, "SE_VOC_KP_L_DAMAGE_FIRST", 0);
  if ( v2 <= 40 && v3 >= 41 )
    return sub_60813430(a1 + 1583, "SE_VOC_KP_L_DAMAGE_SECOND", 0);
  if ( v2 <= 30 && v3 >= 31 )
    return sub_60813430(a1 + 1583, "SE_VOC_KP_L_DAMAGE_THERD", 0);
  if ( v2 <= 20 && v3 >= 21 )
    return sub_60813430(a1 + 1583, "SE_VOC_KP_L_DAMAGE_FOURTH", 0);
  if ( v2 > 10 || v3 < 11 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 984))(a1);
  return sub_60813430(a1 + 1583, "SE_VOC_KP_L_DAMAGE_FIFTH", 0);
}
