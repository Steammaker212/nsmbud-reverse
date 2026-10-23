/* sub_604D8414
 * address: 0x604D8414   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D8414(_DWORD *a1)
{
  _BYTE *v1; // r3
  int v2; // r1
  unsigned int v3; // r2
  int result; // r0

  v1 = &unk_60B02FC8;
  v2 = dword_60C99DEC;
  v3 = a1[3319];
  if ( v3 < 3 )
    v1 = (char *)&unk_60B02FC8 + v3;
  FIELD_U8(dword_60C99DEC, 531) = *v1;
  FIELD_U8(v2, 532) = 0;
  *(_BYTE *)(a1[1443] + 64) &= ~1u;
  *(_BYTE *)(a1[1444] + 64) &= ~1u;
  *(_BYTE *)(a1[1445] + 64) &= ~1u;
  *(_BYTE *)(a1[1446] + 64) &= ~1u;
  result = a1[1447];
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
