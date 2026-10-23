/* Actor_guruguru_build
 * address: 0x602CA88C   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_guruguru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x30A0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE59B8;
  FIELD_U32(v2, 6300) = v2;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6308) = &ActorScaler_vtable;
  FIELD_U32(v2, 6312) = 1065353216;
  FIELD_U32(v2, 6316) = 1065353216;
  FIELD_U32(v2, 6320) = 1065353216;
  FIELD_U32(v2, 6324) = 1065353216;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6332) = 0;
  FIELD_U32(v2, 6336) = v2;
  FIELD_U8(v2, 6340) = 0;
  sub_602CAE24(v2 + 6344);
  sub_602CB994(v2 + 12424, v2 + 6300);
  FIELD_U32(v2, 12432) = 0;
  FIELD_U32(v2, 12436) = 0;
  FIELD_U32(v2, 12440) = off_60BE5C30;
  FIELD_U32(v2, 12444) = 0;
  FIELD_U32(v2, 640) = 0;
  return v2;
}
