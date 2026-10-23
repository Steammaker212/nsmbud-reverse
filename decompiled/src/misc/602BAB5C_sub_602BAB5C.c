/* sub_602BAB5C
 * address: 0x602BAB5C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BAB5C(int a1, int a2, float a3)
{
  int v3; // r2
  _DWORD v5[2]; // [sp+4h] [bp-1Ch] BYREF
  Vec3 v6; // [sp+Ch] [bp-14h] BYREF

  v6.x = FIELD_F32(a1, 108);
  v6.y = a3;
  v5[0] = LODWORD(v6.x);
  v6.z = 4500.0;
  *(float *)&v5[1] = a3;
  if ( a2 == 5 )
  {
    EffectData_create(688, &v6, 0, 0);
    v3 = 23;
  }
  else if ( (unsigned int)(a2 - 3) > 1 )
  {
    EffectData_create(687, &v6, 0, 0);
    v3 = 6;
  }
  else
  {
    EffectData_create(689, &v6, 0, 0);
    v3 = 16;
  }
  return TileMgr_splashRelated(TileMgr_instance, v5, v3);
}
