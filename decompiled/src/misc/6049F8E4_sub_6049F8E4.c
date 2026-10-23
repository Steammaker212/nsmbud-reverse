/* sub_6049F8E4
 * address: 0x6049F8E4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049F8E4(int a1)
{
  _DWORD *v2; // r5
  int v3; // r4
  int v4; // t1

  v2 = (_DWORD *)(a1 + 44);
  if ( FIELD_U8(dword_60C99DEC, 522) )
    FIELD_U8(a1, 12982) = 1;
  sub_60473DE4(v2, 0, &dword_60CA0B64, 0);
  sub_604741D8(v2, 1u, &dword_60CA0B8C, 0);
  v4 = FIELD_U32(a1, 5752);
  v3 = a1 + 5752;
  *(_DWORD *)v3 = v4 | 1;
  FIELD_U8(v3, 14556) = 1;
  FIELD_U8(v3, 14557) = 1;
  FIELD_U8(v3, 16749) = 1;
  FIELD_U8(v3, 16751) = 1;
  return 16751;
}
