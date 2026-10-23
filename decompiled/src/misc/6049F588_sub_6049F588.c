/* sub_6049F588
 * address: 0x6049F588   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049F588(_DWORD *a1)
{
  _DWORD *v1; // r1
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int result; // r0

  v1 = (_DWORD *)dword_60C99DEC;
  FIELD_U8(dword_60C99DEC, 522) = 0;
  v1[14] = 0;
  v1[32] = 0;
  v1[50] = 0;
  v1[68] = 0;
  v2 = a1[5069];
  if ( FIELD_U8(v2, 2689) )
    FIELD_U8(v2, 2697) = 1;
  v3 = a1[5070];
  if ( FIELD_U8(v3, 2689) )
    FIELD_U8(v3, 2697) = 1;
  v4 = a1[5071];
  if ( FIELD_U8(v4, 2689) )
    FIELD_U8(v4, 2697) = 1;
  result = a1[5072];
  if ( FIELD_U8(result, 2689) )
    FIELD_U8(result, 2697) = 1;
  return result;
}
