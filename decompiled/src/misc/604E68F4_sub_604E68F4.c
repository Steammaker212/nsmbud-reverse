/* sub_604E68F4
 * address: 0x604E68F4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E68F4(int a1, int a2)
{
  int *v3; // r1
  int result; // r0
  int (**v5)(); // [sp+8h] [bp-10h] BYREF
  char *v6; // [sp+Ch] [bp-Ch]

  v5 = &sead__SafeStringBase__vtable;
  v6 = off_60C5CB34;
  switch ( a2 )
  {
    case 1:
      v3 = &dword_60CA5A84;
      goto LABEL_7;
    case 2:
      v3 = &dword_60CA5A8C;
      goto LABEL_7;
    case 3:
      v3 = &dword_60CA5A94;
      goto LABEL_7;
    case 4:
      v3 = &dword_60CA5A9C;
      goto LABEL_7;
    case 5:
      v3 = &dword_60CA5AA4;
LABEL_7:
      sead__SafeStringBase__operator_assign((int)&v5, (int)v3);
      break;
    default:
      break;
  }
  result = (unsigned __int8)*v6;
  if ( *v6 )
    return sub_6047467C(*(_DWORD **)(a1 + 4), 4u, &v5, (int)&dword_60CA5C40, 1.0, 0);
  return result;
}
