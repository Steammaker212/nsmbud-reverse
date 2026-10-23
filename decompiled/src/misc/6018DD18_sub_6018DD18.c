/* sub_6018DD18
 * address: 0x6018DD18   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018DD18(int a1, _DWORD *a2, int a3)
{
  int v5; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r5

  v5 = sub_601A0554(dword_60C89E00, *a2);
  v6 = v5;
  v7 = 0;
  if ( v5 && !(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 36))(v5) )
  {
    sub_60220E60(v6);
    v7 = 1;
  }
  v8 = sub_601A0878(dword_60C89E00, *a2, a3);
  v9 = v8;
  if ( v8 && !(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 36))(v8) )
  {
    sub_60220E60(v9);
    v7 = 1;
  }
  v10 = sub_601A0B9C(dword_60C89E00, *a2, a3);
  v11 = v10;
  if ( v10 && !(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 36))(v10) )
  {
    sub_60220E60(v11);
    return 1;
  }
  return v7;
}
