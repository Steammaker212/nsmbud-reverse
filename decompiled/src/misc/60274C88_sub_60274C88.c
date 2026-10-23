/* sub_60274C88
 * address: 0x60274C88   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60274C88(int a1)
{
  _BYTE *v2; // r4
  int v3; // t1
  int *v4; // r0
  int result; // r0

  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U32(a1, 120) = 1051361018;
  FIELD_U32(a1, 124) = 1071644672;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 1051361018;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 1000593162;
  FIELD_U32(a1, 100) = -1110651699;
  v3 = FIELD_U32(a1, 6308);
  v2 = (_BYTE *)(a1 + 6308);
  *(_DWORD *)(**(_DWORD **)(v3 + 28) + 24) = 1092616192;
  v4 = *(int **)(*(_DWORD *)v2 + 28);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 24) > 1u )
    ++v4;
  result = *v4;
  FIELD_U32(result, 24) = 1092616192;
  v2[216] = 0;
  return result;
}
