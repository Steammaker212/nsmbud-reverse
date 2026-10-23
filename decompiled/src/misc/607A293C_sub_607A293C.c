/* sub_607A293C
 * address: 0x607A293C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A293C(int a1)
{
  int v2; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  void (__fastcall *v10)(int, int, _DWORD); // r3
  int v11; // r1
  float v12; // s0

  v2 = a1 + 11956;
  sub_6074EED0(a1 + 11956);
  if ( !FIELD_U32(a1, 11988) )
    return 0;
  if ( (FIELD_U8(a1, 1219) & 2) == 0 )
  {
    if ( sub_6074F0C4(v2) )
    {
      sub_607A2AF8(a1);
    }
    else
    {
      FIELD_U32(a1, 12000) = 0;
      if ( (FIELD_U8(a1, 1213) & 0x40) != 0 )
        FIELD_U32(a1, 12000) = FIELD_U32(a1, 11972);
      v4 = FIELD_U32(a1, 11984);
      v5 = FIELD_U32(a1, 11980);
      FIELD_U32(a1, 144) = FIELD_U32(a1, 11976);
      FIELD_U32(a1, 148) = v5;
      FIELD_U32(a1, 152) = v4;
      v6 = a1 + 11368;
      sub_6078E608(*(float **)(a1 + 11368), FIELD_U32(a1, 11964));
      v7 = FIELD_U32(a1, 11964);
      if ( v7 == 6 )
      {
        v9 = *(_DWORD *)v6;
        v10 = *(void (__fastcall **)(int, int, _DWORD))(**(_DWORD **)v6 + 176);
        v11 = 3;
      }
      else
      {
        v8 = v7 == 2;
        v9 = *(_DWORD *)v6;
        v10 = *(void (__fastcall **)(int, int, _DWORD))(**(_DWORD **)v6 + 176);
        if ( v8 )
          v11 = 2;
        else
          v11 = 1;
      }
      v10(v9, v11, 0);
    }
  }
  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    v12 = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
    FIELD_F32(a1, 124) = v12;
    FIELD_F32(a1, 112) = v12 + FIELD_F32(a1, 112);
  }
  ((void (__fastcall *)(int, _DWORD))loc_60799BA0)(a1, 0);
  sub_607612CC(a1, 1);
  if ( (FIELD_U8(a1, 1217) & 0x80) != 0 )
    sub_6079EA38((_DWORD *)a1);
  if ( FIELD_U32(a1, 11988) == 2 )
  {
    if ( (FIELD_U8(a1, 1219) & 2) != 0 )
      sub_6078E608(*(float **)(a1 + 11368), FIELD_U32(a1, 11964));
    FIELD_U32(a1, 9576) = 8;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 2);
  }
  return 1;
}
