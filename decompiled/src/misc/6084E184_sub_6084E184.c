/* sub_6084E184
 * address: 0x6084E184   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6084E184(int a1)
{
  int v2; // r0
  float v3; // s2

  v2 = FIELD_U32(a1, 40);
  if ( v2 )
    v3 = (float)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 44))(v2);
  else
    v3 = 0.0;
  return FIELD_F32(a1, 60) + (float)(v3 * FIELD_F32(a1, 16));
}
