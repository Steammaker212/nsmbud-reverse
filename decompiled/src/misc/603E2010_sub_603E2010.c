/* sub_603E2010
 * address: 0x603E2010   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E2010(int a1)
{
  _BYTE *v1; // r4
  int v2; // r1
  unsigned int v3; // r0
  int *v4; // r1
  unsigned int v5; // r0
  int v6; // r0
  int *v7; // r1
  unsigned int v8; // r0
  int result; // r0

  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 8216) = 0;
  FIELD_U32(a1, 8224) = 1105618534;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6316) = 1000593162;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U8(a1, 8236) = 1;
  v1 = (_BYTE *)(a1 + 7560);
  sub_60421938(*(_DWORD **)(a1 + 7560), FIELD_U32(a1, 7556), (int)&dword_60C9959C);
  v2 = *(_DWORD *)(*(_DWORD *)v1 + 12);
  v3 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v3 )
    v2 += 4 * v3;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v2 + 4), 1);
  v4 = *(int **)(*(_DWORD *)v1 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v5 )
    v4 += v5;
  v6 = *v4;
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  v7 = *(int **)(*(_DWORD *)v1 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v1 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v1 + 8) > v8 )
    v7 += v8;
  result = *v7;
  *(_DWORD *)(*v7 + 24) = 1065353216;
  v1[677] = 0;
  return result;
}
