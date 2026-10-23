/* sub_602DC29C
 * address: 0x602DC29C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602DC29C(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  Actor *v6; // r0
  float CenterX; // s16
  float CenterY; // s18
  float v10[12]; // [sp+0h] [bp-30h] BYREF

  v6 = &FIELD_U32(a3, 0x40);
  if ( !v6 || Actor__getProfileId(v6) != 574 || !sub_602DC370(a1) )
    return Enemy__vf100(a1, a2, a3);
  CenterX = ActiveCollider_getCenterX(a2);
  CenterY = ActiveCollider_getCenterY(a2);
  v10[0] = (float)(CenterX + ActiveCollider_getCenterX(a3)) * 0.5;
  v10[1] = (float)(CenterY + ActiveCollider_getCenterY(a3)) * 0.5;
  SE_EMY_KALON_ref_2DC488(a1, 4, v10, 0);
  return 1;
}
