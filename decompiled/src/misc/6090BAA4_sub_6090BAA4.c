/* sub_6090BAA4
 * address: 0x6090BAA4   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090BAA4(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int *v7; // [sp+4h] [bp-44h]
  int v8; // [sp+10h] [bp-38h]
  _BYTE v9[4]; // [sp+14h] [bp-34h] BYREF
  _BYTE v10[48]; // [sp+18h] [bp-30h] BYREF

  v8 = FIELD_U32(a2, 192);
  dword_60CC7674(v10);
  dword_60CC76B0(v9);
  v3 = FIELD_U32(a1, 4);
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    v7 = &dword_60CC767C;
    while ( 1 )
    {
      if ( (v3 & (1 << v5)) != 0 )
      {
        ((void (__fastcall *)(_BYTE *, int, int))dword_60CC76B4)(v9, v5, 1);
        ((void (__fastcall *)(_BYTE *, int))dword_60CC7678)(v10, v5);
        ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD, _DWORD, _DWORD, int *))*v7)(
          v10,
          *(unsigned __int8 *)(a1 + v4 + 40),
          *(unsigned __int8 *)(a1 + v4 + 42),
          *(unsigned __int8 *)(a1 + v4 + 41),
          *(unsigned __int8 *)(a1 + v4 + 43),
          v7);
        dword_60CC7680(v10, *(unsigned __int8 *)(a1 + v4 + 44), *(unsigned __int8 *)(a1 + v4 + 45));
        dword_60CC77F8(v8, v10);
      }
      if ( v4 == 42 )
        break;
      v3 = FIELD_U32(a1, 4);
      ++v5;
      v4 += 6;
    }
  }
  dword_60CC76B8(v9, 3);
  return dword_60CC7800(v8, v9);
}
