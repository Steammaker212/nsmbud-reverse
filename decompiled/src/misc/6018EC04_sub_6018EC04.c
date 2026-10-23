/* sub_6018EC04
 * address: 0x6018EC04   size: 468   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018EC04(int a1, _DWORD *a2)
{
  int v3; // r6
  unsigned int v4; // r9
  int v5; // r0
  int v6; // r10
  int v7; // r0
  int v8; // r8
  unsigned int v9; // r7
  _DWORD *v10; // r11
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v16; // [sp+8h] [bp-60h]
  _DWORD v17[20]; // [sp+18h] [bp-50h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = FIELD_U32(dword_60CC6D78, 36);
  if ( v5 )
  {
    if ( v5 != 1 )
      return v3;
    v4 = 1;
  }
  v6 = sub_601A443C(dword_60C89E18, *a2, a2[1]);
  v7 = sub_60182F10(v6, v4, a2[2]);
  v8 = v7;
  if ( v7 >= 1 )
  {
    v9 = 0;
    v3 = 0;
    v16 = v7;
    do
    {
      v10 = (_DWORD *)sub_60182ED0(v6, v4, a2[2], v9);
      v11 = sub_601A0554(dword_60C89E00, *a2);
      if ( v11 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 36))(v11) != 1
        || (v12 = sub_601A0878(dword_60C89E00, *a2, v10)) != 0
        && (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 36))(v12) != 1
        || (v13 = sub_601A0B9C(dword_60C89E00, *a2, v10)) != 0
        && !(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 36))(v13) )
      {
        ++v3;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
        sub_6017D524(v17, "%s%c", v10[1], 97);
        v14 = sub_601A0EC0(dword_60C89E00, *a2, v17);
        if ( v14 && (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 36))(v14) != 1 )
          ++v3;
        v8 = v16;
      }
      ++v9;
    }
    while ( v8 != v9 );
  }
  return v3;
}
