/* sub_607BA05C
 * address: 0x607BA05C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA05C(int a1)
{
  int v2; // r1
  int v3; // r0
  int result; // r0

  FIELD_U32(a1, 160) += FIELD_U32(a1, 12100);
  sub_6079F31C(a1);
  v2 = FIELD_U32(a1, 12112);
  if ( v2 )
    FIELD_U32(a1, 12112) = v2 - 1;
  v3 = FIELD_U32(a1, 12108);
  if ( v3 )
  {
    FIELD_U32(a1, 12108) = v3 - 1;
    if ( v3 - 1 >= 28 && (FIELD_U8(a1, 1222) & 0x80) != 0 )
      ((void (__fastcall *)(int, float))loc_6079F3F0)(a1, (float)(31 - v3) * -3.0);
  }
  if ( (FIELD_U8(a1, 1223) & 1) != 0 )
    result = ((int (__fastcall *)(int))loc_607BA11C)(a1);
  else
    result = sub_607BA308(a1);
  if ( !result )
    return sub_607C16A0(a1, 1);
  return result;
}
