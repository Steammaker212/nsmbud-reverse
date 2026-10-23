/* sub_605F1938
 * address: 0x605F1938   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F1938(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r8
  int v4; // r5
  int v5; // r0
  _DWORD v7[9]; // [sp+14h] [bp-24h] BYREF

  FIELD_U32(a1, 6356) = 0;
  v2 = (_DWORD *)(a1 + 6356);
  if ( Actor__getProfileId((Actor *)a1) != 46 )
  {
    v3 = (_DWORD *)(a1 + 20);
LABEL_6:
    v4 = 1;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + 8.0;
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
    v5 = FIELD_U32(a1, 24);
    FIELD_U32(a1, 6352) = (unsigned __int8)__ROR4__(v5, 8) + 1;
    FIELD_F32(a1, 6360) = (float)((float)(unsigned __int8)v5 + 1.0) * 8.0;
    FIELD_U8(a1, 6364) = FIELD_U8(a1, 28);
    sub_605F1AA8(a1);
    FIELD_F32(a1, 500) = FIELD_F32(a1, 6360) + 256.0;
    FIELD_U32(a1, 504) = 1149239296;
    memset(v7, 0, 12);
    MovementHandler_init3(
      (MovementHandler *)(a1 + 6104),
      (int *)(a1 + 108),
      1,
      FIELD_U8(a1, 6364),
      v7,
      (*v3 & 0x4000000) != 0,
      (*v3 & 0x8000000) != 0,
      HIBYTE(*v3) & 1,
      0);
    MovementHandler__execute((MovementHandler *)(a1 + 6104));
    return v4;
  }
  v3 = (_DWORD *)(a1 + 20);
  *v2 = 1;
  if ( (FIELD_U8(a1, 23) & 0x10) == 0 )
    goto LABEL_6;
  v4 = 2;
  if ( FIELD_U32(dword_60C99DD4, 764) == 2 )
    goto LABEL_6;
  return v4;
}
