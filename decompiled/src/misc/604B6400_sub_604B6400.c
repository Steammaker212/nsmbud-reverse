/* sub_604B6400
 * address: 0x604B6400   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B6400(int a1)
{
  _DWORD *v2; // r4
  char *v3; // r0
  int i; // r1
  _DWORD *v5; // r5
  char *v6; // r0
  int j; // r2

  if ( !((int (*)(void))sub_604B7F9C)() )
    return 0;
  v2 = (_DWORD *)(sub_604B7F9C(a1) + 8);
  (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
  (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
  v3 = (char *)v2[1];
  if ( v3 != "CmnWindow_BtnL_Cancel_00" )
  {
    for ( i = 0; i < 524289; ++i )
    {
      if ( v3[i] != aCmnwindowBtnlC[i] )
        break;
      if ( !v3[i] )
        return 1;
    }
    v5 = (_DWORD *)(sub_604B7F9C(a1) + 8);
    (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
    (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
    v6 = (char *)v5[1];
    if ( v6 != "ModelPlayWindow_BtnL_00" )
    {
      for ( j = 0; j < 524289; ++j )
      {
        if ( v6[j] != aModelplaywindo_2[j] )
          break;
        if ( !v6[j] )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
