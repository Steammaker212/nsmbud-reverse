/* Actor_rotate_pipe_RDash_build
 * address: 0x606D2994   size: 272   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_pipe_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AF8u);
  sub_606CA0DC((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1DD60;
  FIELD_U32(v2, 6152) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6192));
  FIELD_U32(v2, 6192) = off_60BC30D8;
  FIELD_U32(v2, 6864) = 0;
  FIELD_U32(v2, 6868) = 0;
  FIELD_U32(v2, 6872) = 0;
  FIELD_U32(v2, 6184) = 0;
  FIELD_U32(v2, 6180) = 0;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U32(v2, 6172) = 0;
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U8(v2, 6862) = 0;
  FIELD_U16(v2, 6860) = 0;
  FIELD_U32(v2, 6856) = 0;
  FIELD_U32(v2, 6852) = 0;
  FIELD_U32(v2, 6848) = 0;
  FIELD_U32(v2, 6900) = 0;
  FIELD_U8(v2, 6896) = 0;
  FIELD_U32(v2, 6892) = 0;
  FIELD_U32(v2, 6888) = 0;
  FIELD_U32(v2, 6884) = 0;
  FIELD_U32(v2, 6880) = 0;
  return v2;
}
