/* sub_60488368
 * address: 0x60488368   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60488368(int a1)
{
  unsigned int v2; // r0
  _DWORD *v3; // r4
  unsigned int v4; // r0
  int v5; // r0
  int v6; // r5
  int result; // r0

  sub_60502694(a1 + 3768);
  v2 = FIELD_U32(a1, 14228);
  if ( v2 >= 4 )
    v2 = 0;
  v3 = *(_DWORD **)(a1 + 4 * v2 + 47800);
  v4 = v3[13];
  if ( v4 >= 0x43 )
    v4 = 0;
  v5 = *(_DWORD *)(v3[17] + 4 * v4 + 3636);
  FIELD_U32(dword_60C99DB8, 614136) = v5;
  v6 = dword_60C99DEC;
  FIELD_U8(dword_60C99DEC, 580) = v5;
  FIELD_U8(v6, 581) = v3[11];
  FIELD_U8(v6, 582) = v3[12];
  FIELD_U8(v6, 583) = v3[15];
  FIELD_U8(v6, 588) = v3[10];
  FIELD_F32(v6, 584) = sub_6047457C(v3[17], 0);
  result = v3[14];
  FIELD_U8(v6, 589) = result;
  return result;
}
