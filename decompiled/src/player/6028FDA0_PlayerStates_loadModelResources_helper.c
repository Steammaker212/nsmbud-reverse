/* PlayerStates_loadModelResources_helper
 * address: 0x6028FDA0   size: 220   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_loadModelResources_helper(int a1, char a2)
{
  *(_DWORD *)a1 = &off_60BDE8EC;
  FIELD_U32(a1, 4) = &off_60BDE8FC;
  FIELD_U32(a1, 8) = &off_60BDE920;
  FIELD_U32(a1, 12) = a1;
  FIELD_U32(a1, 16) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 20), (StateExecuter *)(a1 + 4), &NullState);
  *(_DWORD *)a1 = &off_60BDE8DC;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 48) = -1;
  memset((void *)(a1 + 52), 0, 36);
  FIELD_U32(a1, 88) = 1065353216;
  FIELD_U32(a1, 92) = 1065353216;
  FIELD_U32(a1, 96) = 1065353216;
  FIELD_U8(a1, 100) = a2;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  EffectWrapper_ctor((EffectWrapper *)(a1 + 136));
  FIELD_U32(a1, 136) = off_60BC1450;
  return a1;
}
