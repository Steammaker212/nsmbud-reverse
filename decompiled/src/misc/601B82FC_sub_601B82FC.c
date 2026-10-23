/* sub_601B82FC
 * address: 0x601B82FC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B82FC(float *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int v4; // s0
  float *v5; // r0
  int result; // r0

  sub_601B83F8(a1, 0);
  sub_601B86B0(a1);
  v2 = sub_601CF9C0(dword_60C8AEF0);
  v3 = *((_DWORD *)a1 + 274);
  if ( v3 - 2 < 4 )
  {
    a1[50] = 8.0;
    a1[51] = FIELD_F32(v2, 204);
    a1[30] = 0.0;
    v4 = FIELD_U32(v2, 208);
LABEL_5:
    *((_DWORD *)a1 + 52) = v4;
    goto LABEL_6;
  }
  if ( v3 <= 1 )
  {
    a1[50] = 8.0 * sub_601C6030(a1);
    v4 = 0;
    a1[51] = 0.0;
    a1[30] = 0.0;
    goto LABEL_5;
  }
LABEL_6:
  *((_DWORD *)a1 + 277) |= 2u;
  v5 = (float *)sub_601E0040(a1 + 271);
  a1[249] = *v5;
  a1[250] = v5[1];
  a1[251] = v5[2];
  a1[252] = a1[296];
  a1[253] = a1[297];
  result = *((_DWORD *)a1 + 298);
  *((_DWORD *)a1 + 254) = result;
  return result;
}
