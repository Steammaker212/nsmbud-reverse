/* sub_607CC108
 * address: 0x607CC108   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CC108(int a1, int a2, int a3, int a4, float a5, float a6)
{
  int v12; // r6
  int v13; // r6
  _DWORD *v14; // r0
  int v15; // r1
  float v17[2]; // [sp+4h] [bp-34h] BYREF
  char v18; // [sp+Ch] [bp-2Ch]

  v12 = 0;
  if ( !sub_60766714(a1) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 188))(a1);
    FIELD_F32(a1, 88) = a6;
    if ( a5 > 0.0 || FIELD_S32(a1, 1232) >= 0 || (FIELD_U8(a1, 6912) & 1) == 0 )
    {
      v13 = FIELD_U32(a1, 1204) & 0x40000000;
      if ( a5 == 0.0 )
      {
        FIELD_F32(a1, 124) = a5;
        Player_changeState(a1, &stru_60CC54D0, 1);
      }
      else
      {
        v17[0] = a5;
        LODWORD(v17[1]) = a4;
        v18 = 1;
        sub_60773E6C(a1, &stru_60CC54AC, (int)v17);
      }
      FIELD_U32(a1, 1228) |= 0x40000u;
      FIELD_U32(a1, 1220) |= 0x100000u;
      if ( v13 )
        Player_changeState(a1, &stru_60CC553C, 1);
    }
    if ( !a2 )
    {
      sub_6078667C((_DWORD *)(a1 + 688), 2);
      FIELD_U32(a1, 1228) |= 0x2000u;
    }
    v12 = 1;
    if ( a3 == 2 )
    {
      v14 = (_DWORD *)(a1 + 688);
      v15 = 6;
      goto LABEL_16;
    }
    if ( a3 == 1 )
    {
      v14 = (_DWORD *)(a1 + 688);
      v15 = 5;
LABEL_16:
      sub_6078667C(v14, v15);
    }
  }
  return v12;
}
