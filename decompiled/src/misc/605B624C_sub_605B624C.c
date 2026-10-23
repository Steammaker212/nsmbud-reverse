/* sub_605B624C
 * address: 0x605B624C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605B624C(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r0
  int v7; // t1
  int v8; // r5
  int v9; // r0
  int v10; // r1

  v7 = a1[1714];
  v6 = a1 + 1714;
  switch ( v7 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 22:
    case 23:
    case 25:
      goto LABEL_2;
    case 14:
      (*(void (__fastcall **)(_DWORD *))(*a1 + 240))(a1);
      break;
    case 16:
    case 18:
      v8 = sub_605B8DC4(dword_60CB061C);
      v9 = sub_6078A030(PlayerMgr_instance);
      v10 = a1[1716];
      if ( v8 >= v9 )
        SE_PLY_YOSHI_EGG_APPEAR_ref_2((int)a1, v10);
      else
        SE_PLY_YOSHI_EGG_APPEAR_ref_3((int)a1, v10, v8);
      break;
    case 19:
      *v6 = 3;
LABEL_2:
      sub_605B5FA8((int)a1, a2, a3, a4, a5);
      break;
    default:
      return;
  }
}
