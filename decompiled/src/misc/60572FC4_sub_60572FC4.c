/* sub_60572FC4
 * address: 0x60572FC4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60572FC4(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int *v5; // r1

  FIELD_U32(a1, 7368) = 1;
  v2 = (_DWORD *)(a1 + 7368);
  FIELD_U8(a1, 7376) = 1;
  FIELD_U32(a1, 7296) = 48;
  ColliderBase_setType((ColliderBase *)(a1 + 6120), 8);
  v3 = 2;
  if ( sub_6056EAA4(a1) == 1 )
  {
    if ( FIELD_U32(a1, 6856) == 21 )
      FIELD_U8(a1, 6876) = 1;
    sub_60563AB8((ColliderBase *)a1);
    FIELD_U32(a1, 7288) = 1;
    if ( FIELD_U32(a1, 6856) == 21 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB111C);
      return 1;
    }
    if ( *v2 == 2 )
      v5 = &dword_60CAE31C;
    else
      v5 = &dword_60CAE2F8;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v5);
    return 1;
  }
  return v3;
}
