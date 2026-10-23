/* Actor_CourseSelectkosupointo_build
 * address: 0x60178A84   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectkosupointo_build(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r2

  v2 = operator_new(0x1A4u);
  sub_601A75F0(v2, a1);
  *(_DWORD *)v2 = off_60BD4F74;
  FIELD_U32(v2, 292) = 0;
  FIELD_U32(v2, 288) = 0;
  FIELD_U32(v2, 284) = 0;
  FIELD_U32(v2, 280) = 0;
  FIELD_U32(v2, 276) = 0;
  FIELD_U32(v2, 272) = 0;
  FIELD_U32(v2, 268) = 0;
  v3 = FIELD_U32(v2, 84);
  v4 = FIELD_U32(v2, 88);
  FIELD_U32(v2, 296) = FIELD_U32(v2, 80);
  FIELD_U32(v2, 300) = v3;
  FIELD_U32(v2, 304) = v4;
  FIELD_U32(v2, 308) = 0;
  FIELD_U32(v2, 312) = 0;
  FIELD_U32(v2, 316) = 0;
  FIELD_U32(v2, 320) = 1065353216;
  FIELD_U32(v2, 324) = 1114636288;
  FIELD_U32(v2, 328) = 0;
  FIELD_U32(v2, 336) = v2 + 344;
  FIELD_U32(v2, 332) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v2, 340) = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 332);
  **(_BYTE **)(v2 + 336) = 0;
  FIELD_U32(v2, 332) = &off_60BD4F38;
  FIELD_U32(v2, 404) = 0;
  FIELD_U32(v2, 408) = -1;
  EffectData_ctor((EffectData *)(v2 + 352));
  FIELD_U32(v2, 416) = 1;
  FIELD_U32(v2, 264) = FIELD_U32(a1, 4);
  return v2;
}
