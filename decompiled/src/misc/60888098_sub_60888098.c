/* sub_60888098
 * address: 0x60888098   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60888098(_DWORD *a1, __int64 a2)
{
  int v3; // lr
  int v4; // r12
  bool v5; // zf
  int v6; // r1

  while ( 1 )
  {
    v4 = a1[19];
    v5 = v4 == 0;
    if ( v4 )
    {
      v3 = a1[24];
      v5 = v3 == 0;
    }
    if ( !v5 )
      break;
LABEL_8:
    a1 = (_DWORD *)a1[247];
    if ( !a1 )
      return 0;
  }
  while ( *(_QWORD *)v3 != a2 )
  {
    v6 = FIELD_U32(v3, 8);
    v4 += 104;
    if ( v6 )
      v6 += v3;
    v3 = v6;
    if ( !v6 )
      goto LABEL_8;
  }
  return v4;
}
