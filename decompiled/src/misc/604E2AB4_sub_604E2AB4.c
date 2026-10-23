/* sub_604E2AB4
 * address: 0x604E2AB4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E2AB4(int a1)
{
  int v2; // r5
  _BYTE *v3; // r1
  char v4; // r2
  int v5; // r0
  int v6; // r2
  int *v7; // r0

  v2 = dword_60C99DEC;
  if ( FIELD_U32(dword_60C99DEC, 508) == 1 )
  {
    v3 = (_BYTE *)(dword_60C99DEC + 36);
    v4 = 0;
LABEL_16:
    FIELD_U8(a1, 20524) = v4;
    goto LABEL_17;
  }
  v5 = sub_603FD0B4((_BYTE *)(dword_60C99DEC + 16));
  v3 = (_BYTE *)(v2 + 36);
  if ( FIELD_U8(v2, 36) && !FIELD_U32(v2, 40) )
    --v5;
  if ( FIELD_U8(v2, 108) && !FIELD_U32(v2, 112) )
    --v5;
  if ( FIELD_U8(v2, 180) && !FIELD_U32(v2, 184) )
    --v5;
  if ( FIELD_U8(v2, 252) && !FIELD_U32(v2, 256) )
    --v5;
  v4 = 1;
  if ( v5 )
    goto LABEL_16;
LABEL_17:
  v6 = 0;
  FIELD_U32(a1, 20512) = 0;
  v7 = (int *)(a1 + 20512);
  FIELD_U32(a1, 18476) = -1;
  FIELD_U32(a1, 18480) = -1;
  FIELD_U32(a1, 18484) = -1;
  FIELD_U32(a1, 18488) = -1;
  if ( *v3 && !FIELD_U32(v2, 40) )
  {
    v6 = 1;
    FIELD_U32(a1, 18476) = FIELD_U32(v2, 52);
    *v7 = 1;
  }
  if ( FIELD_U8(v2, 108) && !FIELD_U32(v2, 112) )
  {
    ++v6;
    FIELD_U32(a1, 18480) = FIELD_U32(v2, 124);
    *v7 = v6;
  }
  if ( FIELD_U8(v2, 180) && !FIELD_U32(v2, 184) )
  {
    ++v6;
    FIELD_U32(a1, 18484) = FIELD_U32(v2, 196);
    *v7 = v6;
  }
  if ( FIELD_U8(v2, 252) && !FIELD_U32(v2, 256) )
  {
    FIELD_U32(a1, 18488) = FIELD_U32(v2, 268);
    *v7 = v6 + 1;
  }
  FIELD_U8(a1, 20522) = 0;
  return 20522;
}
