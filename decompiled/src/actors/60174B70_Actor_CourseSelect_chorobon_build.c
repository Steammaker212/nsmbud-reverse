/* Actor_CourseSelect_chorobon_build
 * address: 0x60174B70   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelect_chorobon_build(int a1)
{
  int v2; // r5

  v2 = operator_new(0x278u);
  sub_6018668C(v2, a1);
  *(_DWORD *)v2 = off_60BD4E20;
  FIELD_U32(v2, 372) = 0;
  FIELD_U32(v2, 376) = 0;
  FIELD_U32(v2, 380) = 0;
  FIELD_U32(v2, 384) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 388));
  FIELD_U32(v2, 388) = off_60BC1450;
  memset((void *)(v2 + 492), 0, 139);
  return v2;
}
