/* sub_607C849C
 * address: 0x607C849C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C849C(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r0
  int v7; // r1
  int *v8; // r1
  int v9; // r2

  result = 0;
  if ( (FIELD_U32(a1, 1204) & 0x24000) == 0 && (FIELD_U8(a1, 1219) & 8) == 0 )
  {
    switch ( a3 )
    {
      case 0:
      case 1:
      case 9:
      case 11:
      case 12:
        return result;
      case 2:
        v6 = *(_DWORD *)a1;
        v7 = 4;
        return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
      case 3:
        v6 = *(_DWORD *)a1;
        v7 = 6;
        return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        v6 = *(_DWORD *)a1;
        v7 = a3;
        return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
      case 10:
        LavaDown_type_d_mode_d_IsPassingDown_s_ref(a1, 10);
        return 1;
      case 13:
        Player_changeState(a1, (StateBase *)&dword_60CC4ECC, 0);
        return 1;
      case 14:
        v8 = (int *)a1;
        v9 = 3;
        goto LABEL_14;
      case 15:
        v8 = (int *)a1;
        v9 = 0;
        goto LABEL_14;
      case 16:
        v8 = (int *)a1;
        v9 = 4;
LABEL_14:
        sub_60777FB4(dword_60CBFA90, v8, v9);
        break;
      case 17:
      case 18:
        sub_607A7AA4(a1, a2, a3);
        break;
      case 19:
        sub_60765E4C(a1);
        break;
      default:
        return 1;
    }
    return 1;
  }
  return result;
}
