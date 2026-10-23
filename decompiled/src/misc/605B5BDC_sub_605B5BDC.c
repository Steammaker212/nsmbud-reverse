/* sub_605B5BDC
 * address: 0x605B5BDC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B5BDC(_DWORD *a1, Vec3 *a2, int a3, int a4, int a5)
{
  int *v7; // r6
  int result; // r0
  int v9; // r3
  int v10; // r2

  v7 = a1 + 1714;
  result = a1[1714] - 7;
  switch ( result )
  {
    case 0:
      return sub_605B5A3C((int)a1, (int)a2, a3, a4, a5);
    case 5:
    case 6:
      v9 = a1[1715];
      v10 = a1[1716];
      return (int)sub_60582B14(dword_60CAF15C, a2, v10, v9);
    case 12:
    case 17:
      if ( sub_60465D70(dword_60C9D3E4, a1[1715]) )
      {
        *v7 = 12;
        v10 = a1[1716];
        v9 = a1[1715];
        return (int)sub_60582B14(dword_60CAF15C, a2, v10, v9);
      }
      result = 3;
      goto LABEL_10;
    case 16:
      if ( FIELD_U32(dword_60C99DD4, 764) == 4 || sub_6078A168(PlayerMgr_instance) != 1 )
      {
        *v7 = 12;
        v9 = a1[1715];
        v10 = a1[1716];
        return (int)sub_60582B14(dword_60CAF15C, a2, v10, v9);
      }
      else
      {
        result = 23;
LABEL_10:
        *v7 = result;
      }
      return result;
    default:
      return result;
  }
}
