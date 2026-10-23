/* sub_60151114
 * address: 0x60151114   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60151114(int a1, _DWORD *a2, int a3)
{
  _BOOL4 result; // r0
  int v5; // r3
  int v6; // r4
  int v7; // r5
  int v8; // r12
  bool v9; // zf
  bool v10; // zf
  int v11; // r3
  bool v12; // zf
  bool v13; // zf

  result = 0;
  if ( (a2[77] & 0xF) != 0 )
  {
    v5 = a1 + 8 * a3;
    v6 = FIELD_U32(v5, 2528);
    if ( (v6 & 0x40000000) == 0 )
    {
      v7 = a2[76];
      v8 = FIELD_U32(v5, 2532);
      v9 = (unsigned __int16)v7 == 0x1F;
      if ( (unsigned __int16)v7 != 0x1F )
        v9 = (FIELD_U32(v5, 2532) & 0x20) == 0;
      if ( v9 )
      {
        v10 = (FIELD_U32(v5, 2528) & 0x1000) == 0;
        result = 0;
        if ( (v6 & 0x1000) == 0 )
          v10 = (v7 & 0xFFFFFF) == 0x4000D;
        if ( !v10 )
        {
          v11 = a2[36];
          v12 = v11 == 0;
          if ( v11 )
            v12 = (v8 & 4) == 0;
          if ( v12 )
          {
            v13 = (a2[34] & 0x800) == 0;
            if ( (a2[34] & 0x800) != 0 )
              v13 = (v8 & 8) == 0;
            if ( v13 )
              return !sub_60150EE8(a1, (int)a2, a3);
          }
        }
      }
    }
  }
  return result;
}
