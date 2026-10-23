/* sub_603F0BF4
 * address: 0x603F0BF4   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F0BF4(int a1, int a2, int a3, _DWORD *a4)
{
  switch ( a3 )
  {
    case 0:
      if ( dword_60CBD830 )
        sub_6071EB78(dword_60CBD830, a4);
      break;
    case 2:
      if ( dword_60CBD830 )
        sub_6071EC70(dword_60CBD830, a4);
      break;
    case 3:
      if ( dword_60CBD830 )
        sub_6071F0DC(dword_60CBD830, a4);
      break;
    case 9:
      gaussian_ref(dword_60C9BAAC, 2, a4);
      sub_60239E08(dword_60C8D9DC, FIELD_U32(dword_60C9BAAC, 120));
      sub_60239158(dword_60C8D9DC, a4, 1, 0);
      sub_60239158(dword_60C8D9DC, a4, 2, 0);
      break;
    case 10:
      if ( dword_60CBD830 )
        sub_6071F19C(dword_60CBD830, a4);
      break;
    case 11:
      sub_60239158(dword_60C8D9DC, a4, 3, dword_60C8D9DC + 236);
      break;
    case 13:
      if ( dword_60CBD830 )
        sub_6071F644(dword_60CBD830, a4);
      break;
    case 14:
      if ( dword_60CBD830 )
      {
        sub_6071F6CC(dword_60CBD830, a4);
        if ( dword_60CBD830 )
          sub_607206D0(dword_60CBD830, 3, a4);
      }
      break;
    case 15:
      sub_60239158(dword_60C8D9DC, a4, 3, dword_60C8D9DC + 1272);
      gaussian_ref(dword_60C9BAAC, 2, a4);
      sub_60239E08(dword_60C8D9DC, FIELD_U32(dword_60C9BAAC, 120));
      sub_60239158(dword_60C8D9DC, a4, 4, 0);
      sub_60239158(dword_60C8D9DC, a4, 5, 0);
      if ( dword_60CBD830 )
        sub_6071F340(dword_60CBD830, a4);
      break;
    case 17:
      if ( dword_60CBD830 && sub_6068C438(MaskMgr_instance) == 1 )
      {
        sub_60239158(dword_60C8D9DC, a4, 6, 0);
        sub_6071FCAC(dword_60CBD830, a4);
      }
      break;
    case 18:
      if ( dword_60CBD830 && sub_6068C438(MaskMgr_instance) == 1 )
        sub_6071FD34(dword_60CBD830, a4);
      break;
    case 24:
      sub_60239158(dword_60C8D9DC, a4, 7, 0);
      sub_60417FFC(dword_60C9BAAC, 2u);
      break;
    default:
      return;
  }
}
