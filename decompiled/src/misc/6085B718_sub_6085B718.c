/* sub_6085B718
 * address: 0x6085B718   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085B718(int a1, int a2, int a3)
{
  int v3; // r4
  int v5; // r7
  bool v6; // zf
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int v11; // [sp+Ch] [bp-1Ch] BYREF

  v3 = 0;
  v11 = 0;
  v5 = (*(int (__fastcall **)(int, int *, int, int))(*(_DWORD *)a1 + 24))(a1, &v11, 1718578804, a3);
  v6 = v5 == 0;
  if ( v5 )
    v6 = v11 == 0;
  if ( !v6 )
  {
    v7 = sub_60855BC8(120);
    v8 = v7;
    if ( v7 )
    {
      v9 = sub_60999BDC(v7);
      v3 = 0;
      if ( sub_60999C60(v9, a2, v5, 0, 0, 0) )
      {
        return v8;
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
        sub_60855BF0(v8);
      }
    }
  }
  return v3;
}
