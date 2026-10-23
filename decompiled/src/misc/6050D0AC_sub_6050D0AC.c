/* sub_6050D0AC
 * address: 0x6050D0AC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050D0AC(_DWORD *a1)
{
  int result; // r0
  unsigned int v3; // s0
  float v4; // s16
  int v5; // r0
  unsigned int v6; // r0
  _DWORD v7[8]; // [sp+8h] [bp-20h] BYREF

  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = G_Icon_00_ref_50D440(0);
  result = sub_6047467C(a1, 0, &off_60BFF6A8, (int)v7, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)a1, 0);
    if ( result )
    {
      v3 = a1[888];
      v4 = (float)v3;
      if ( v3 == 6 )
        v4 = v4 + (float)(unsigned int)a1[889];
      v5 = sub_6047482C((int)a1, 0);
      (*(void (__fastcall **)(int, float))(*(_DWORD *)v5 + 96))(v5, v4);
      result = a1[888];
      if ( result == 6 )
      {
        result = a1[885];
        if ( result )
        {
          v6 = a1[890];
          if ( v6 >= 4 )
            v6 = 0;
          result = sub_6098E0F8(a1[887], dword_60CC6D78 + 1784 * v6 + 102208, 0);
          if ( result == 1 )
            return sub_6098E754(a1[885], a1[887], 0);
        }
      }
    }
  }
  return result;
}
