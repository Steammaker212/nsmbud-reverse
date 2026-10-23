/* sub_60199FD4
 * address: 0x60199FD4   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60199FD4(int a1, int a2, _DWORD *a3)
{
  _BYTE *v6; // r7
  int v7; // r0
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v6 = (_BYTE *)a3[1];
  *v6 = 87;
  v6[1] = a1 + 49;
  switch ( sub_6019A120(a2) )
  {
    case 0:
      v6[2] = 48;
      v7 = a2 % 10 + 49;
      goto LABEL_12;
    case 1:
      v6[2] = 71;
      LOBYTE(v7) = a2 + 29;
      goto LABEL_12;
    case 2:
      v6[2] = 84;
      LOBYTE(v7) = a2 + 28;
      goto LABEL_12;
    case 3:
      v6[2] = 67;
      LOBYTE(v7) = a2 + 26;
      goto LABEL_12;
    case 4:
      sub_6040E074(a3, a1, a2);
      goto LABEL_13;
    case 5:
      v6[2] = 65;
      LOBYTE(v7) = a2 + 12;
      goto LABEL_12;
    case 6:
      v6[2] = 77;
      LOBYTE(v7) = a2 + 11;
      goto LABEL_12;
    case 7:
      v6[2] = 66;
      LOBYTE(v7) = a2 + 7;
      goto LABEL_12;
    case 8:
      v6[2] = 83;
      LOBYTE(v7) = 48;
LABEL_12:
      v6[3] = v7;
LABEL_13:
      v6[4] = 0;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
