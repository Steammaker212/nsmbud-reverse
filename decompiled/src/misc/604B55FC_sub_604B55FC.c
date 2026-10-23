/* sub_604B55FC
 * address: 0x604B55FC   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B55FC(int a1, float *a2)
{
  float v2; // s2
  float v3; // s0
  bool v4; // cc
  int v5; // r1
  _BYTE *v6; // r2
  char v7; // r2

  v2 = *a2;
  v3 = a2[1];
  v4 = FIELD_F32(a1, 14836) > *a2;
  v5 = FIELD_U8(AreaTask_intance, 1872);
  if ( !v4 && v2 <= FIELD_F32(a1, 14844) && FIELD_F32(a1, 14840) <= v3 && v3 <= FIELD_F32(a1, 14848)
    || FIELD_F32(a1, 14852) <= v2
    && v2 <= FIELD_F32(a1, 14860)
    && FIELD_F32(a1, 14856) <= v3
    && v3 <= FIELD_F32(a1, 14864)
    || (v6 = (_BYTE *)(a1 + 14941), FIELD_F32(a1, 14868) <= v2)
    && v2 <= FIELD_F32(a1, 14876)
    && FIELD_F32(a1, 14872) <= v3
    && v3 <= FIELD_F32(a1, 14880)
    && (*v6 || FIELD_U8(a1, 14796))
    || FIELD_F32(a1, 14884) <= v2
    && v2 <= FIELD_F32(a1, 14892)
    && FIELD_F32(a1, 14888) <= v3
    && v3 <= FIELD_F32(a1, 14896)
    && (!*v6 || FIELD_U8(a1, 14797))
    || (v7 = 0, FIELD_F32(a1, 14900) <= v2)
    && v2 <= FIELD_F32(a1, 14908)
    && FIELD_F32(a1, 14904) <= v3
    && v3 <= FIELD_F32(a1, 14912) )
  {
    v7 = 1;
    FIELD_U8(a1, 14940) = 1;
  }
  return (v5 != 0) & (unsigned __int8)v7;
}
