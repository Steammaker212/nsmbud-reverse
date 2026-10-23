/* sub_608D39CC
 * address: 0x608D39CC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D39CC(int a1)
{
  int v2; // r5

  v2 = a1 + 4;
  *(_DWORD *)a1 = off_60C5B7B8;
  nn__os__InitializeEvent(a1 + 4, 0, 0);
  FIELD_U8(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 104) = 1065353216;
  FIELD_U32(a1, 100) = 1065353216;
  FIELD_U32(a1, 96) = 1065353216;
  FIELD_U32(a1, 92) = 1065353216;
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 84) = 1065353216;
  FIELD_U32(a1, 128) = 1065353216;
  FIELD_U32(a1, 124) = 1065353216;
  FIELD_U32(a1, 120) = 1065353216;
  FIELD_U32(a1, 116) = 1065353216;
  FIELD_U32(a1, 112) = 1065353216;
  FIELD_U32(a1, 108) = 1065353216;
  FIELD_U32(a1, 44) = 1065353216;
  FIELD_U32(a1, 48) = 1065353216;
  FIELD_U32(a1, 52) = 0;
  FIELD_U8(a1, 60) = -1;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 64) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 72) = 1;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 152) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  nn__os__SignalEvent(v2);
  return a1;
}
