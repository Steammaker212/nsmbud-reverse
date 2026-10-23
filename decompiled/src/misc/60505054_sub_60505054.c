/* sub_60505054
 * address: 0x60505054   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505054(int a1, float a2, int a3, int a4)
{
  int v6; // r0
  int result; // r0
  int v8; // r0
  int (**v10)(); // [sp+8h] [bp-18h] BYREF
  int v11; // [sp+Ch] [bp-14h]

  sub_60504EF4((_DWORD *)a1);
  if ( a4 != 3 )
  {
    if ( a4 == 1 )
    {
      FIELD_U8(a1, 3904) = 0;
      v8 = sub_605057D8(0);
    }
    else
    {
      if ( !a4 )
      {
        FIELD_U8(a1, 3904) = 1;
        v6 = sub_605057D8(1);
        goto LABEL_6;
      }
      FIELD_U8(a1, 3904) = 1;
      v8 = sub_605057D8(1);
    }
    v10 = &sead__SafeStringBase__vtable;
    v11 = v8;
    sub_60473DE4((_DWORD *)a1, 0, &v10, 0);
    result = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3512) + 104))(**(_DWORD **)(a1 + 3512));
    if ( a2 < 0.0 )
      return result;
    goto LABEL_11;
  }
  FIELD_U8(a1, 3904) = 0;
  v6 = sub_605057D8(0);
LABEL_6:
  v10 = &sead__SafeStringBase__vtable;
  v11 = v6;
  sub_604741D8((_DWORD *)a1, 0, &v10, 0);
  if ( a2 < 0.0 )
    return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3512) + 108))(**(_DWORD **)(a1 + 3512));
LABEL_11:
  sub_6047455C(a1, 0, a2);
  return sub_6047459C(a1, 0);
}
