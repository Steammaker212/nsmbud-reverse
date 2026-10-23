/* sub_607261E4
 * address: 0x607261E4   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_607261E4(int a1, _WORD *a2, int a3)
{
  int v5; // r7
  _WORD *v6; // r6
  int v7; // r1
  _WORD *result; // r0
  bool v9; // zf
  unsigned __int16 v10; // [sp+6h] [bp-1Ah] BYREF

  if ( a3 == 1 && a2[1540] )
    sub_607262F8(a1, a2);
  v5 = 0;
  v10 = 0;
  v6 = a2 + 1544;
  if ( sub_6071B638((unsigned __int16)a2[1544], &v10) == 1 )
    sub_60723490(a1, a2, v10);
  v7 = (unsigned __int16)*v6;
  if ( (unsigned __int16)a2[1541] <= 0x100u )
    v5 = (unsigned __int16)a2[1541];
  result = *(_WORD **)(a1 + 4 * v5);
  if ( (unsigned __int16)*v6 <= 0x1Du )
  {
    if ( !*v6 )
      return result;
    if ( v7 != 28 || (FIELD_U32(dword_60C99DD4, 764) & 0xFFFFFFFE) == 2 )
      goto LABEL_20;
LABEL_19:
    *v6 = 0;
    return 0;
  }
  v9 = v7 == 30;
  if ( v7 != 30 )
    v9 = v7 == 46;
  if ( v9 && (FIELD_U32(dword_60C99DD4, 764) == 3 || FIELD_U8(dword_60C99DD4, 768)) )
    goto LABEL_19;
LABEL_20:
  result += (unsigned __int16)a2[1551];
  *result = v7;
  return result;
}
