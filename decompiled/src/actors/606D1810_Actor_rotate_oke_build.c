/* Actor_rotate_oke_build
 * address: 0x606D1810   size: 684   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_oke_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x33A0u);
  sub_606CA0DC((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1DB6C;
  memset((void *)(v2 + 6168), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6316));
  FIELD_U32(v2, 6316) = off_60BC6E38;
  FIELD_U32(v2, 6332) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6336));
  FIELD_U32(v2, 6336) = off_60BC6E38;
  FIELD_U32(v2, 6352) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6356));
  FIELD_U32(v2, 6356) = off_60BC6E38;
  FIELD_U32(v2, 6372) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6376));
  FIELD_U32(v2, 6376) = off_60BC6E38;
  memset((void *)(v2 + 6392), 0, 870);
  FIELD_U8(v2, 7264) = 0;
  memset((void *)(v2 + 7268), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7416));
  FIELD_U32(v2, 7416) = off_60BC6E38;
  FIELD_U32(v2, 7432) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7436));
  FIELD_U32(v2, 7436) = off_60BC6E38;
  FIELD_U32(v2, 7452) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7456));
  FIELD_U32(v2, 7456) = off_60BC6E38;
  FIELD_U32(v2, 7472) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 7476));
  FIELD_U32(v2, 7476) = off_60BC6E38;
  memset((void *)(v2 + 7492), 0, 870);
  FIELD_U8(v2, 8364) = 0;
  memset((void *)(v2 + 8368), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 8516));
  FIELD_U32(v2, 8516) = off_60BC6E38;
  FIELD_U32(v2, 8532) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 8536));
  FIELD_U32(v2, 8536) = off_60BC6E38;
  FIELD_U32(v2, 8552) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 8556));
  FIELD_U32(v2, 8556) = off_60BC6E38;
  FIELD_U32(v2, 8572) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 8576));
  FIELD_U32(v2, 8576) = off_60BC6E38;
  memset((void *)(v2 + 8592), 0, 870);
  FIELD_U8(v2, 9464) = 0;
  memset((void *)(v2 + 9468), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 9616));
  FIELD_U32(v2, 9616) = off_60BC6E38;
  FIELD_U32(v2, 9632) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 9636));
  FIELD_U32(v2, 9636) = off_60BC6E38;
  FIELD_U32(v2, 9652) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 9656));
  FIELD_U32(v2, 9656) = off_60BC6E38;
  FIELD_U32(v2, 9672) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 9676));
  FIELD_U32(v2, 9676) = off_60BC6E38;
  memset((void *)(v2 + 9692), 0, 870);
  FIELD_U8(v2, 10564) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 10568));
  FIELD_U32(v2, 10568) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 11224));
  FIELD_U32(v2, 11224) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 11880));
  FIELD_U32(v2, 11880) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 12536));
  FIELD_U32(v2, 12536) = off_60BC30D8;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 13192));
  FIELD_U32(v2, 13192) = off_60BC6E38;
  FIELD_U32(v2, 13208) = 0;
  return v2;
}
