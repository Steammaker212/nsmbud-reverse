/* HoverButtonAnim_ref
 * address: 0x60993AC0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall HoverButtonAnim_ref(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0
  int v7; // r9
  void *v8; // r8
  _DWORD *v9; // r7
  _DWORD *v10; // t1
  int v11; // r4
  int v12; // t1

  result = (_DWORD *)sub_60993D34();
  if ( result == (_DWORD *)1 )
  {
    result = sub_6085982C(a1, "HoverButtonAnim");
    if ( result )
    {
      result = sub_60980684(a2, (int)result + result[1], 1);
      v7 = (int)result;
      if ( result )
      {
        v8 = (void *)sub_609908C0();
        v9 = (_DWORD *)operator_new_8DE25C(0x3Cu, v8, 4);
        sub_60990E0C();
        *v9 = off_60C6041C;
        sub_60993A0C((int)v9, v8, a1, v7, (int)a2);
        v10 = (_DWORD *)v9[1];
        ++v9;
        result = v10;
        v12 = FIELD_U32(a3, 4);
        v11 = a3 + 4;
        *v9 = v12;
        result[1] = v11;
        *(_DWORD *)(*(_DWORD *)v11 + 4) = v9;
        *(_DWORD *)v11 = result;
      }
    }
  }
  return result;
}
