/* sub_6045C47C
 * address: 0x6045C47C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045C47C(int result)
{
  _BYTE *v1; // r2
  int v2; // r1
  float v3; // s0
  int *v4; // r3
  int v5; // r2

  v1 = (_BYTE *)(result + 6321);
  if ( FIELD_U8(result, 6322) == 1 )
  {
    v2 = 2;
    *v1 = 2;
  }
  else
  {
    v2 = (unsigned __int8)*v1;
  }
  v3 = flt_60B02588[v2];
  FIELD_U32(result, 120) = dword_60B0257C[v2];
  FIELD_F32(result, 124) = (float)(v3 + v3) + 0.3;
  FIELD_U32(result, 128) = 0;
  v4 = dword_6045C53C;
  LOWORD(v5) = 0;
  if ( (FIELD_U32(result, 20) & 0x100000) == 0 )
    v4 = &dword_6045C53C[1];
  HIWORD(v5) = -16256;
  FIELD_U32(result, 100) = *v4;
  FIELD_U32(result, 132) = 0;
  FIELD_U32(result, 136) = v5;
  FIELD_U32(result, 140) = 0;
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(result, 6104) + 12) + 24) = 1065353216;
  FIELD_U32(result, 6324) = 8;
  return result;
}
