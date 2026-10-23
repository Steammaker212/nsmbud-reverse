/* color_correction_ref
 * address: 0x609A9434   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall color_correction_ref(int a1, void *a2)
{
  int v3; // r0
  int v4; // r1
  int v6[6]; // [sp+0h] [bp-18h] BYREF

  v3 = operator_new_8DE25C(0x13B8u, a2, 4);
  FIELD_U32(a1, 148) = sub_609AA978(v3);
  agl_pfx_ColorCorrection_ref();
  *(_BYTE *)(FIELD_U32(a1, 148) + 440) = 1;
  v4 = FIELD_U32(a1, 148);
  if ( v4 )
    v4 += 4;
  v6[0] = (int)&sead__SafeStringBase__vtable;
  v6[1] = (int)"color_correction";
  return sub_60947328(a1 + 20, v4, v6);
}
