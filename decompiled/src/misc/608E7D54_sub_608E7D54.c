/* sub_608E7D54
 * address: 0x608E7D54   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7D54(int a1, int a2, int a3)
{
  int v6; // r5
  _BYTE *v7; // r7
  bool v8; // zf
  int v10; // [sp+4h] [bp-1Ch] BYREF

  v6 = 0;
  v7 = *(_BYTE **)(a1 + 4);
  if ( v7 )
  {
    v10 = 0;
    v8 = a2 == 0;
    if ( a2 )
      v8 = v7[76] == 0;
    if ( !v8 && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v7 + 32))(v7, a1) == 1 )
    {
      (*(void (__fastcall **)(_BYTE *, int *, int, int, int))(*(_DWORD *)v7 + 68))(v7, &v10, a1, a2, a3);
      return v10;
    }
  }
  return v6;
}
