/* sub_601D74B8
 * address: 0x601D74B8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601D74B8(_DWORD *a1)
{
  _DWORD *v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r0
  int v5; // r0

  v2 = (_DWORD *)a1[68];
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*v2 + 92))(v2) == 1 )
      {
        result = (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD *))(*v2 + 108))(v2);
        if ( result != (StateMethodExecuter *)1 )
          break;
      }
      v2 = (_DWORD *)v2[68];
      if ( !v2 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v4 = a1[281];
    if ( v4 < 1 )
    {
      v5 = sub_6019E7D8(dword_60C89DF8);
      a1[309] = v5;
      if ( v5 )
        FIELD_U8(v5, 12892) = 1;
      return sub_601B1FA4((int)a1, (StateBase *)&dword_60C8AB00);
    }
    else
    {
      result = (StateMethodExecuter *)(v4 - 1);
      a1[281] = result;
    }
  }
  return result;
}
