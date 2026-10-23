/* sub_60857700
 * address: 0x60857700   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60857700(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v9; // r5
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _BYTE v18[52]; // [sp+Ch] [bp-34h] BYREF

  v9 = 0;
  if ( a4 > 829317487 )
  {
    switch ( a4 )
    {
      case 829716596:
        v15 = dword_60CC7F88(272, 16, dword_60CC7F90);
        v9 = v15;
        if ( v15 )
          sub_6085C340(v15, a2, a3, v18, a5, a6, a7);
        else
          v9 = 0;
        (*(void (__fastcall **)(int, int, int, int, _BYTE *))(*(_DWORD *)v9 + 108))(v9, a2, a3, a7, v18);
        break;
      case 829715056:
        v16 = dword_60CC7F88(192, 16, dword_60CC7F90);
        if ( v16 )
          return sub_60859AE4(v16, a5, a6, a7);
        break;
      case 829317488:
        v12 = dword_60CC7F88(176, 16, dword_60CC7F90);
        if ( v12 )
          return ((int (__fastcall *)(int, int, int))loc_60857B80)(v12, a5, a7);
        break;
    }
  }
  else
  {
    switch ( a4 )
    {
      case 828598640:
        v13 = dword_60CC7F88(208, 16, dword_60CC7F90);
        if ( v13 )
          return sub_60859D08(v13, a2, a3, a5, a6, a7);
        break;
      case 828665442:
        v14 = dword_60CC7F88(176, 16, dword_60CC7F90);
        if ( v14 )
          return sub_60864E60(v14, a5, a6, a7);
        break;
      case 828665463:
        v10 = dword_60CC7F88(240, 16, dword_60CC7F90);
        if ( v10 )
          return sub_60860664(v10, a2, a3, a5, a6, a7);
        break;
    }
  }
  return v9;
}
