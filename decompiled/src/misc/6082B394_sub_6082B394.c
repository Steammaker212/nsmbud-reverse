/* sub_6082B394
 * address: 0x6082B394   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082B394(int a1)
{
  int v2; // r7
  _BYTE *v3; // r4
  int v4; // t1
  _BYTE *v5; // r4
  int i; // r7
  int result; // r0

  v2 = FIELD_U32(a1, 40);
  *(_DWORD *)v2 = off_60C5CB10(*(_DWORD *)v2);
  FIELD_U8(v2, 4) = off_60C5CB00(FIELD_U8(v2, 4));
  FIELD_U8(v2, 5) = off_60C5CB00(FIELD_U8(v2, 5));
  FIELD_U8(v2, 6) = off_60C5CB00(FIELD_U8(v2, 6));
  FIELD_U8(v2, 7) = off_60C5CB00(FIELD_U8(v2, 7));
  FIELD_U32(v2, 12) = off_60C5CB10(FIELD_U32(v2, 12));
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 16);
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 3136);
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 536);
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 3656);
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 1056);
  sub_6082C084(FIELD_U32(a1, 40), FIELD_U32(a1, 40) + 4176);
  sub_6082C68C(a1);
  v3 = *(_BYTE **)(a1 + 40);
  v4 = (unsigned __int8)v3[19580];
  v3 += 19580;
  *v3 = off_60C5CB00(v4);
  v5 = v3 + 132;
  for ( i = 0; i != 32; ++i )
  {
    *(_DWORD *)&v5[4 * i - 128] = off_60C5CB10(*(_DWORD *)&v5[4 * i - 128]);
    result = off_60C5CB00((unsigned __int8)v5[i]);
    v5[i] = result;
  }
  return result;
}
